#include <myarray.h>

/*template <typename T>
MyArray<T>::MyArray() {
  m_len = 0;
  m_cursor = m_arr = NULL;
}*/
/*template <typename T>
MyArray<T>::MyArray(int len) : m_len(len) {
  m_arr = new T[m_len];
  m_cursor = m_arr;
}*/

/*template <typename T>
MyArray<T>::~MyArray() {
  if (m_len > 0) {
    delete[] m_arr;
    m_arr = NULL;
  }
}*/

template <typename T>
void MyArray<T>::print() {
  for (int i = 0; i < m_len; i++) {
    std::cout << m_arr[i];  // assume:operator<< on T type
  }
}

template <typename T>
T& MyArray<T>::operator[](int index) {
  return m_arr[index];
}

template <typename T>
T& MyArray<T>::operator*() {
  return *m_cursor;
}
template <typename T>
MyArray<T>& MyArray<T>::operator++() {
  if (m_cursor < m_arr + m_len) {
    ++m_cursor;
  }
  // else print suitable err message
  return *this;
}
template <typename T>
MyArray<T>& MyArray<T>::operator--() {
  if (m_cursor > m_arr) {
    --m_cursor;
  }
  // else print suitable err message
  return *this;
}
