#include <iostream>

class Shape {
public:
  Shape() {}
  virtual double area() = 0;
};

class Circle : public Shape {
private:
  double radius;

public:
  Circle(double radius) : radius(radius) {}
  double area() { return 3.14 * radius * radius; }
};

class Square : public Shape {
private:
  double side;

public:
  Square(double side) : side(side) {}
  double area() { return side * side; }
};

class Rectangle : public Shape {
private:
  double length;
  double width;

public:
  Rectangle(double length, double width) : length(length), width(width) {}
  double area() { return length * width; }
};

class Trapezoid : public Shape {
private:
  double short_base;
  double long_base;
  double height;

public:
  Trapezoid(double short_base, double long_base, double height)
      : short_base(short_base), long_base(long_base), height(height) {}
  double area() { return (short_base + long_base) * height / 2; }
};

class Triangle : public Shape {
private:
  double base;
  double height;

public:
  Triangle(double base, double height) : base(base), height(height) {}
  double area() { return base * height / 2; }
};

int main() {
  Shape *shapes[5];
  shapes[0] = new Circle(3);
  shapes[1] = new Square(5);
  shapes[2] = new Rectangle(4, 6);
  shapes[3] = new Trapezoid(3, 5, 5);
  shapes[4] = new Triangle(5, 4);

  double total = 0;
  for (int i = 0; i < 5; i++) {
    std::cout << "Area of shape " << i << ": " << shapes[i]->area()
              << std::endl;
    total += shapes[i]->area();
  }
  std::cout << "Total area: " << total << std::endl;

  return 0;
}
