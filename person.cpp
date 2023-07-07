#include "person.h"

int Person::person_count = 8; 

Person::Person(const std::string &names_params, int age_param): full_name{names_params}, age{age_param}
{
    ++person_count;
}