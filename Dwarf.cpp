#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf (std::string name_, int hp, int armor_, int attackDamage_ ) :
    Character (hp, armor_, attackDamage_ ),
    name{name_}
{}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
