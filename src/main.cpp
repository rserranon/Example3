/* our application's code */

#include <sstream>
#include <vector>
#include <iostream>

#include "log.h"
#include "Avatar.h"
#include "AssaultRifle.h"
#include "HandGun.h"

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

   Avatar a("Hero");
    AssaultRifle* Rifle = new AssaultRifle(3,300);
    a.AddWeapon(Rifle);
    a.AddWeapon(new HandGun(2,14));
    a.AddWeapon( new AssaultRifle(2,500) );
    a.Weapons();
}
