#include "Header_107.h"





betelgaize::Plorg::Plorg(char name[MAX], int CI)
{
	strncpy_s(m_name, name, MAX);
	m_CI = CI;
}
void betelgaize::Plorg::switchCI(const int &val)
{
	m_CI = val;
}
void betelgaize::Plorg::show()const
{
	std::cout << "Plorg's name: " << m_name << std::endl;
	std::cout << "Plorg's CI: "<< m_CI << std::endl;

}