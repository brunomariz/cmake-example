#include <iostream>

#include "MyPrint.h"

int main() {
    std::cout << "Using your own library:" << std::endl;
    mylibrary::my_print("hello, world!");
}