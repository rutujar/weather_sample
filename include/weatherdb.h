#ifndef WEATHERDB_H_
#define WEATHERDB_H_

#include <myarray.h>
#include <weather.h>
#include <mytime.h>

class WeatherDb {
  MyArray<CityWeather>* w_array;
  int m_len;

 public:
  WeatherDb();
  WeatherDb(int);
  virtual ~WeatherDb();
  void insert(const char* city, double tval, double mval) {
    // TODO
  }
  void insert(MyString& city, Temperature& tval, Humidity& mval) {
    // TODO
  }
  //void insert(MyString& city, Temperature& tval, Humidity& mval, MyTime& t) {
    // TODO
  //}
  CityWeather& findByCityName(const char* city) {
    // TODO
  }
  CityWeather& findByCityCode(int code) {
    // TODO
  }
  void print(const char* city) {
    // TODO
  }
  void print(int code) {
    // TODO
  }
  CityWeather& averageTemperature() {
    // TODO
  }
  CityWeather& minTemperature() {
    // TODO
  }
  CityWeather& maxTemperature() {
    // TODO
  }
  CityWeather& averageHumidity() {
    // TODO
  }
  CityWeather& minHumidity() {
    // TODO
  }
  CityWeather& maxHumidity() {
    // TODO
  }
  /* Other possible operations
     * Filtering based on lower/upper threshold for temperature,humidity
     * Possible aggregations - count,min,max,avg
     * Aggregations based on city code
     * Aggregations based on city name
     * Aggregations based on time range
     *      */
};
// TODO: move all empty functions to .cpp file with suitable business logic
#endif /* WEATHERDB_H_ */
