//
// Created by a1016 on 2023/2/17.
//

#ifndef DETERMINANT_MATRIX_H
#define DETERMINANT_MATRIX_H

#include <iostream>
#include <iomanip>

namespace Matrix {

    class Matrix {
    public:
        double **matrix;

        explicit Matrix(int n);

        double get_determinant() const;

        void input_matrix() const;

        void delete_matrix() const;

    private:
        double determinant_calculate() const;

        int _n;
    };

} // Matrix

#endif //DETERMINANT_MATRIX_H
