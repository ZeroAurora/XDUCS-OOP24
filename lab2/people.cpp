#include <iostream>
#include <ostream>

class People {
protected:
  int age;
  int height;
  int weight;

  static int num;
public:
  People(int a, int h, int w);
  ~People();
  void eating();
  void sporting();
  void sleeping();
  void show();
  static void show_num();

};

int People::num = 0;

People::People(int a, int h, int w) : age(a), height(h), weight(w) {
  num++;
}

People::~People() {
  num--;
}

void People::eating() {
  std::cout << "eating" << std::endl;
  weight++;
}

void People::sporting() {
  std::cout << "sporting" << std::endl;
  height++;
}

void People::sleeping() {
  std::cout << "sleeping" << std::endl;
  age++;
  height++;
  weight++;
}

void People::show() {
  std::cout << "age: " << age << " height: " << height << " weight: " << weight
            << std::endl;
}

void People::show_num() {
  std::cout << "num: " << num << std::endl;
}

int main() {
  People::show_num();

  std::cout << "adding p1:" << std::endl;
  People p1(18, 180, 80);
  p1.show();
  std::cout << "adding p2:" << std::endl;
  People p2(19, 190, 90);
  p2.show();

  People::show_num();

  std::cout << std::endl;

  std::cout << "p1:" << std::endl;
  p1.show();
  p1.eating();
  p1.sporting();
  p1.sleeping();
  p1.show();

  return 0;
}
