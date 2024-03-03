#include "PersonComponent.h"

namespace Person {

    /*
    * :: ->  Scope Resolution - use to define scope of a function or variable
    *    ->  acess a member of a namespace, class or enum
    * :  ->  use for initializing members in a constructors
    *    -> defines inheretance for a class
    *    -> labels in case switch statements
    */
    PersonComponent::PersonComponent(const std::string& name) : componentName(name) {
        constructComponent();
    }

    PersonComponent::~PersonComponent() {
        deconstructComponent();
    }

    void PersonComponent::constructComponent() const {
        std::cout << "Constructing " << componentName << std::endl;
    }

    void PersonComponent::deconstructComponent() const {
        std::cout << "Deconstructing " << componentName << std::endl;
    }

    void PersonComponent::performFunction() const{
        std::cout << componentName << "performs base action. " << std::endl;
    }

}
