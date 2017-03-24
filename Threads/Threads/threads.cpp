#include <thread>
#include <iostream>
#include "PlayerSingleton.h"
void func1()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Corriendo func1\n";
	}
}

void func2()
{
	std::cout << "Corriendo func2\n";
}

void foo()
{
	playerSingleton::instance()->addLife();
	std::cout << "Life Added " << playerSingleton::instance()->addLife() << '\n';
}

void bar()
{
	playerSingleton::instance()->decreaseLife();
	std::cout << "Life Decreased " << playerSingleton::instance()->decreaseLife() << '\n';
}

void fooTwo()
{
	playerSingleton::instance()->checkCurrentLifes();
	std::cout << "Life Decreased " << playerSingleton::instance()->decreaseLife() << '\n';
}

playerSingleton *playerSingleton::myInstance = 0;
void main(void)
{
	std::cout << "Iniciando threads desde main thread\n";
	//std::thread thread1 = std::thread(func1);
	std::thread addLifeThread = std::thread(foo);
	std::thread decreaseLifeThread = std::thread(bar);
	//addLifeThread.join();
	//decreaseLifeThread.join();
	std::cout << "Terminando main thread\n";
	getchar();
}