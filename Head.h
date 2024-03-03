#pragma once

#ifndef HEAD_H
#define HEAD_H

#include "PersonComponent.h"

namespace Person {

    /**
     * Head class representing the head of a person.
     * Inherits from PersonComponent and implements performFunction.
     */
    class Head : public PersonComponent {
    public:
        Head();
        virtual ~Head();
        void performFunction() const override;
    };

}

#endif // HEAD_H
