#include <iostream>
#include "Determinant.h"

int main() {
    int n;
    std::cout << "Input n:..." << std::endl;
    std::cin >> n;
    auto *d = new Determinant(n);
    d->input_matrix();
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "det = " << d->get_determinant();
    delete d;
    return 0;
}
