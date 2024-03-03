#pragma once

#ifndef PERSON_COMPONENT_H
#define PERSON_COMPONENT_H

#include <iostream>
#include <string>

// Namespace for the person components
namespace Person {

    /**
     * Abstract base class for person components.
     * Demonstrates encapsulation and abstraction.
     */
    class PersonComponent {
    private:
        std::string componentName;  // Name of the component, demonstrating encapsulation.

    protected:
        // Protected constructor to be called by derived classes.
        PersonComponent(const std::string& name);

    public:
        // Virtual destructor for proper cleanup of derived classes.
        virtual ~PersonComponent();
        void constructComponent() const;
        void deconstructComponent() const;
        // Pure virtual function to perform the component's function, demonstrating polymorphism.
        // 
        virtual void performFunction() const = 0;
    };

}

#endif // PERSON_COMPONENT_H
