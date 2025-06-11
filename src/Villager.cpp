#include "../include/Villager.hpp"

 
Villager::Villager(const std::string& name, Location* startLocation, Location* safeLocation) : 
name(name) , currentLocation(startLocation) , safeLocation(safeLocation), alive(true){}

const std::string& Villager::getName() const{
    return name;
}
Location* Villager::getCurrentLocation() const{
    return currentLocation;
}
Location* Villager::getSafeLocation() const{
    return safeLocation;
}
bool Villager::isAlive() const{
    return alive;
}
void Villager::moveTo(Location* newLocation){
    currentLocation = newLocation ;
}
void Villager::kill(){
    alive = false;
    currentLocation = nullptr ;
}
void Villager::rescue(){
    alive = false;
    currentLocation = nullptr ;

}