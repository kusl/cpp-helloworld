//
// Created by kus on 2/3/18.
//

#include "Person.h"
#include <chrono>

Person::Person(const std::string &name, int yearOfBirth) : name(name), yearOfBirth(yearOfBirth) {}

std::string Person::getName() {
    return this->name;
}

int Person::getAge() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm *parts = std::localtime(&now_c);
    int currentYear = 1900 + parts->tm_year;
    auto age = currentYear - this->yearOfBirth;
    if (age < 0) { return 0; }
    return age;
}
