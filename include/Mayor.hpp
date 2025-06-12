#ifndef MAYOR_HPP
#define MAYOR_HPP
#include "Hero.hpp"

class Mayor : public Hero {
public:
    Mayor(Location*);
    void specialAction() override;
};

#endif