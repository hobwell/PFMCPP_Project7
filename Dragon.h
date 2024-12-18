#pragma once

#include <string>
#include "Character.h"

struct Dragon : Character
{
    Dragon (std::string name, int hp, int armor, int attackDamage = 80);

    void attack (Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
