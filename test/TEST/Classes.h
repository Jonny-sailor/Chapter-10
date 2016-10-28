#ifndef CLASS_H
#define CLASS_H

#include <string>

class Bank_dep 
{
private:
	enum {SIZE = 10};
	std::string name;
	char dep_num[10];
	double balance;

public:
	Bank_dep(std::string _name = "null", char _dep_num[] = "null" , double _balance = 0);

	//������������� �������
	void init(std::string _name, char _dep_num[], double _balance);
	void init(std::string _name);

	//����������� ������ �������
	void view(void);

	//���������� �����
	void refill(double _ref);

    //������ ����� �� �����
	void with(double _with);

};



#endif // !CLASS_H
