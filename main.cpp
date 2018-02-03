#include <iostream>
#include "Person.h"

int main() {

    Person me = Person("Abraham Lincoln", 1809);
    std::cout << "Hello, " << me.getName() << "! According to our records, you were born about " << me.getAge()
              << " years ago." << std::endl;
    return 0;
}