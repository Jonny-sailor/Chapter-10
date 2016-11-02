#ifndef HEADER_104
#define HEADER_104

#include <iostream>
#define iter for (int i = 0; i < 4; ++i)
namespace SALES
{
	
	class Sales
	{
	private:
   		enum { SIZE = 4 };
		double m_sales[SIZE];
		double m_average;
		double m_max;
		double m_min;
	public:
		// �������� ������� �������� �� 4 ��� n ��������� �� ������� 
		// �� � ���� sales ��������� s, ��������� � ��������� 
		// ������� ��������������, ������������ � ����������� 
		// �������� ��������� �����; 
		// ���������� �������� sales, ���� ������� ����, ��������������� � 0 
		Sales(const double sales[SIZE]);
		Sales();
		int set();
		// ���������� ��� ���������� �� ��������� s 
		void show(void)const;
	};

	void dontclose(void);
   
}
#endif // !1