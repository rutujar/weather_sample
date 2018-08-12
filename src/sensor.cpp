#include <sensor.h>
void Sensor::setReading(double reading) { m_reading = reading; }
double Sensor::reading() const { return m_reading; }
