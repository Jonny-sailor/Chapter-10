#include "Classes.h"



//конструктор
Bank_dep::Bank_dep(std::string _name, char _dep_num[], double _balance)
{
		name = _name;
		strncpy_s (dep_num, _dep_num, sizeof(dep_num) - 1);
		balance = _balance;
		
};

//инициализация объекта
void Bank_dep::init(std::string _name, char _dep_num[], double _balance)
{
	name = _name;
	strncpy_s(dep_num, _dep_num, sizeof(dep_num) - 1);
	balance = _balance;

}
void Bank_dep::init(std::string _name)
{
	name = _name;
};

//отображение данных объекта
void Bank_dep::view(void)const
{
	std::cout << "Name: " << name << std::endl <<"Number of deposite: " << dep_num << std::endl <<"Balance: " << balance << std::endl;
	std::cout << "..........................................." << std::endl;
}

//пополнение счета
void Bank_dep::refill(double _ref)
{

	balance += _ref;
}

//снятие денег со счета
void Bank_dep::with(double _with)
{
	
	balance -= _with;
}


void notclose()
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}