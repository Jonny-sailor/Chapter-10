#include "104_header.h"
const int SIZE = 10;
int main()
{
	const double values_const[SIZE]{ 177.0, 156.0, 12.0, 777.0 };

	SALES::Sales arr[2];


	arr[1].set();
	arr[0].show();
	
	arr[1].show();

	

	SALES::dontclose();

}