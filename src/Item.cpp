#include "../include/Item.hpp"

 Item::Item(ItemColor color, int power, Location* location) : 
 color(color) {
    if(power<=0 || power>10){
        throw std::invalid_argument("Power must be between 1 and 10");
    }
    if(!location){
        throw std::invalid_argument("Location can't be null");
    }
    this->power = power;
    this->location = location ;
 }

ItemColor Item::getColor() const{
    return color;

}
int Item::getPower() const{
    return power;
}
Location* Item::getLocation() const{
    return location;

    }
void Item::setLocation(Location* newLocation){
    if(!newLocation){
        throw std::invalid_argument("New location can't be null");
    }
    location = newLocation ;

}