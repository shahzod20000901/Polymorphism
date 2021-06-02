#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void sound() = 0;
};

class Dog :public Animal
{
public:
	void sound()
	{
		cout << "Gaf" << endl;
	}
};

class Cat :public Animal
{
public:
	void sound()
	{
		cout << "Myau" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "russian");
	
	Animal* zoo[] =
	{
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
		new Cat()
	};

	for (int i = 0; i < sizeof(zoo) / sizeof(Animal*); i++)
	{
		zoo[i]->sound();
	}
}