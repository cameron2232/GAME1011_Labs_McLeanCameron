#include "engine.h"
#include <iostream>
using namespace std;

int main()
{
	Character* Characters[15] = { nullptr };


	Character tempCharacter("Cameron", 100);
	Characters[1] = new Jedi("Cameron", 100);
	Characters[2] = new Sith(tempCharacter.GetName(), tempCharacter.GetHealth());
	Characters[3] = new Mandalorian(tempCharacter.GetName(), tempCharacter.GetHealth());






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