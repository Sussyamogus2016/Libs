#include "arraylib.h"
#include <iostream>
#include <algorithm>
#include <numeric>

namespace ArrayUtils {
    void sort(int* arr, int size) {
        std::sort(arr, arr + size);
    }

    int find(const int* arr, int size, int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                return i;
            }
        }
        return -1;
    }

    double average(const int* arr, int size) {
        if (size == 0) return 0.0;
        double sum = std::accumulate(arr, arr + size, 0.0);
        return sum / size;
    }

    void printArray(const int* arr, int size) {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i];
            if (i < size - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
}