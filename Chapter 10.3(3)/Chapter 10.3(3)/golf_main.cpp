#include "golf.h"
#include <iostream>
const int  size = 5;

int main()
{
	golf players[size];

	for (int i = 0; i < size; ++i)
	{
		players[i].setgolf();
	}
	for (int i = 0; i < size; ++i)
	{
		players[i].showgolf();
	}
	for (int i = 0; i < size; ++i)
	{
		players[i].recap(10);
	}
	for (int i = 0; i < size; ++i)
	{
		players[i].showgolf();
	}

	dont_close();
}

