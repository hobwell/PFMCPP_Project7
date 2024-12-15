#pragma once

#include <string>
#include "AttackItem.h"
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string name, int hp, int armor, int attackDamage = 4);

    void attack (Character& other) override;
    std::unique_ptr<AttackItem> attackItem;
    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
