#include "Person.h"




Person::Person(const std::string & Ln, const char * fn)
{
	lname = Ln;
	strcpy_s(fname, sizeof(fname) - 1, fn);
};
														// ��������� ������ ���������� lname � fname 
void Person::Show() const // ������: ��� ������� 
{
	std::cout << "Name: " << fname << std::endl << "Lastname: " << lname << std::endl;
	std::cout << "....................................." << std::endl;
};
void Person::FormalShow()const // ������: �������, ��� 
{
	std::cout << "Lastname: " << lname << std::endl << "Name: " << fname << std::endl;
	std::cout << "....................................." << std::endl;
};

void notclose()
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}