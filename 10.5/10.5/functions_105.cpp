#include "header_105.h"

//индикатор пустоты
bool customers::Stack::isempty()
{
	return m_top == 0;
}
//индикатор заполнени€
bool customers::Stack::isfull()
{
	return m_top == MAX;
}

//добавление в конец стека
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
		
//удаление из головы стека
bool customers::Stack::pop(Item & item)
{
	if (m_top > 0)
	{
		item = m_Items[--m_top];
		watcher();
	    return true;
    }
	else
		return false;
}
// функци€ подсчета суммы удаленных из стека
void customers::Stack::watcher()
{
	static double money = 0;
	{
		money += m_Items[m_top].payment;
		std::cout << std::endl << money << std::endl;
	}
}

//  онструкторы

customers::Stack::Stack()
{
	m_top = 0;
}

