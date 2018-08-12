#include "weather.h"
#include "weatherdb.h"

const int number_of_records = 10;
int main() {
  CityWeather w1(1001, "pune", 24, 72);
  w1.display();
  WeatherDb mydb(number_of_records);
  //MyTime t1;
  /**
   * TODO: menu operation on mydb like insert,display,
   * find by city code, find by city name,
   * aggregations on temperature,humidity
   */
  //tested github desktop client
  return 0;
}
