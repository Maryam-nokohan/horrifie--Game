#include "../include/Archaeologist.hpp"

Archaeologist::Archaeologist(Location* startLocation)
    : Hero("Archaeologist", 4, startLocation) {}

void Archaeologist::specialAction() {
    if(remainingActions <= 0) return;

    std::vector<Location*> neighbors = currentLocation->GetNeighbors();
    for(Location* neighbor : neighbors){
        std::vector<Item>& itemsThere = neighbor->GetItems();
        for(Item item : itemsThere){
            inventory.push_back(item);
        }
        itemsThere.clear();
    }
    remainingActions--;
}
