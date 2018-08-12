#ifndef __HUMIDITY_H__
#define __HUMIDITY_H__

#include <sensor.h>

class Humidity : public Sensor {
 public:
  explicit Humidity(double reading) : Sensor(reading) {}
  virtual ~Humidity() {}
  // void setReading(double);  // Humidity& operator=(double hval)
  // double reading() const;
};
#endif
