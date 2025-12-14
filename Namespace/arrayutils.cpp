#include "arrayutils.h"
#include <iostream>

namespace ArrayUtils {
    void displayArray(const int* arr, int size) {
        std::cout << "[";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i];
            if (i < size - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
}