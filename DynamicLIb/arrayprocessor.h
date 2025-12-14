#ifndef ARRAYPROCESSOR_H
#define ARRAYPROCESSOR_H

#ifdef ARRAYPROCESSOR_EXPORTS
#define ARRAYPROCESSOR_API __declspec(dllexport)
#else
#define ARRAYPROCESSOR_API __declspec(dllimport)
#endif

namespace ArrayUtils {
    class ARRAYPROCESSOR_API ArrayProcessor {
    private:
        int* data;
        int size;

    public:
        ArrayProcessor(int* arr, int n);
        ~ArrayProcessor();

        void sort();
        int find(int value) const;
        double average() const;
    };
}

#endif // ARRAYPROCESSOR_H