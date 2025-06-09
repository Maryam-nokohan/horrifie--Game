#include "../include/Location.hpp"  
#include <string>
#include <algorithm>

Location :: Location(const std::string& name, int x, int y) : Name(name), x(x), y(y) {}
Location ::Location(const std ::string& name)
{
    this->Name = name;
}
void Location :: AddNeighbor(Location *neighbor){
    neighbors.push_back(neighbor);
    
}
std::vector<Location*> Location :: GetNeighbors() const{
    return neighbors;
}


void AddMonster(Monster *monsterName) {}
// void RemoveMonster(Monster *monsterName);
// void AddVillager(Villager* VillagerName);
// void RemoveVillager(Villager *VillagerName);
void Location::AddItem(Item* ItemName){
    items.push_back(ItemName);
}
void Location::RemoveItem(Item *ItemName){
    items.erase(std::remove(items.begin(), items.end(), ItemName), items.end());
}
std::vector<Item*>& Location::GetItems(){
    return items;
}

void Location::AddHero(Hero* HeroName){
    heroes.push_back(HeroName);
}
void Location::RemoveHero(Hero *HeroName){
    heroes.erase(std::remove(heroes.begin(), heroes.end(), HeroName), heroes.end());
}
std::vector<Hero*> Location::GetHeroes() const{
    return heroes;
}
std ::string Location :: GetName() const{
    return Name;
}
int Location::GetX() const{
    return x;
}
int Location::GetY() const{
    return y;
}
// std ::vector<Monster *> GetMonsters();
// std :: vector GetItem();
// std :: vector GetVillagers();