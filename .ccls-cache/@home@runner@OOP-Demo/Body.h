#pragma once

#ifndef BODY_H
#define BODY_H

#include "PersonComponent.h"

namespace Person {

    /**
     * Body class representing the body of a person.
     * Inherits from PersonComponent and implements performFunction.
     */
    class Body : public PersonComponent {
    public:
        Body();
        virtual ~Body();
        void performFunction() const override;
    };

}

#endif // BODY_H
