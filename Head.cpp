#include "Head.h"
#include <iostream>

namespace Person {

    Head::Head() : PersonComponent("Head") {}

    Head::~Head() {}

    void Head::performFunction() const {
        std::cout << "Thinking..." << std::endl;
    }

}