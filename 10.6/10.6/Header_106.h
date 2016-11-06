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
		Move(double a = 0, double b = 0); // устанавливает х, у в a, b 
		void showmove() const; // отображает текущие значения х, у 
		Move add(const Move & m) const; // Эта функция добавляет х из m к х вызывающего объекта, 
		                                // чтобы получить новое значение х, 
										// Добавляет у из m к у вызывающего объекта, чтобы получить новое 
										// значение у, присваивает инициализированному объекту значения х, у 
										// и возвращает его 
		void reset(double a = 0, double b = 0); // сбрасывает х, у в a, b 
	};



}


#endif // !HEADER_106