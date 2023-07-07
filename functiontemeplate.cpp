#include <iostream>
#include <string>
#include <cstring>

template <typename T>
T add(T a, T b) {
    return a > b ? a : b;
}

int sum(int a, int b) {
    return a + b;
}
template <typename T> T& maximum(T& a, T& b);
template <typename T> T& add(T& a, T& b);


int main() {
    const int int_val = add<int>(4.3, 5);
    const double double_val = add<double>(5.99, 3);
    const std::string_view sting_val = add<std::string>("Hello", "worldss");
    int num1 {45};
    int num2 {60};
    int max = maximum<int>(num1, num2);
    std::cout << "& is : " << &num1 << std::endl;
    std::cout << "& result is : " << &max << std::endl;
    std::cout << "This is the int value" << int_val << std::endl;
    std::cout << "This is the double value: " << double_val << std::endl;
    std::cout << "This is the double value: " << double_val << std::endl;
    std::cout << "This is the string value: " << sting_val << std::endl;

    std::cout << "============================================== This is the end ===============================" << std::endl;

    const char* g{"wild"};
    const char* h{"animal"};

    std::cout << &g << std::endl;

    return 0;
}

template <typename T> T& maximum(T& a, T& b) {
    std::cout << &a << std::endl;
    T& res = a > b ? a : b;
    std::cout << "& result is : " << &res << std::endl;
    return res;
}

template <>
const char * maximum<const char*> (const char* a, const char* b) {
    return (std::strcmp(a, b) > 0 ) ? a : b;
}

template <typename T> T& add(T& a, T& b) {
    if (a != b)
    {
        return a + b;
    }else{
        std::cout << "Cannot add and b together since they are of the same type" << std::endl;
        return a;
    }
    
}