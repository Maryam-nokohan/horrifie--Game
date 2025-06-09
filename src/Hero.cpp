#include "../include/Hero.hpp"
#include <iostream>

Hero::Hero(const std::string& name, int maxActions, Location* startLocation)
    : name(name), maxActions(maxActions), remainingActions(maxActions), currentLocation(startLocation) {}

void Hero::resetActions() {
    remainingActions = maxActions;
}

void Hero::moveTo(Location* newLocation) {
    if (remainingActions > 0) {
        currentLocation = newLocation;
        remainingActions--;
    }
}

void Hero::pickUpItems() {
    if(remainingActions <= 0) return;

    std::vector<Item*>& itemsHere = currentLocation->GetItems();
    for(Item* item : itemsHere){
        inventory.push_back(*item);
    }
    itemsHere.clear();
    remainingActions--;
}

const std::string& Hero::getName() const {
    return name;
}

int Hero::getRemainingActions() const {
    return remainingActions;
}

Location* Hero::getLocation() const {
    return currentLocation;
}

const std::vector<Item>& Hero::getInventory() const {
    return inventory;
}

Archaeologist::Archaeologist(Location* startLocation)
    : Hero("Archaeologist", 4, startLocation) {}

void Archaeologist::specialAction() {
    if(remainingActions <= 0) return;

    std::vector<Location*> neighbors = currentLocation->GetNeighbors();
    for(Location* neighbor : neighbors){
        std::vector<Item*>& itemsThere = neighbor->GetItems();
        for(Item* item : itemsThere){
            inventory.push_back(*item);
        }
        itemsThere.clear();
    }
    remainingActions--;
}

Mayor::Mayor(Location* startLocation)
    : Hero("Mayor", 5, startLocation) {}

void Mayor::specialAction() {
    std::cout << "Mayor has no special ability.\n";
}
