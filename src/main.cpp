/* our application's code */

#include <sstream>
#include <vector>
#include <iostream>

#include "log.h"
#include "Avatar.h"
#include "AssaultRifle.h"

int main() {
   Global::Log::Init();

   CORE_TRACE("Trace!");
   CORE_INFO("Info!");
   CORE_WARN("Warn!");
   CORE_DEBUG("Debug!");
   CORE_ERROR("Error!");
   CORE_CRITICAL("Critical!");

   TRACE("Trace!");
   INFO("Info!");
   WARN("Warn!");
   DEBUG("Debug!");
   ERROR("Error!");
   CRITICAL("Critical!");

   Avatar a;
    AssaultRifle* Rifle = new AssaultRifle(1,300);
    a.m_Weapons.push_back(Rifle);
    a.m_Weapons.push_back(new AssaultRifle(2,300));

    for (std::vector<Weapon*>::iterator it = a.m_Weapons.begin(); it != a.m_Weapons.end(); it++) {
        // std::cout << (*it) << std::endl;
        DEBUG((*it));
    }

}
