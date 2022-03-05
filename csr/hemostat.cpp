#include "hemostat.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void hemostat(double x, double k) {
	double y;
	cout << "\nУкажите координату для зажима.";
	cin >> x;
	y = k * x;
	cout << "\nЗажим установлен.";
}