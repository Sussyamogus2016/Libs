#pragma once

namespace ArrayUtils {
    // Функции для работы с массивами
    void sort(int* arr, int size);
    int find(const int* arr, int size, int value);
    double average(const int* arr, int size);
    void printArray(const int* arr, int size);
}