#include <cstring>
#include <iostream>

class Dog {
private:
  char name[18];
  char sex[10];
  int age;
  int weight;

public:
  Dog(const char *nm, const char *s, int a, int w);
  void eat(int n);
  void sleep(int n);
  void show();
};

Dog::Dog(const char *nm, const char *s, int a, int w){
  std::strcpy(name, nm);
  std::strcpy(sex, s);
  this->age = a;
  this->weight = w;
}

void Dog::eat(int n) {
  weight += n;
}

void Dog::sleep(int n) {
  age += n;
}

void Dog::show() {
  std::cout << "Name: " << this->name << std::endl;
  std::cout << "Sex: " << this->sex << std::endl;
  std::cout << "Age: " << this->age << std::endl;
  std::cout << "Weight: " << this->weight << std::endl;
}

int main() {
  Dog dog1("Tom", "male", 2, 10);
  dog1.show();
  std::cout << std::endl;

  std::cout << "After eating:" << std::endl;
  dog1.eat(5);
  dog1.show();
  std::cout << std::endl;

  std::cout << "After sleeping:" << std::endl;
  dog1.sleep(1);
  dog1.show();
  return 0;
}
