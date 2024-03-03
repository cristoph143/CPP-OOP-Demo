#include "Menu.h"

namespace Menu {

/*
     void showMenu() {
        int choice = 0;

        std::cout << "Object-Oriented Programming Demonstration" << std::endl;
        std::cout << "========================================" << std::endl;

        while (true) {
            displayOptions();
            std::cin >> choice;

            if (std::cin.fail() || choice < 1 || choice > 3) {
                std::cout << "Invalid option, please enter a number 1-3." <<
   std::endl; clearInput(); continue;
            }

            if (choice == 3) {
                exitProgram();
                break;
            }

            handleChoice(choice);
        }
    }
*/

void showMenu() {
  std::vector<MenuOption> options = getMenuOptions();

  std::cout << "Object-Oriented Programming Demonstration" << std::endl;
  std::cout << "========================================" << std::endl;

  while (true) {
    displayOptions(options);
    int choice;
    std::cin >> choice;

    if (std::cin.fail()) {
      std::cout << "Invalid input. Please enter a number." << std::endl;
      clearInput();
      continue;
    }

    if (choice == static_cast<int>(options.size())) {
      options.back().action(); // Assuming the last option is always to exit
      break;
    }

    handleChoice(options, choice);
  }
}
// Helper function to clear input errors and ignore the rest of the line
void clearInput() {
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/*
    // Function to display the menu options
    void displayOptions() {
        std::cout << "\nSelect an option:" << std::endl;
        std::cout << "1. Perform actions directly on instances" << std::endl;
        std::cout << "2. Perform actions using polymorphism" << std::endl;
        std::cout << "3. Exit" << std::endl;
    }

*/

// Function to display the menu options
void displayOptions(const std::vector<MenuOption> &options) {
  std::cout << "\nSelect an option:" << std::endl;
  for (size_t i = 0; i < options.size(); ++i) {
    std::cout << i + 1 << ". " << options[i].text << std::endl;
  }
}

// Function to create and return the menu options
std::vector<MenuOption> getMenuOptions() {
  return {{"Perform actions directly on instances", performActionsDirectly},
          {"Perform actions using polymorphism", performActionsPolymorphically},
          {"Exit", exitProgram}};
}

/*
    *  // Function to handle the user's menu choice
    void handleChoice(int choice) {
        switch (choice) {
        case 1:
            performActionsDirectly();
            break;
        case 2:
            performActionsPolymorphically();
            break;
        case 3:
            exitProgram();
            break;
        default:
            std::cout << "Unexpected error occurred." << std::endl;
            break;
        }
    }
*/

// Function to handle the user's menu choice
void handleChoice(const std::vector<MenuOption> &options, int choice) {
  if (choice > 0 && choice <= static_cast<int>(options.size())) {
    options[choice - 1].action();
  } else {
    std::cout << "Invalid choice. Please try again." << std::endl;
  }
}

void exitProgram() { std::cout << "Exiting program." << std::endl; }

/**
 * Function to perform actions directly on instances of derived classes.
 * Demonstrates direct method calls on objects of Head, Body, and Footer.
 */
void performActionsDirectly() {
  Person::Head head;
  Person::Body body;
  Person::Footer footer;

  std::cout << "Performing actions directly on instances:" << std::endl;
  head.performFunction();
  body.performFunction();
  footer.performFunction();
}

/**
 * Function to perform actions using polymorphism.
 * Demonstrates dynamic polymorphism by storing derived objects in a vector of
 * base class pointers and invoking the performFunction method, which is
 * determined at runtime.
 */
void performActionsPolymorphically() {
  std::vector<std::unique_ptr<Person::PersonComponent>> components;
  components.push_back(std::make_unique<Person::Head>());
  components.push_back(std::make_unique<Person::Body>());
  components.push_back(std::make_unique<Person::Footer>());

  std::cout << "Performing actions using polymorphism:" << std::endl;
  for (const auto &component : components) {
    component->performFunction();
  }
}
} // namespace Menu
