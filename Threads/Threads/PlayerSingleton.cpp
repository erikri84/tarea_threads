#include "PlayerSingleton.h"

int playerSingleton::addLife()
{
	//lifes = checkCurrentLifes();
	if (lifes > 0)
		lifes += 1;
	return lifes;
}

int playerSingleton::decreaseLife()
{
	//lifes = checkCurrentLifes();
	if (lifes >= 1)
		lifes -= 1;
	return lifes;
}

int playerSingleton::checkCurrentLifes()
{
	return lifes;
}

playerSingleton * playerSingleton::instance()//ACCESADOR PUBLICO
{
	if (!myInstance)
		myInstance = new playerSingleton;
	return myInstance;
}

