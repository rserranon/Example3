#pragma once

#include <iostream>
#include <sstream>
#include "Weapon.h"

class Sword : public Weapon
{
public:
    Sword() {}


    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "Sword: " << " Blade <>  " << std::endl;
        return ss.str();
    }

    EVENT_CLASS_TYPE(HandGun)
};
