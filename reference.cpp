#include <iostream>

using namespace std;

int main() {
    int int_dat {33};
    int ref_int_data = int_dat;
    int ref_int_data2 = ref_int_data;
    std::cout << ref_int_data2 << std::endl;
    return 0;
}