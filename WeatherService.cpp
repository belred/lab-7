#include <iostream>
#include <clocale>
#include "JsonService.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	JsonService js;
	Weather w_1 = js.getWeather("weather.json");
	w_1.print();
}