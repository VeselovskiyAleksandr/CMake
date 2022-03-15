
#include "skalpel.h"
#include "seam.h"
#include "hemostat.h"
#include "tweezers.h"
#include <iostream>
#include "locale.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double xH = 0, xT = 0, yH = 0, yT = 0, x0, x1, y0, y1, k = 0;
	string strS = "skalpel", strH = "hemostat", strT = "tweezers", strSut = "suture", str = "";
	bool surgicalSuture = false;
	cout << "\n Координаты начала разреза.\n";
	cout << "Starting point X = ";
	cin >> x0;
	cout << "Starting point Y = ";
	cin >> y0;
	cout << "\n Координаты конца разреза.";
	cout << "End point X = ";
	cin >> x1;
	cout << "End point Y = ";
	cin >> y1;
	while (surgicalSuture != true) {
		cout << "\nОжидание команды от хирурга (выберите инструмент: skalpel, hemostat, tweezers, suture). ";
		cin >> str;
		if (str == strS) {
			k = scalpel(x0, y0, x1, y1);
		}
		else if (str == strH) {
			hemostat(xH, k);
			yH = k * xH;
		}
		else if (str == strT) {
			tweezers(xT, k);
			yT = k * xT;
		}
		else if (str == strSut) {
			surgicalSuture = seam(x0, x1);
		}
		str = "";
	}
	cout << "\nОперация прошла успешно!";
	return 0;
}