#ifndef HEADER_105
#define HEADER_105
#include <iostream>
#include <cctype>

namespace customers {
	struct customer {
		char fullname[35];
		double payment;
	};

	class Stack {
		typedef customer Item;
	private:
		enum { MAX = 7 };
		Item m_Items[MAX];
		int m_top;
		void watcher();

	public:
		bool isempty();
		bool isfull();
		bool push(const Item & item);
		bool pop(Item & item);
		Stack();
	};
}

#endif // !HEADER_105