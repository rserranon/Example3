#pragma once

#include <iostream>
#include <sstream>
#include "Weapon.h"

class HandGun : public Weapon
{
public:
    HandGun(unsigned int magazines, unsigned int bullets)
        : m_Magazines(magazines), m_BulletsPerMagazine(bullets) {}

    unsigned int GetMagazines() const { return m_Magazines; }
    unsigned int GetBulletsXMagazine() const { return m_BulletsPerMagazine; }


    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "HandGun: " << m_Magazines << " Mag, " << m_BulletsPerMagazine << " bullets" << std::endl;;
        return ss.str();
    }

    EVENT_CLASS_TYPE(HandGun)
private:
    unsigned int m_Magazines, m_BulletsPerMagazine;
};
