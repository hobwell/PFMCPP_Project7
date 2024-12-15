#pragma once

#include <string>
#include "Character.h"

struct Paladin : Character
{
    Paladin (std::string name, int hp, int armor, int attackDamage = 10);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
