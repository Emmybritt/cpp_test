#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
private:
    /* data */
public: //Access modifier
    Person(const std::string& names_params, int age_param){
        full_name = names_params;
        age =  age_param;
    }

    void print_info() const{
        std::cout << "name: " << full_name << ", age: " << age << std::endl;
    }

private: //access modifier
    std::string full_name;
    int age;

public:  //access modifier
    static int person_count; 
 
};

#endif

