#include "Footer.h"
#include <iostream>

namespace Person {

    Footer::Footer() : PersonComponent("Footer") {}

    Footer::~Footer() {}

    void Footer::performFunction() const {
        std::cout << "Supporting..." << std::endl;
    }

}
