#ifndef HERO_HPP
#define HERO_HPP
#include <string>
#include <vector>
#include "Item.hpp"
#include "Location.hpp"

enum class ActionType {
    Move, Guide, PickUp, Advance, Defeat, Special
};

class Hero {
protected:
    std::string name;
    int maxActions;
    int remainingActions;
    std::vector<Item> inventory;
    Location* currentLocation;

public:
    Hero(const std::string&, int , Location*);
    virtual ~Hero() = default;

    void resetActions();
    void moveTo(Location*);
    void pickUpItems();
    virtual void specialAction() = 0;

    const std::string& getName() const;
    int getRemainingActions() const;
    Location* getLocation() const;
    const std::vector<Item>& getInventory() const;
};

class Archaeologist : public Hero {
public:
    Archaeologist(Location*);
    void specialAction() override;
};

class Mayor : public Hero {
public:
    Mayor(Location*);
    void specialAction() override;
};

#endif