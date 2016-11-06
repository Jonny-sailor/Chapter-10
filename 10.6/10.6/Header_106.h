#ifndef HEADER_106
#define HEADER_106

#include <cctype>
#include <iostream>

namespace moves {

	class Move
	{
	private:
		double m_x;
		double m_y;
	public:
		Move(double a = 0, double b = 0); // ������������� �, � � a, b 
		void showmove() const; // ���������� ������� �������� �, � 
		Move add(const Move & m) const; // ��� ������� ��������� � �� m � � ����������� �������, 
		                                // ����� �������� ����� �������� �, 
										// ��������� � �� m � � ����������� �������, ����� �������� ����� 
										// �������� �, ����������� ������������������� ������� �������� �, � 
										// � ���������� ��� 
		void reset(double a = 0, double b = 0); // ���������� �, � � a, b 
	};



}


#endif // !HEADER_106