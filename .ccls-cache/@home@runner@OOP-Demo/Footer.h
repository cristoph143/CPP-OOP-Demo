#pragma once

#ifndef FOOTER_H
#define FOOTER_H

#include "PersonComponent.h"

namespace Person {

    /**
     * Footer class representing the base support of a person.
     * Inherits from PersonComponent and implements performFunction.
     */
    class Footer : public PersonComponent {
    public:
        Footer();
        virtual ~Footer();
        void performFunction() const override;
    };

}

#endif // FOOTER_H
