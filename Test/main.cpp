// main.cpp
#include <iostream>
#include "..\StaticLib\Header.h"
extern "C" void hello1();

int main() {
    hello();
    hello1();
    return 0;
}
