#include"104_header.h"

SALES::Sales::Sales()
{
	enum{null};
	m_sales[SIZE] = { null };
	m_max = null;
	m_min = null;
	m_average = null;

}

SALES::Sales::Sales(const double sales[SIZE])
{
	enum {null};
	m_min = sales[0];
	m_max = sales[0];
	m_average = null;
	iter
	{
		if (m_min > sales[i])
		{
			m_min = sales[i];
		}
	if (m_max < sales[i])
	{
		m_max = sales[i];
	}

	m_average += sales[i];
	}
	m_average /= SALES::Sales::SIZE;
}



     void SALES::Sales::show()const
	{
		std::cout << std::endl << "Max: " << m_max << std::endl << "Min: " << m_min << std::endl << "Average: " << m_average << std::endl;

	}


	int SALES::Sales::set()
	{
		double temp_periods[SIZE];
		

		iter
		{
		   std::cout << "Please enter sales on " << i+1 << " period" << std::endl;
		std::cin >> temp_periods[i];
		if (std::cin.fail())
		{
			std::cout << "Bad! Bad! User";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--i;

		}
		}
		Sales temp(temp_periods);

		*this = temp;
	
		return 1;

	}


	
	void SALES::dontclose(void)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
	}

