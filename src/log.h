#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Global {

// Core Log macros
#define CORE_TRACE(...)    ::Global::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...)     ::Global::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)     ::Global::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_DEBUG(...)    ::Global::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define CORE_ERROR(...)    ::Global::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_CRITICAL(...) ::Global::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client Log macros
#define TRACE(...)    ::Global::Log::GetClientLogger()->trace(__VA_ARGS__)
#define INFO(...)     ::Global::Log::GetClientLogger()->info(__VA_ARGS__)
#define WARN(...)     ::Global::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DEBUG(...)    ::Global::Log::GetClientLogger()->debug(__VA_ARGS__)
#define ERROR(...)    ::Global::Log::GetClientLogger()->error(__VA_ARGS__)
#define CRITICAL(...) ::Global::Log::GetClientLogger()->critical(__VA_ARGS__)


  class Log
  {
    public:
      static void Init();

      inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
      inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
      static std::shared_ptr<spdlog::logger> s_CoreLogger;
      static std::shared_ptr<spdlog::logger> s_ClientLogger;

  };
}


