#include "calc.h"

int Calc::divide(int * num_1, int * num_2) {
    if(*num_2 == 0)
        return 0;
    else
        return *num_1 / *num_2;
}

int Calc::plus(int *num_1, int *num_2) {
    return *num_1 + *num_2;
}

int Calc::minus(int *num_1, int *num_2) {
    return *num_1 - *num_2;
}

int Calc::multiply(int *num_1, int *num_2) {
    return *num_1 * *num_2;
}
