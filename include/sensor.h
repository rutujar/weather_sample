#ifndef __SENSOR_H
#define __SENSOR_H

class Sensor {
  double m_reading;

 public:
  explicit Sensor(double reading) : m_reading(reading) {}
  virtual void setReading(double);
  virtual double reading() const;
  virtual ~Sensor() {}
};

#endif
