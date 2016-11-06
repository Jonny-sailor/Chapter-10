#include "Header_106.h"

moves::Move::Move(double a, double b) 
{
	m_x = a;
	m_y = b;
}

void moves::Move::showmove() const 
{
	std::cout << "x = " << m_x << std::endl;
	std::cout << "y = " << m_y << std::endl;
}
moves::Move moves::Move::add(const Move & m) const     
{                                                     
													
	Move temp = m;
	temp.m_x += this->m_x; 
	temp.m_y += this->m_y;
	
	return temp;

}

void moves::Move::reset(double a, double b) 
{
	m_x = a;
	m_y = b;
}