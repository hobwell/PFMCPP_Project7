#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin (std::string name_, int hp, int armor_, int attackDamage_ ) :
    Character (hp, armor_, attackDamage_ ),
    name{name_}
{}

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
