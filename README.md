# Object-Oriented Programming Demonstration in C++

## Overview

This project demonstrates basic Object-Oriented Programming (OOP) principles in C++ using a simple class hierarchy that represents different components of a person. The project illustrates the use of abstract classes, polymorphism, smart pointers, and a dynamic menu system to interact with the user.

## How to Build and Run

### Prerequisites

- Ensure you have a C++ compiler installed (e.g., g++, clang++, or MSVC).
- Make sure you have CMake or a similar build system if your project is set up to use one.

### Building the Project

- Navigate to your project directory.
- Compile the project. This process will vary depending on your setup. A common command-line compilation might look like this if you're not using a build system:
```
g++ -std=c++17 main.cpp menu.cpp Head.cpp Body.cpp Footer.cpp -o OOPDemo
```
- If your project is set up with CMake, you would typically run:
```
cmake .
make
```

### Running the Program

- Once the build is complete, you can run the program from the command line:
```
./OOPDemo
```

## Project Structure

- `main.cpp`: Contains the `main` function to start the program.
- `menu.h/cpp`: Implements a dynamic menu system allowing the user to interact with the program and choose different actions.
- `Head.h/cpp`, `Body.h/cpp`, `Footer.h/cpp`: Define specific `PersonComponent` derived classes representing different parts of a person.
- `PersonComponent.h`: Declares an abstract base class that defines a common interface for person components.

## Menu System

The menu system in `menu.cpp` dynamically displays options and responds to user input. It allows the demonstration of direct instance actions versus polymorphic actions using a vector of base class pointers.

- **Direct Actions**: Instantiates `Head`, `Body`, and `Footer` directly and calls their `performFunction`.
- **Polymorphic Actions**: Stores instances of `Head`, `Body`, and `Footer` in a `std::vector` of `std::unique_ptr` to `PersonComponent` and demonstrates polymorphism by calling `performFunction` through base class pointers.

## Extending the Project

To add new functionalities or components:

1. Create new `.h` and `.cpp` files for your classes, following the existing structure.
2. Update `menu.cpp` to include additional menu options if necessary.
3. Implement any new behaviors and ensure they are integrated with the menu system for demonstration.
