#include"Header.h"
#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
int main() {
	Complex a, b;
	double a1, b1, c, d;
	int variant=0;
	setlocale(LC_ALL, "Russian");
	cout << endl << "1 сложение" << endl;
	cout << "2 вычитания" << endl;
	cout << "3 умножения" << endl;
	cout << "4 деление" << endl;
	cout << "Пожалуйста, введите операцию (1-4):";
	cin >> variant;
	cout << endl << "Пожалуйста, введите действительные и мнимые части комплексного числа a:";
	cin >> a1;
	cin >> b1;
	cout << "Пожалуйста, введите действительную и мнимую части комплекса b : ";
	cin >> c;
	cin >> d;
	a.set_complex(a1, b1);
	b.set_complex(c, d);
	if (variant == 1) {
		cout << endl << endl << "Результат вычисления:" << a.get_complex_rl() +b.get_complex_rl() <<"  +" <<a.get_complex_mn()+b.get_complex_mn() <<"i"<< endl;
	}
	if (variant == 2) {
		cout << endl << endl << "Результат вычисления:" << a.get_complex_rl() - b.get_complex_rl() << "  +" << a.get_complex_mn() - b.get_complex_mn() << "i" << endl;

	}
	if (variant == 3) {
		cout << endl << endl << "Результат вычисления:" << a.get_complex_rl() * b.get_complex_rl()- a.get_complex_mn() * b.get_complex_mn() << "  +" << a.get_complex_rl() * b.get_complex_mn() + a.get_complex_mn() * b.get_complex_rl() << "i" << endl;

	}
	if (variant == 4) {
		cout << endl << endl << "Результат вычисления:" << (a.get_complex_rl() * b.get_complex_rl() + a.get_complex_mn() * b.get_complex_mn()) / (b.get_complex_rl() * b.get_complex_rl() + b.get_complex_mn() * b.get_complex_mn()) << " +" << (a.get_complex_mn() * b.get_complex_rl() - a.get_complex_rl() * b.get_complex_mn()) / (b.get_complex_rl() * b.get_complex_rl() + b.get_complex_mn() * b.get_complex_mn())<<"i";
	}
	

}
