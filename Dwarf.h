#pragma once

#include <string>
#include "Character.h"

struct Dwarf : Character
{
    Dwarf (std::string name, int hp, int armor, int attackDamage = 4);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;

};
