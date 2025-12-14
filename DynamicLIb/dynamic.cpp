#include "arrayprocessor.h"

namespace ArrayUtils {
    ArrayProcessor::ArrayProcessor(int* arr, int n) : size(n) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    ArrayProcessor::~ArrayProcessor() {
        delete[] data;
    }

    void ArrayProcessor::sort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }

    int ArrayProcessor::find(int value) const {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return i;
            }
        }
        return -1;
    }

    double ArrayProcessor::average() const {
        if (size == 0) return 0.0;
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return sum / size;
    }
}