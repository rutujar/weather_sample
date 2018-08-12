#ifndef INCLUDE_MYTIME_H_
#define INCLUDE_MYTIME_H_

#include <iostream>


class MyTime {
  int hh;
  int mm;
  // TODO: ss for seconds

 public:
  MyTime();
  explicit MyTime(int, int);
  MyTime(const MyTime& ref);
  void display();
  void update(int, int);

  MyTime operator+(const MyTime& ref);
  MyTime operator+(int nm);
  MyTime& operator++();
  bool operator==(const MyTime& ref);
  // MyTime& operator=(const MyTime& ref);
  MyTime& operator=(int);  // scalar to userdefined
  operator int();          // userdefined to scalar
  friend std::ostream& operator<<(std::ostream&, const MyTime&);
};
#endif /* INCLUDE_MYTIME_H_ */
