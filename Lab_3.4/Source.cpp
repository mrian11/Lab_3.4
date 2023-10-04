//Lab_03_4.cpp
//<Яцик Мар'ян>
//Лабораторна робота № 3.4
//Розгалуження, задане графіком функції.
// Варіант25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double y;
	double x;
	double R;
	cout << "R="; cin >> R;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	if (pow(y, 2) <= pow(R, 2) - pow(x, 2) && (y >= 0 && x >= 0) || pow(y, 2) >= pow(R, 2) - pow(x, 2) && (y <= 0 && x <= 0) || (y <= sqrt(R*R+R*R) && (x <= 0 && y>=0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}