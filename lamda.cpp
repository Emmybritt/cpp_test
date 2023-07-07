#include <iostream>
#include <ios>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    auto funct = [&](int a, int b) -> int{
        return a + b;
    };
    std::cout << "This is the value of lamda function: " << funct(5,9) << std::endl;
    std::cout << "This is the value of lamda function: " << std::endl;

    double* val = {new(std::nothrow) double[5] {1,4,5,6,9}};

    std::cout << "This the value t" << std::endl;

    return 0;
   
}