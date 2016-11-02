#include "header_105.h"

bool customers::Stack::isempty()
{
	m_top == 0;
}

bool customers::Stack::isfull()
{
	m_top == MAX;
}
bool customers::Stack::push(const Item & item)
{
	if (m_top < MAX)
	{
		m_Items[m_top++] = item;
		return true;
	}
	else
		return false;
}
		

bool customers::Stack::pop(Item & item)
{
	if (m_top > 0)
	{
		item = m_Items[--m_top];
	    return true;
    }
	else
		return false;
}

void customers::Stack::watcher()
{
	static double money = 0;
	if (customers::Stack::pop)
	{
		money += m_Items[m_top].payment;
	}
}