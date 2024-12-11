#include <iostream>

class Date {
private:
  int year;
  int month;
  int day;

public:
  Date(int y, int m, int d) : year(y), month(m), day(d) {}

  void print() const {
    std::cout << year << "-" << month << "-" << day << std::endl;
  }

  friend class Time;
};

class Time {
private:
  int hour;
  int minute;
  int second;

public:
  Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

  void print() const {
    std::cout << hour << ":" << minute << ":" << second << std::endl;
  }

  void print_with_date(const Date &d) const {
    std::cout << d.year << "-" << d.month << "-" << d.day << " "
              << hour << ":" << minute << ":" << second << std::endl;
  }
};

int main() {
  Date d(1145, 1, 4);
  Time t(19, 19, 8);
  d.print();
  t.print();
  t.print_with_date(d);
  return 0;
}
