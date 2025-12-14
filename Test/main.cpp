#include <iostream>
#include "..\StaticLib\arraylib.h"    // Статическая библиотека
#include "..\DynamicLIb\arrayprocessor.h"       // Динамическая библиотека
#include "..\Namespace\arrayutils.h"          // Пространство имен



int main() {
    setlocale(LC_ALL, "rus");
    // Пример 1: Статическая библиотека
    std::cout << "=== Пример 1: Статическая библиотека ===" << std::endl;

    int staticArray[] = { 5, 2, 8, 1, 9, 3 };
    int staticSize = sizeof(staticArray) / sizeof(staticArray[0]);

    std::cout << "Исходный массив: ";
    ArrayUtils::displayArray(staticArray, staticSize);

    ArrayUtils::sortArray(staticArray, staticSize);
    std::cout << "После сортировки: ";
    ArrayUtils::displayArray(staticArray, staticSize);

    int index1 = ArrayUtils::findElement(staticArray, staticSize, 8);
    std::cout << "Поиск числа 8: индекс " << index1 << std::endl;

    double avg1 = ArrayUtils::averageArray(staticArray, staticSize);
    std::cout << "Среднее значение: " << avg1 << std::endl;

    // Пример 2: Динамическая библиотека
    std::cout << "\n=== Пример 2: Динамическая библиотека ===" << std::endl;

    int dynamicArray[] = { 10, 4, 6, 2, 8, 12 };
    int dynamicSize = sizeof(dynamicArray) / sizeof(dynamicArray[0]);

    std::cout << "Исходный массив: ";
    ArrayUtils::displayArray(dynamicArray, dynamicSize);

    ArrayUtils::ArrayProcessor processor(dynamicArray, dynamicSize);
    processor.sort();

    std::cout << "После сортировки через ArrayProcessor: ";
    ArrayUtils::displayArray(dynamicArray, dynamicSize);

    int index2 = processor.find(6);
    std::cout << "Поиск числа 6: индекс " << index2 << std::endl;

    double avg2 = processor.average();
    std::cout << "Среднее значение: " << avg2 << std::endl;

    return 0;
}