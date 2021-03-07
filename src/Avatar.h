#pragma once

#include <vector>
#include "Weapon.h"
#include "log.h"

class Avatar
{
public:
    inline void AddWeapon (Weapon* weaponPtr) { m_Weapons.push_back(weaponPtr); };

    void Weapons() {
        for (std::vector<Weapon*>::iterator it = m_Weapons.begin(); it != m_Weapons.end(); it++) {
            DEBUG((*it));
      }
    };

    ~Avatar() {
      for (auto p : m_Weapons )
          {
             delete p;
          }
          m_Weapons.clear();
    }

private:
    std::vector <Weapon*> m_Weapons;
};
