/* our application's code */

#include "spdlog/spdlog.h"

int main() {
  spdlog::info("Hello World!");
  spdlog::warn("Warnining");
  spdlog::debug("Debug");
  spdlog::error("Error");
  spdlog::critical("Critical");
   
  class Entity {

    public:
      float X, Y;
  };

  Entity e;
  
  e.X=1;
}
