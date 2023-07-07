#include <iostream>
#include <concepts>
#include <type_traits>


template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type add(T a, T b) {
    return a + b;
}

int main() {

    std::cout << "Hello World" << std::endl;
    char num1 {50};
    char num2 {70};
    auto result = add(num1, num2);

    // std::cout << num1 << num2 << std::endl;
    std::cout <<"Result :" << static_cast<int>(result) << std::endl;

    std::cout << "======================== char type Ends here ==========================" << std::endl;

    int b_0 {11};
    int b_1 {5};
    auto result_2 = add(b_0, b_1);
    std::cout << result_2 << std::endl;

    std::cout << "======================== int type Ends here ==========================" << std::endl;

    
    // double c_0 {11.5};
    // double c_1 {344.33};
    // auto result_3 = add(c_0, c_1);
    // std::cout << result_3 << std::endl;
    

    return 0;
}

template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type max(T a, T b){
    if (a > b)
    {
       return a;
    }else{
        return b; 
    }
    
}

template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type multiply(T a, T b) {
    return a * b;
}
 