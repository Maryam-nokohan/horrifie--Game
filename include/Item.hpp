#ifndef ITEM_HPP
#define ITEM_HPP
#include <memory>
#include <string>
#include <stdexcept>
class Location;
enum class ItemColor { Red , Blue , Yellow};
class Item :public std :: enable_shared_from_this<Item>
{
 private:
    std::string name;
    ItemColor color;
    int power;
    std :: shared_ptr<Location> ItemLocation;
    std :: shared_ptr<Location> CurrentLocation;

 public:
    Item(ItemColor , int , std :: shared_ptr<Location>, const std::string& name);
    ItemColor getColor() const;
    int getPower() const;
    const std::shared_ptr<Location> getLocation() const;
    const std::shared_ptr<Location>& GetItemLocationName()const;

    const std::string& getName() const;
    void setLocation(const std :: shared_ptr<Location>&) ;
    bool operator==(Item item);

};
#endif