#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_

#include <cstdio>
#include <cstring>
#include <iostream>

class MyString {
  char* m_buf;
  int m_len;

 public:
  MyString();
  explicit MyString(const char* ps);
  explicit MyString(const MyString&);
  ~MyString();
  MyString& operator=(const MyString&);
  void display() const;
  int length() const;
  // TODO: operator+=
  // TODO: reverse
  friend std::ostream& operator<<(std::ostream&, const MyString&);
};

#endif
