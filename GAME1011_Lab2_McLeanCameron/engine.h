#pragma once
#ifndef _ENGINE_H_
#define _ENGINE_H_
#include <iostream>
#include <string>
using namespace std;

enum CharacterType {JEDI, SITH, MANDALORIAN};

class Character
{
private:
	string m_name;
	int m_health;
public:
	Character() {}
	Character(string name, int health)
	{
		SetHealth(health);
		SetName(name);
	}

	void SetName(string name)
	{
		m_name = name;
	}

	void SetHealth(int health)
	{
		m_health = health;
	}

	string GetName() const
	{
		return m_name;
	}
	
	int GetHealth() const
	{
		return m_health;
	}
	
	virtual void DisplayInfo()
	{
		cout << "Name: " << GetName() << endl << "Health: " << GetHealth();
	}
};

class Weapon
{
private:
	string m_weaponName;
	string m_description;
	int m_damage;
	string m_abilities[3];
	
public:
	Character* character;
	Weapon() {}
	
	Weapon(string weapon, string description, int damage)
	{
		SetWeaponName(weapon);
		SetDesc(description);
		SetDamage(damage);
	}

	void SetWeaponName(string weapon)
	{
		m_weaponName = weapon;
	}

	void SetDesc(string description)
	{
		m_description = description;
	}

	void SetDamage(int damage)
	{
		m_damage = damage;
	}
	
	string GetWeaponName()
	{
		return m_weaponName;
	}

	string GetDesc()
	{
		return m_description;
	}

	int GetDamage() const
	{
		return m_damage;
	}

};


class Jedi : public Character
{
private:
	CharacterType m_alliance;
	Weapon* m_weapon;
public:
	Jedi(string name, int health, CharacterType alliance, Weapon* weapon);

	void SetAlliance (CharacterType alliance)
	{
		m_alliance = alliance;
	}

	void SetWeapon(Weapon* weapon)
	{
		//m_weapon = weapon;
		m_weapon = new Weapon;
		m_weapon->SetWeaponName("Blue " + weapon->GetWeaponName());
		m_weapon->SetDesc(weapon->GetDesc() + " Jedi's utilize this tool to learn focus and discipline,\nas well as defending the balance of the Universe.");
		m_weapon->SetDamage(weapon->GetDamage()+75);
	}

	CharacterType GetAlliance() const
	{
		return m_alliance;
	}

	Weapon* GetWeapon() const
	{
		return m_weapon;
	}

	void DisplayInfo() override
	{
		cout << m_weapon->GetWeaponName() << endl << m_weapon->GetDesc() << endl << m_weapon->GetDamage();
	}

};


class Sith : public Character
{
private:
	
public:
	
};

class Mandalorian : public Character
{
private:
	
public:
	
};

#endif