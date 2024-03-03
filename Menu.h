#pragma once

#ifndef MENU_H
#define MENU_H

#include "Body.h"
#include "Footer.h"
#include "Head.h"
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace Menu {
// MenuOption structure to associate a menu text with an action
struct MenuOption {
  std::string text;
  std::function<void()> action;
};
void showMenu();
void clearInput();
std::vector<MenuOption> getMenuOptions();
// void displayOptions();
void displayOptions(const std::vector<MenuOption> &options);
// void handleChoice(int choice);
void handleChoice(const std::vector<MenuOption> &options, int choice);
void exitProgram();
void performActionsDirectly();
void performActionsPolymorphically();
} // namespace Menu

#endif