#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
#include <cctype>

class Bank_dep 
{
private:
	enum {SIZE = 20};
	std::string name;
	char dep_num[SIZE];
	double balance;

public:
	//конструктор
	Bank_dep(std::string _name = "null", char _dep_num[] = "null" , double _balance = 0);

	//инициализация объекта
	void init(std::string _name, char _dep_num[], double _balance);
	void init(std::string _name);

	//отображение данных объекта
	void view(void) const;

	//пополнение счета
	void refill(double _ref);

    //снятие денег со счета
	void with(double _with);

};

void notclose();


#endif // !CLASS_H
