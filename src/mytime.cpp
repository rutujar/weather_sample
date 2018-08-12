#include <mytime.h>
#include <iostream>

MyTime::MyTime() : hh(0), mm(0) {}
MyTime::MyTime(int x, int y) : hh(x), mm(y) {}
MyTime::MyTime(const MyTime& ref) : hh(ref.hh), mm(ref.mm) {}
void MyTime::display() { std::cout << hh << ":" << mm << "\n"; }
void MyTime::update(int h, int m) {
  hh = h;
  mm = m;
}

MyTime MyTime::operator+(const MyTime& ref) {  // t1.operator+(t2)
  int th, tm;
  th = hh + ref.hh;       // this->hh+ref.hh
  tm = mm + ref.mm;       // this->mm+ref.mm //TODO:tm > 60
  return MyTime(th, tm);  // unnamed,temporary
}
MyTime MyTime::operator+(int nm) {  // t1.operator+(5)
  int th = hh;                      // this->hh
  int tm = mm + nm;                 // this->mm+nm, tm>60
  return MyTime(th, tm);
}
MyTime& MyTime::operator++() {  // t1.operator++
  ++mm;                         // ++this->mm, mm>0
  return *this;
}
bool MyTime::operator==(const MyTime& ref) {
  if (hh == ref.hh && mm == ref.mm)
    return true;
  else
    return false;
}
/*MyTime& operator=(const MyTime& ref) {  // t5.operator=(t1)
  hh = ref.hh;                          // this->hh=ref.hh;
  mm = ref.mm;                          // this->mm=ref.mm;
  return *this;
}*/
MyTime& MyTime::operator=(int ns) {
  hh = ns / 60;
  mm = ns % 60;
  // TODO:logic if ss is present
  return *this;
}
MyTime::operator int() {
  return hh * 60 + mm;
  // TODO:logic if ss is present
}
std::ostream& operator<<(std::ostream& rout, const MyTime& ref) {
  rout << ref.hh << ":" << ref.mm;
  return rout;
}
