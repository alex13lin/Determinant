//
// Created by a1016 on 2023/4/10.
//

#include "Determinant.h"

Determinant::Determinant(int n) {
    n_ = n;
    matrix_ = new long long *[n_];
    for (int i = 0; i < n_; i++)matrix_[i] = new long long[n_];
}

Determinant::~Determinant() {
    for (int i = 0; i < n_; i++)delete[] matrix_[i];
    delete[] matrix_;
}

long long Determinant::get_determinant() const {
    if (n_ == 1)return matrix_[0][0];
    else if (n_ == 2)return matrix_[0][0] * matrix_[1][1] - matrix_[0][1] * matrix_[1][0];
    else return determinant_calculator();
}

void Determinant::input_matrix() const {
    for (int i = 0; i < n_; i++)
        for (int j = 0; j < n_; j++) {
            std::cout << "Input matrix[" << i << "][" << j << "] value:...";
            std::cin >> matrix_[i][j];
        }
}

long long Determinant::determinant_calculator() const {
    long long det = 0;
    auto *m = new Determinant(n_ - 1);
    for (int k = 0; k < n_; k++) {
        for (int i = 1, minor_i = 0; i < n_; i++, minor_i++) {
            for (int j = 0, minor_j = 0; j < n_; j++) {
                if (j != k)m->set_value(minor_i, minor_j++, matrix_[i][j]);
            }
        }
        det += (k % 2 == 0 ? 1 : -1) * matrix_[0][k] * m->get_determinant();
    }
    delete m;
    return det;
}

void Determinant::set_value(int i, int j, long long value) {
    matrix_[i][j] = value;
}
