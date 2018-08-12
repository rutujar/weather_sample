#ifndef __TEMPERATURE__
#define __TEMPERATURE__

#include "sensor.h"

class Temperature : public Sensor {
 public:
  explicit Temperature(double reading) : Sensor(reading) {}
  ~Temperature() {}
  // void setReading(double);  // Temperature& operator=(double)
  // double reading() const;
  double toFahrenheit() const;
};

#endif
