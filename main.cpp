#include <iostream>
#include "Matrix.h"

int main() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    Matrix::Matrix matrix(n);
    matrix.input_matrix();
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "det = " << matrix.get_determinant() << std::endl;
    matrix.delete_matrix();
    return 0;
}

