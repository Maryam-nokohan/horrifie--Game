#ifndef ARCHAEOLOGIST_HPP
#define ARCHAEOLOGIST_HPP
#include "Hero.hpp"

class Archaeologist : public Hero {
public:
    Archaeologist(Location*);
    void specialAction() override;
};

#endif