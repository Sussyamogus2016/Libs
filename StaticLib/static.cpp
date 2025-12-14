#include "arraylib.h"

namespace ArrayUtils {
    void sortArray(int* arr, int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int findElement(const int* arr, int size, int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return i;
            }
        }
        return -1;
    }

    double averageArray(const int* arr, int size) {
        if (size == 0) return 0.0;
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum / size;
    }
}