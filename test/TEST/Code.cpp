#include "Classes.h"

int main()
{
	Bank_dep uno;
		uno.view();

		Bank_dep des("Jonny");
		des.view();

		Bank_dep tres("Jonny", "USA1789038777", 7000.00);
			tres.view();

			tres.init("Jonny Blake");

			tres.with(5700.00);
			tres.view();

			tres.Bank_dep::refill(777000.00);
			tres.Bank_dep::view();


				notclose();
}