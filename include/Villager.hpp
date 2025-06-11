#ifndef VILLAGER_HPP
#define VILLAGER_HPP
#include <string>
#include "Location.hpp"

class Villager{

    private:
      std::string name;
      Location* currentLocation;
      Location* safeLocation;
      bool alive;

    public:
      Villager(const std::string& , Location* , Location*);

      const std::string& getName() const;
      Location* getCurrentLocation() const;
      Location* getSafeLocation() const;
      bool isAlive() const;

      void moveTo(Location*);
      void kill();
      void rescue();


};
#endif