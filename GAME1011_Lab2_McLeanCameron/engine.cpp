#include "engine.h"

Jedi::Jedi(string name, int health, Weapon* weapon)
{
	SetName(name);
	SetHealth(health);
	SetWeapon(weapon);
}

Sith::Sith(string name, int health, Weapon* weapon)
{
	SetName(name);
	SetHealth(health);
	SetWeapon(weapon);
}

Mandalorian::Mandalorian(string name, int health, Weapon* weapon)
{
	SetName(name);
	SetHealth(health);
	SetWeapon(weapon);
}

ostream& operator<<(ostream& out, Weapon* weapon)
{
	out << "Weapon: " << weapon->GetWeaponName() << " | " << weapon->GetDesc() << "\nBase Weapon Damage: " << weapon->GetDamage() << "\nAbility 1: " << weapon->GetAbilities(0) << " | Ability 2: " << weapon->GetAbilities(1)
	<< " | Ability 3: " << weapon->GetAbilities(2);
	return out;
}