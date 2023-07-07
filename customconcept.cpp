#include <iostream>

int main() {
    if (__cplusplus == 201703L) {
        std::cout << "C++17" << std::endl;
    } else if (__cplusplus == 201402L) {
        std::cout << "C++14" << std::endl;
    } else if (__cplusplus == 201103L) {
        std::cout << "C++11" << std::endl;
    } else {
        std::cout << "Pre-C++11" << std::endl;
    }

    return 0;
}