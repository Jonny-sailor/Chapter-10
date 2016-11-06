#include "header_105.h"


int main()
{
	customers::Stack stack;

	customers::customer Jonny{ "Jonny", 7000.00 };
	customers::customer Jimmy{ "Jimmy", 700.00 };
	customers::customer Syntia{ "Syntia", 370.00 };
	customers::customer Sonya{ "Sonya", 530.00 };

	stack.push(Jonny);
	stack.push(Jimmy);
	stack.push(Syntia);
	stack.push(Sonya);


	stack.pop(Sonya);
	stack.pop(Syntia);

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();


}