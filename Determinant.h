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

    double get_determinant() const;

    void input_matrix() const;

    void set_value(int,int,double);

private:
    double determinant_calculator() const;

    double **matrix_;
    int n_;


};



#endif //DETERMINANT_DETERMINANT_H
