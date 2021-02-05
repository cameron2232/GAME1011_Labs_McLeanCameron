#include "engine.h"

Jedi::Jedi(string name, int health, CharacterType alliance, Weapon* weapon)
{
	SetName(name);
	SetHealth(health);
	SetAlliance(alliance);
	SetWeapon(weapon);
}

