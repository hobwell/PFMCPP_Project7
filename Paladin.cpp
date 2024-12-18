#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin (std::string name_, int hp, int armor_, int attackDamage_ ) :
    Character (hp, armor_, attackDamage_ ),
    name{name_}
{
    defensiveItems = makeDefensiveItems (4);
    helpfulItems = makeHelpfulItems (6);
}

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats (this);
}
