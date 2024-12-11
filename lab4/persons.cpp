#include <iostream>

class Person {
protected:
  int number;
  std::string name;

public:
  Person(int number, std::string name) : number(number), name(name) {}
  void display() { 
    std::cout << "Number: " << number << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << std::endl;
  }
};

class Teacher : public Person {
protected:
  std::string title;
  std::string department;

public:
  Teacher(int number, std::string name, std::string title,
          std::string department)
      : Person(number, name), title(title), department(department) {}

  void display() {
    std::cout << "Number: " << number << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Department: " << department << std::endl;
  }
};

class Student : public Person {
protected:
  std::string classnum;
  std::string grade;

public:
  Student(int number, std::string name, std::string classnum, std::string grade)
      : Person(number, name), classnum(classnum), grade(grade) {}

  void display() {
    std::cout << "Number: " << number << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Class number: " << classnum << std::endl;
    std::cout << "Grade: " << grade << std::endl;
  }
};

int main() {
  std::cout << "Input teacher's information (number, name, title, department):"
            << std::endl;
  int number;
  std::string name;
  std::string title;
  std::string department;
  std::cin >> number >> name >> title >> department;
  Teacher teacher(number, name, title, department);
  std::cout << "Displaying teacher's information:" << std::endl;
  teacher.display();

  std::cout << std::endl;

  std::cout << "Input student's information (number, name, classnum, grade):"
            << std::endl;
  int number2;
  std::string name2;
  std::string classnum;
  std::string grade;
  std::cin >> number2 >> name2 >> classnum >> grade;
  Student student(number2, name2, classnum, grade);
  std::cout << "Displaying student's information:" << std::endl;
  student.display();

  return 0;
}