#include "engine.h"
#include <iostream>
using namespace std;
/*Jedi Luke("Luke Skywalker", 100, JEDI, &Lightsaber);
	Sith Ben("Kylo Ren", 85, SITH, &Lightsaber);*/
	/*Characters[0] = new Jedi("Luke Skywalker", 100, JEDI, &Lightsaber);
	Characters[1] = new Sith ("Kylo Ren", 85, SITH, &Lightsaber);*/ //TODO: test code, delete before submission


	/*BobaFet.DisplayInfo();
	cout << endl << endl;
	Ben.DisplayInfo();
	cout << endl << endl;
	Luke.DisplayInfo();*/


int main()
{
	Weapon Lightsaber("Lightsaber", "A blade of plasma powered by Kyber Crystals.", 10);
	Character* Characters[10] = { nullptr };
	
	Characters[0] = new Jedi("Luke Skywalker", 100, JEDI, &Lightsaber);
	
	for (int i = 0; i < 10; i++)
	{
		Character* pCharacter = Characters[i];
		if (pCharacter == nullptr)
		{
			continue;
		}
		cout << "Deleting character...";
		delete pCharacter;
	}
	for (int i = 0; i < 10; i++)
	{
		Character* pCharacter = Characters[i];
		if (pCharacter == nullptr)
		{
			continue;
		}
		pCharacter->DisplayInfo();
	}



}