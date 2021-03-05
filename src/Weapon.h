#pragma once

#include <iostream>
#include <sstream>
#include <vector>

enum class WeaponType
    {
        None = 0, AssaultRifle, HandGun, Sword, SlingShot
    };

#define EVENT_CLASS_TYPE(type) static WeaponType GetStaticType() { return WeaponType::type; }\
                              virtual WeaponType GetWeaponType() const override { return GetStaticType(); }\
                              virtual const char* GetName() const override { return #type; }


    class Weapon
    {
    public:
        virtual ~Weapon() = default;

        virtual WeaponType GetWeaponType() const = 0;
        virtual const char* GetName() const = 0;
        virtual std::string ToString() const { return GetName(); }


    };

// Overloaded operator for a Weapon* pointer
inline std::ostream& operator<<(std::ostream& os, const Weapon* w)
{
    return os << w->ToString();
}

// Overloaded operator for a Weapon& reference
inline std::ostream& operator<<(std::ostream& os, const Weapon& w)
{
    return os << w.ToString();
}

