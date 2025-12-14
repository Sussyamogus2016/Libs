// mylib.cpp
#include <iostream>

extern "C" __declspec(dllexport) void hello1() {
    std::cout << "Hello from the dynamic library!" << std::endl;
}
