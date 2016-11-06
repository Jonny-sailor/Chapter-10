#include "header_105.h"

//��������� �������
bool customers::Stack::isempty()
{
	return m_top == 0;
}
//��������� ����������
bool customers::Stack::isfull()
{
	return m_top == MAX;
}

//���������� � ����� �����
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
		
//�������� �� ������ �����
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
// ������� �������� ����� ��������� �� �����
void customers::Stack::watcher()
{
	static double money = 0;
	{
		money += m_Items[m_top].payment;
		std::cout << std::endl << money << std::endl;
	}
}

// ������������

customers::Stack::Stack()
{
	m_top = 0;
}

