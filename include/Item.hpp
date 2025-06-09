#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <stdexcept>
#include "Location.hpp"
enum class ItemColor { Red , Blue , Yellow};
class Item{
 private:
    ItemColor color;
    int power;
    Location* location;

 public:
    Item(ItemColor , int , Location*);
    ItemColor getColor() const;
    int getPower() const;
    Location* getLocation() const;
    void setLocation(Location*) ;


};
#endif