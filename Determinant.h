//
// Created by a1016 on 2023/4/10.
//

#ifndef DETERMINANT_DETERMINANT_H
#define DETERMINANT_DETERMINANT_H

#include <iostream>
#include <iomanip>

class Determinant {
public:

    explicit Determinant(int n);

    ~Determinant();

    long long get_determinant() const;

    void input_matrix() const;

    void set_value(int,int,long long);

private:
    long long determinant_calculator() const;

    long long **matrix_;
    int n_;


};



#endif //DETERMINANT_DETERMINANT_H
