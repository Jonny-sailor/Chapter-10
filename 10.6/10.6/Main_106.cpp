#include "Header_106.h"



int main()

{
	moves::Move ilych{ 19, 25 };
	moves::Move fenya{ 17, 21 };
	enum {add = 'a', show = 's', reset = 'r', quit = 'q'};
	char input;
	std::cout << "Please enter what you want: " << "a = if you want add" << std::endl << "s = if you want show" << std::endl << "r = if you want reset" << std::endl;
	


	while (std::cin >> input)
	{
		if (!std::cin)
		{
			std::cin.clear();
			std::cout << "WTF?! Enter a symbol, not a number ! \n";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		};
		if (isupper(input))
		{
			tolower(input);
		};
		switch (input)
		{
		case add:
		ilych =	ilych.add(fenya);
			break;
		case show:
			ilych.showmove();
			break;
		case reset:
			ilych.reset();
		case quit:
			continue;
		}
		
	}

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}