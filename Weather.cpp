#include "Weather.h"

Weather::Weather(std::string p_city, double p_lon, double p_lat, double p_temperature, std::string p_weather, double p_windSpeed, int p_clouds) {
	city = p_city;
	lon = p_lon;
	lat = p_lat;
	temperature = p_temperature;
	weather = p_weather;
	windSpeed = p_windSpeed;
	clouds = p_clouds;
}

void Weather::print() {
	cout << "Weather in the city " << city << ": " << endl;
	cout << "Temperature: " << temperature << endl;
	cout << "Weather: " << weather << endl;
	cout << "Wind speed: " << windSpeed << endl;
	cout << "Clouds: " << clouds << endl;
}