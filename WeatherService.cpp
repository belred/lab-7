#include <iostream>
#include <clocale>
#include "XmlService.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	XmlService xs;
	Weather w_2 = xs.getWeather("weather.xml");
	w_2.print();
}