#include <cstring>
#include <iostream>

class Student {
private:
  char name[18];
  int num;
  int mathScore;
  int englishScore;

  static int count;
  static int mathTotalScore;
  static int englishTotalScore;

public:
  Student(const char *nm, int nu, int math, int english);
  ~Student();
  void showBase();
  static void showStatic();
};

int Student::count = 0;
int Student::mathTotalScore = 0;
int Student::englishTotalScore = 0;

Student::Student(const char *nm, int nu, int math, int english) {
  std::strcpy(name, nm);
  num = nu;
  mathScore = math;
  englishScore = english;

  count++;
  mathTotalScore += math;
  englishTotalScore += english;
}

Student::~Student() {
  count--;
  mathTotalScore -= mathScore;
  englishTotalScore -= englishScore;
}

void Student::showBase() {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Num: " << num << std::endl;
  std::cout << "Math score: " << mathScore << std::endl;
  std::cout << "English score: " << englishScore << std::endl;
}

void Student::showStatic() {
  std::cout << "Total count: " << count << std::endl;
  std::cout << "Total math score: " << mathTotalScore << std::endl;
  std::cout << "Total english score: " << englishTotalScore << std::endl;
}

int main() {
  Student s1("A", 1, 90, 100);
  Student s2("B", 2, 80, 90);
  Student s3("C", 3, 70, 80);

  std::cout << "s1:" << std::endl;
  s1.showBase();
  std::cout << std::endl;

  std::cout << "s2:" << std::endl;
  s2.showBase();
  std::cout << std::endl;

  std::cout << "s3:" << std::endl;
  s3.showBase();
  std::cout << std::endl;

  Student::showStatic();

  return 0;
}
