#include <iostream>

class Student {
public:
  int number;
  int score;
  Student(int num, int scr) : number(num), score(scr) {}
};

Student *max(Student *s, int n) {
  Student *maxs = s;
  for (int i = 1; i < n; i++) {
    if (s[i].score > maxs->score) {
      maxs = &s[i];
    }
  }
  return maxs;
}

int main() {
  Student s[5] = {
    Student(1, 60),
    Student(2, 80),
    Student(3, 100),
    Student(4, 90),
    Student(5, 70)
  };
  Student *maxs = max(s, 5);
  std::cout << maxs->number << std::endl;
  return 0;
}
