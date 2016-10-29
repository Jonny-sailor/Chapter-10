#include "golf.h"
#include <iostream>

golf::golf(const char *name , int he )
{
	strncpy_s(m_firstname, name, sizeof(m_firstname) - 1);
	m_handicap = he;
}
golf::~golf()
{
}
;
int golf::setgolf()
{
	int enteredName = 0;
	std::cout << "Please enter name: ";
	char *_name = new char [LEN];
	std::cin.getline(_name,LEN);
	if (strlen(_name) > LEN)
	{
		std::cout << "Entered string is too long" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		delete[] _name;
		char *_name = new char[LEN];
		std::cin.getline(_name, std::streamsize());

	}

	if (std::cin.fail())
	{
		std::cout << "Bad,bad!!! =(" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.getline(_name, strlen(_name));
	};
	
	if (strlen(_name) > 0)
	{
		enteredName = 1;
		int hc = 0;
		std::cout << "Please enter handycap: ";
		std::cin >> hc;
		if (std::cin.fail())
		{
			std::cout << "Bad,bad!!! =(" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> hc;
		}
		golf temp(_name, hc);
		*this = temp;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return enteredName;

}

// Функция устанавливает новое значение гандикапа 
void golf::recap(int he)
{
	m_handicap = he;
}
// Функция отображает содержимое структуры типа golf 
void golf::showgolf()const
{
	std::cout << "Name: " << m_firstname << std::endl << "Handicap: " << m_handicap << std::endl;
}




void dont_close(void)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
};