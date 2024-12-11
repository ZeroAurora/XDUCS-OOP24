#include <iostream>
#include <string>

class Teacher {
protected:
  std::string name;
  int age;
  std::string gender;
  std::string address;
  std::string phone;

  std::string title;

public:
  Teacher(std::string name, int age, std::string gender, std::string address,
          std::string phone, std::string title);
  void display();
};

Teacher::Teacher(std::string name, int age, std::string gender,
                 std::string address, std::string phone, std::string title)
    : name(name), age(age), gender(gender), address(address), phone(phone),
      title(title) {}

void Teacher::display() {
  std::cout << "Displaying teacher's information:" << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Gender: " << gender << std::endl;
  std::cout << "Address: " << address << std::endl;
  std::cout << "Phone: " << phone << std::endl;
  std::cout << "Title: " << title << std::endl;
}

class Cadre {
protected:
  std::string name;
  int age;
  std::string gender;
  std::string address;
  std::string phone;

  std::string post;

public:
  Cadre(std::string name, int age, std::string gender, std::string address,
        std::string phone, std::string post);
};

Cadre::Cadre(std::string name, int age, std::string gender, std::string address,
             std::string phone, std::string post)
    : name(name), age(age), gender(gender), address(address), phone(phone),
      post(post) {}

class Teacher_Cadre : public Teacher, public Cadre {
protected:
  int wage;

public:
  Teacher_Cadre(std::string name, int age, std::string gender,
                std::string address, std::string phone, std::string title,
                std::string post, int wage);
  void show();
};

Teacher_Cadre::Teacher_Cadre(std::string name, int age, std::string gender,
                             std::string address, std::string phone,
                             std::string title, std::string post, int wage)
    : Teacher(name, age, gender, address, phone, title),
      Cadre(name, age, gender, address, phone, post), wage(wage) {}

void Teacher_Cadre::show() {
  Teacher::display();
  std::cout << std::endl;
  std::cout << "Displaying additional information:" << std::endl;
  std::cout << "Post: " << post << std::endl;
  std::cout << "Wage: " << wage << std::endl;
}

int main() {
  Teacher_Cadre person("John", 20, "Male", "123 Main Street", "123-456-7890",
                       "Professor", "Postdoctoral Researcher", 10000);

  std::cout << "Displaying information:" << std::endl << std::endl;
  person.show();

  return 0;
}
