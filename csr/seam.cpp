#include "seam.h"
#include <iostream>
using namespace std;

bool seam(double xS, double xF) {
	double x0, x1;
	cout << "\nSeam start: ";
	cin >> x0;
	cout << "\nSeam end: ";
	cin >> x1;
	if ((x0 == xS) && (x1 == xF)) {
		return true;
	}
	else {
		return false;
	}
}