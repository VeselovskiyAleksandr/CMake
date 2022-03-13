#include "tweezers.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void tweezers(double x, double k) {
	double y;
	cout << "\nУкажите координату для пинцета.";
	cin >> x;
	y = k * x;
	cout << "\nПинцет зажат.";
}