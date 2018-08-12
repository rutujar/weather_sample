#include <mystring.h>
#include <iostream>

MyString::MyString() {
  m_len = 0;
  m_buf = NULL;
}
MyString::MyString(const char* ps) {
  m_len = strlen(ps);
  m_buf = new char[m_len + 1];
  snprintf(m_buf, m_len, "%s", ps);
}
MyString::MyString(const MyString& ref) : m_len(ref.m_len) {
  m_buf = new char[m_len + 1];
  snprintf(m_buf, m_len, ref.m_buf);
}
MyString& MyString::operator=(const MyString& ref) {
  if (m_len > 0) delete[] m_buf;
  m_len = ref.m_len;
  m_buf = new char[m_len + 1];
  snprintf(m_buf, m_len, ref.m_buf);
  return *this;
}
MyString::~MyString() {
  if (m_len > 0) delete[] m_buf;
}
void MyString::display() const { std::cout << m_buf << "\n"; }
int MyString::length() const { return m_len; }
std::ostream& operator<<(std::ostream& rout, const MyString& ref) {
  std::cout << ref.m_buf;
  return rout;
}
