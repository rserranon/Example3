#pragma once

#include <vector>
#include <string>
#include "Weapon.h"
#include "log.h"

class Avatar
{
public:
    Avatar ( std::string name ) : m_AvatarName (name) {}
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
    std::string m_AvatarName;
    std::vector <Weapon*> m_Weapons;
};
