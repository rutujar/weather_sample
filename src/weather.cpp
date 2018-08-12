#include "weather.h"
#include <iostream>

void CityWeather::display() {
  std::cout << "Temperature is:" << m_temperature.reading() << "\n";
  std::cout << "Humidity is:" << m_humidity.reading() << "\n";
}
void CityWeather::updateTemperature(double tval) {
  m_temperature.setReading(tval);  // m_temperature=tval; //operator=
}
void CityWeather::updateHumidity(double hval) {
  m_humidity.setReading(hval);  // m_humidity=hval;     //operator=
}
void CityWeather::setTimestamp() {
  time_t now = time(0);
  struct tm *tptr = localtime(&now);
  //m_logtime.update(tptr->tm_hour, tptr->tm_min);
}
double CityWeather::temperature() const {
  return m_temperature.reading();
  // return m_temperature; //operator double()
}
double CityWeather::humidity() const {
  return m_humidity.reading();
  // return m_humidity;    //operator double()
}
std::ostream &operator<<(std::ostream &rout, const CityWeather &ref) {
//  rout << ref.m_cityCode << "," << ref.m_cityName << "," << ref.m_temperature.reading() << ","
  //     << ref.m_humidity.reading() << "," << ref.m_logtime << "\n";
  // TODO: better display of details(user friendly)
  return rout;
}
