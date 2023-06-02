#include <iostream>
#include <string>
using namespace std;
#pragma once
class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string p_city = "Kirov", double p_lon = 49.6601, double p_lat = 58.5966, double p_temperature = 5.69, std::string p_weather = "rain", double p_windSpeed = 4.27, int p_clouds = 100);
	void print();
};

