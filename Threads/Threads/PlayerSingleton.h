#pragma once
class playerSingleton
{
	int lifes;
	static playerSingleton *myInstance;//APUNTADOR GLOBAL PRIVADO
	playerSingleton(int v = 0)
	{
		lifes = v;
	}
public:
	int addLife();
	int decreaseLife();
	int checkCurrentLifes();
	static playerSingleton *instance();//ACCESADOR PUBLICO 
private:

};

