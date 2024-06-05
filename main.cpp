#include <iostream>
#include "calculator/calc.h"
#include "hm/hm.h"

using namespace std;

template <typename TValue, typename TReturn>
TReturn * max(TValue * a, TValue * b) {
    return *a > *b ? a : b;
}

template <typename TReturn>
TReturn* inputPointer(string text) {
    TReturn * temp = new TReturn;

    do {
        cout << text;
        cin >> *temp;
    }while(*temp < NULL);
    return temp;
}

template <typename TValue>
void sign(TValue * value) {
    if(*value > 0) {
        cout << "Number > 0" << endl;
    }
    else if(*value < 0){
        cout << "Number < 0" << endl;
    }
    else {
        cout << "Number equals 0" << endl;
    }
}

void reverse() {
    int number_1, number_2, number_3;
    cin >> number_1 >> number_2;
    int *ptr = &number_1;
    number_3 = number_1;
    *ptr = number_2;
    number_2 = number_3;

    cout << "Number 1: " << number_1 << endl;
    cout << "Number 2: " << number_2 << endl;
}

template<typename T>
T * arrays(T arr[], int size) {
    if(typeid(T) == typeid(string) || typeid(T) == typeid(char)) {
        cout << "You trying to use string or char type. This type isn't supported." << endl;
        return NULL;
    }
    T * sum = new T {0};
    for(int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    return sum;
}

int main() {
    // // Task 1
    // cout << "The bigger number is " << *max<int, int>(new int{4}, new int {5}) << endl;
    //
    // // Task 2
    // sign<int>(inputPointer<int>("Enter a number: "));
    //
    // // Task 3
    // reverse();
    //
    // // Task 4
    // Calc calculator;
    // int a = 4, b = 5;
    // cout << a << " + " << b << " = " << calculator.plus(&a, &b) << endl;
    // cout << "5 / 0 = " << calculator.divide(new int {5}, new int {0}) << endl;
    //
    // // Task 5
    // double arr[5] = {5.25, 6.213, 1.3271, 0.5, 2.356};
    // cout << *arrays<double>(arr, 5);

    // // HM Task 1
    // task_1();

    // // HM Task 2
    // task_2();

    // // HM Task 3
    task_3();

    return 0;
}
