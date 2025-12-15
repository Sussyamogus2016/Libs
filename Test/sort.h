#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>

// Сортировка вставками для списка файлов
void sort_files(std::vector<std::string>& files) {
    int n = files.size();
    for (int i = 1; i < n; i++) {
        std::string key = files[i];
        int j = i - 1;

        // Сравниваем строки (имена файлов)
        while (j >= 0 && files[j] > key) {
            files[j + 1] = files[j];
            j--;
        }
        files[j + 1] = key;
    }
}

#endif // SORT_H