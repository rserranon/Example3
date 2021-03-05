#pragma once

#include <iostream>
#include <sstream>
#include "Weapon.h"

class AssaultRifle : public Weapon
{
public:
    AssaultRifle(unsigned int magazines, unsigned int bullets)
        : m_Magazines(magazines), m_BulletsPerMagazine(bullets) {}

    unsigned int GetMagazines() const { return m_Magazines; }
    unsigned int GetBulletsXMagazine() const { return m_BulletsPerMagazine; }


    std::string ToString() const override
    {
        std::stringstream ss;
        ss << "AssaultRifle: " << m_Magazines << " Mag, " << m_BulletsPerMagazine << " bullets" << std::endl;;
        return ss.str();
    }

    EVENT_CLASS_TYPE(AssaultRifle)
private:
    unsigned int m_Magazines, m_BulletsPerMagazine;
};
