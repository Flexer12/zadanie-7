#ifndef Complex_H 
#define Complex_H
#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
class Complex
{

private:
	double x;
	double y;
public:
	Complex();//По умолчанию
	Complex(double _re, double _im);//С параметрами
	explicit Complex(double _re);//Делегирующий
	Complex(const Complex& other);//Копирования
	/* VS ругается: Эта функция не может "throw", объявите её как "noexcept" (f.6) */
	Complex(Complex&& other) noexcept;//Перемещения
	~Complex();//Деструктор
	double modul();
	double argument();
	void show_complex();
	void set_complex(double rl, double mn);
	double get_complex_rl();
	double get_complex_mn();

};
#endif