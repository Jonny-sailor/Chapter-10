#ifndef HEADER_107
#define HEADER_107

#include <iostream>
#include<cctype>

namespace betelgaize
{
	class Plorg
	{
	private:
		enum { MAX = 19 };
		char m_name[MAX];
		int m_CI;
	public:
		Plorg(char name[MAX] = "Plorga", int CI = 50);
		void switchCI(const int &val);
		void show()const;

	};

}

#endif //!HEADER_107