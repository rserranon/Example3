/* our application's code */

#include "log.h"

int main() {
   Hazel::Log::Init();

   HZ_TRACE("Trace!");
   HZ_INFO("Info!");
   HZ_WARN("Warn!");
   HZ_DEBUG("Debug!");
   HZ_ERROR("Error!");
   HZ_CRITICAL("Critical!");
   
  class Entity {

    public:
      float X, Y;
  };

  Entity e;
  
  e.X=1;
}
