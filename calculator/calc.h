//
// Created by ficus on 6/5/24.
//

#ifndef CALC_H
#define CALC_H

#include <iostream>

using namespace std;

class Calc {
public:
    int plus(int * num_1, int * num_2);

    int minus(int * num_1, int * num_2);

    int multiply(int * num_1, int * num_2);

    int divide(int * num_1, int * num_2);
};

#endif //CALC_H
