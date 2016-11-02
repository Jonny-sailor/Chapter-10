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
		// Копирует меньшее значение из 4 или n элементов из массива 
		// аг в член sales структуры s, вычисляет и сохраняет 
		// среднее арифметическое, максимальное и минимальное 
		// значения введенных чисел; 
		// оставшиеся элементы sales, если таковые есть, устанавливаются в 0 
		Sales(const double sales[SIZE]);
		Sales();
		int set();
		// Отображает всю информацию из структуры s 
		void show(void)const;
	};

	void dontclose(void);
   
}
#endif // !1