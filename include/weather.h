#ifndef __WEATHER_H
#define __WEATHER_H

#include <humidity.h>
#include <mystring.h>
#include <mytime.h>
#include <sensor.h>
#include <temperature.h>
#include <iostream>

class CityWeather {
  int m_cityCode;
  MyString m_cityName;
  Temperature m_temperature;
  Humidity m_humidity;
  //MyTime m_logtime;

 public:
  CityWeather() : m_temperature(24), m_humidity(72) {}
  explicit CityWeather(double val) : m_temperature(val), m_humidity(72) {}
  CityWeather(int code, MyString city, double tval, double hval)
      : m_cityCode(code), m_cityName(city), m_temperature(tval), m_humidity(hval) {}
  CityWeather(int code, const char *city, double tval, double hval)
      : m_cityCode(code), m_cityName(city), m_temperature(tval), m_humidity(hval) {}

  virtual ~CityWeather() {}
  void display();
  void updateTemperature(double);
  void updateHumidity(double);
  void setTimestamp(int hh, int mm);
  void setTimestamp();
  double temperature() const;
  double humidity() const;
  friend std::ostream &operator<<(std::ostream &, const CityWeather &);
};

#endif
