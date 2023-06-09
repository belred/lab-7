﻿#include <iostream>
#include <clocale>
#include "XmlService.h"
#include "JsonService.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	JsonService js;
	Weather w_1 = js.getWeather("weather.json");
	w_1.print();
	XmlService xs;
	Weather w_2 = xs.getWeather("weather.xml");
	w_2.print();
}