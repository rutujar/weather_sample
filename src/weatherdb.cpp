#include <weather.h>
#include <weatherdb.h>

WeatherDb::WeatherDb() {
  // TODO Auto-generated constructor stub
}
WeatherDb::WeatherDb(int len) : m_len(len) {
  // filler code
  w_array = new MyArray<CityWeather>(10);
}
WeatherDb::~WeatherDb() { 
//delete w_array; 
}

// TODO: Implement business logic for all the function
