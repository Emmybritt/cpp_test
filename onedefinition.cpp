#include <iostream>
#include "person.h"

double weight {};

double add(double a, double b) {
    return a + b;
};

int add(int a, int b) {
    return a + b;
};



struct Point {
    double m_x{};
    double m_y{};
}; 

int main() {
    double result = add(6.3, 4.4);
    int result2 = add(2, 2);
    std::cout << weight << std::endl;
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    Point py;
    std::cout << "py.x : " << py.m_x << " py.y: " << py.m_y << std::endl;
  
    std::cout << "===================================== Ends Here ===========================================" << std::endl;
    Person p1("Emmy britt", 25);
    p1.print_info();
    Person p2("Daniel Moor", 35);
    p2.print_info();
}