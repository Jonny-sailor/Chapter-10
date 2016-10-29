#ifndef _PERSON
#define _PERSON

#include <string> 
#include <cctype>
#include <iostream>

class Person {
private:
	static const int LIMIT = 25;
	std::string lname; // ������� 
	char fname[LIMIT]; // ��� 
public:
	
	Person() { lname = ""; fname[0] = '\0'; }; // #1 
	Person(const std::string &Ln, const char * fn = "Heyyou"); // #2 
															// ��������� ������ ���������� lname � fname 
	void Show() const; // ������: ��� ������� 
	void FormalShow() const; // ������: �������, ��� 

};

void notclose();

#endif //_PERSON