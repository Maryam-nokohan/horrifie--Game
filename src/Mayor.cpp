#include "../include/Mayor.hpp"
#include <iostream>

Mayor::Mayor(Location* startLocation)
    : Hero("Mayor", 5, startLocation) {}

void Mayor::specialAction() {
    std::cout << "Mayor has no special ability.\n";
}