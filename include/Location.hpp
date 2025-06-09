#ifndef LOCATION_HPP
#define LOCATION_HPP

#include "../include/Monster.hpp"
#include "../include/Item.hpp"
#include "../include/Hero.hpp"

#include <string>
#include <vector>
#include <string>
#include <vector>

class Location
{
private:
    int x, y;
    std ::string Name;
    std ::vector<Location *> neighbors;
    std :: vector <Item*> items;
    std :: vector <Hero*> heroes;
    // std :: vector <villager>
    std ::vector<Monster *> Monsters;

public:
    Location(const std ::string &name);
    Location(const std ::string &name, int x, int y);

    void AddNeighbor(Location *neighbor);
    std::vector<Location *> GetNeighbors() const;

    // void AddMonster(Monster* monsterName);
    // void RemoveMonster(Monster *monsterName);
    // void AddVillager(Villager* VillagerName);
    // void RemoveVillager(Villager *VillagerName);
    void AddItem(Item* ItemName);
    void RemoveItem(Item *ItemName); 
    std :: vector<Item*>& GetItems();

    void AddHero(Hero* HeroName);
    void RemoveHero(Hero *HeroName);
    std :: vector<Hero*> GetHeroes() const;
    std ::string GetName();
    // std :: vector<Monster*> GetMonsters();
    // std :: vector GetItem();
    // std :: vector GetVillagers();
    std::string GetName() const;
    int GetX() const;
    int GetY() const;
    ~Location() = default ;
};
#endif