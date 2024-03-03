#include "Menu.h"


/**
 * Main program that presents a menu to compare direct method calls with dynamic polymorphism.
 *
 * The user can choose to directly invoke methods on class instances or to invoke methods
 * polymorphically through a vector of base class pointers. This illustrates the different
 * behaviors and usage of direct calls versus polymorphic calls.
 */
int main() {
    Menu::showMenu();

    return 0; // This return statement is redundant but included for completeness.
}

