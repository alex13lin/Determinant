//
// Created by a1016 on 2023/2/17.
//

#include "Matrix.h"

namespace Matrix {
    Matrix::Matrix(int n) {
        _n = n;
        matrix = new double *[_n];
        for (int i = 0; i < n; ++i)matrix[i] = new double[_n];
    }

    double Matrix::get_determinant() const{
        if (_n == 1)return matrix[0][0];
        else if (_n == 2)return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        else return determinant_calculate();
    }

    double Matrix::determinant_calculate() const {
        double det = 0;
        Matrix m(_n - 1);
        double **M = m.matrix;
        for (int a = 0; a < _n; ++a) {
            for (int i = 1, minor_i = 0; i < _n; ++i, ++minor_i) {
                for (int j = 0, minor_j = 0; j < _n; ++j) {
                    if (j == a)continue;
                    M[minor_i][minor_j++] = matrix[i][j];
                }
            }
            if (a % 2 == 0)det += matrix[0][a] * m.get_determinant();
            else det -= matrix[0][a] * m.get_determinant();
        }
        m.delete_matrix();
        return det;
    }


    void Matrix::delete_matrix() const {
        for (int i = 0; i < _n; ++i)delete[] matrix[i];
        delete[] matrix;
    }

    void Matrix::input_matrix() const {
        for (int i = 0; i < _n; ++i) {
            for (int j = 0; j < _n; ++j)std::cin >> matrix[i][j];
        }
    }


} // Matrix