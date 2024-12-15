#include "AttackItem.h"
#include "Utility.h"

struct Character;

void AttackItem::use(Character* character)
{
    //make your defensive item use the appropriate Utility helper functions
    useAttackItem(character, this);
}
