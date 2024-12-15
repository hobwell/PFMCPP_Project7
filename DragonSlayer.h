#pragma once

#include <string>
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string name, int hp, int armor, int attackDamage = 4);

    void attack (Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
