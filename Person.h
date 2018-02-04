//
// Created by kus on 2/3/18.
//

#ifndef HELLO_WORLD_PERSON_H
#define HELLO_WORLD_PERSON_H

#include <string>
#include <utility>

class Person {
public:
    Person(const std::string &name, int yearOfBirth);

    std::string getName();

    int getAge();

private:
    std::string name;
    int yearOfBirth;
};

#endif //HELLO_WORLD_PERSON_H
