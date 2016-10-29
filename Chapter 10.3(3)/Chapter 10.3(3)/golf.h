#ifndef GOLF_H_
#define GOLF_H_

#include <string>
#include <cctype>



class golf
{

private:
	enum { LEN = 10 };
	char m_firstname[LEN];
	int m_handicap;

public:
	golf(const char *name = "Golfer", int he = 0);
	~golf();
	int setgolf();
	// Функция устанавливает новое значение гандикапа 
	void recap(int he);
	// Функция отображает содержимое структуры типа golf 
	void showgolf()const;


};


void dont_close(void);

#endif // !GOLF_H_

