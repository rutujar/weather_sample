#ifndef MYARRAY_H_
#define MYARRAY_H_

#include <cstdio>
#include <iostream>

template <typename T>
class MyArray {
  T* m_arr;
  T* m_cursor;
  int m_len;

 public:
  // MyArray();
  MyArray(int len) : m_len(len) {
    m_arr = new T[m_len];
    m_cursor = m_arr;
  }
  ~MyArray() {
    if (m_len > 0) {
      delete[] m_arr;
      m_arr = NULL;
    }
  }
  void print();
  MyArray& operator++();
  MyArray& operator--();
  T& operator[](int);
  T& operator*();

 private:
  MyArray(const MyArray& ref) {}                        // disabled copy constructor
  MyArray& operator=(const MyArray&) { return *this; }  // disabled operator=
};

#endif /* MYARRAY_H_ */
