#include "hm.h"

void task_1() {
    const int size = 5;
    int *arr_1 = new int[size];
    for(int i = 0; i < size; i++) {
        arr_1[i] = i;
    }
    int *arr_2 = new int[size];
    int *iter = arr_1;
    for(int i = 0; i < size; i++) {
        arr_2[i] = *iter;
        iter++;
        cout << arr_2[i] << " ";
    }

    delete[] arr_1;
    delete[] arr_2;
}

void task_2() {
    const int size = 5;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }
    int *iter = &arr[size - 1];
    int num;
    for(int i = 0; i < size / 2; i++) {
        num = arr[i];
        arr[i] = *iter;
        *iter = num;
        iter--;
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
}

void task_3() {
    const int size = 5;
    int *arr_1 = new int[size];
    for(int i = 0; i < size; i++) {
        arr_1[i] = i;
    }
    int *arr_2 = new int[size];
    int *iter = &arr_1[size - 1];
    for(int i = 0; i < size; i++) {
        arr_2[i] = *iter;
        iter--;
        cout << arr_2[i] << " ";
    }

    delete[] arr_1;
    delete[] arr_2;
}
