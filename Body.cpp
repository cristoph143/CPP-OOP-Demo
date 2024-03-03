#include "Body.h"
#include <iostream>

namespace Person {

    Body::Body() : PersonComponent("Body") {}

    Body::~Body() {}

    void Body::performFunction() const {
        std::cout << "Moving..." << std::endl;
    }

}