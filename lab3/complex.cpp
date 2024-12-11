#include <iostream>

class Complex {
private:
  double real;
  double imag;

public:
  Complex(double r, double i): real(r), imag(i) {}

  double getReal() const { return real; }
  double getImag() const { return imag; }

  Complex operator+(const Complex &c) const {
    return Complex(real + c.real, imag + c.imag);
  }

  Complex operator-(const Complex &c) const {
    return Complex(real - c.real, imag - c.imag);
  }

  Complex operator*(const Complex &c) const {
    return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
  }

  Complex operator/(const Complex &c) const {
    double r = real * c.real + imag * c.imag;
    double i = -imag * c.real + real * c.imag;
    return Complex(
      r / (c.real * c.real + c.imag * c.imag),
      i / (c.real * c.real + c.imag * c.imag)
    );
  }

  void print() const {
    std::cout << real << " + " << imag << "i" << std::endl;
  }
};

int main() {
  Complex c1(1.0, 2.0);
  Complex c2(3.0, 4.0);
  Complex c3 = c1 + c2;
  Complex c4 = c1 - c2;
  Complex c5 = c1 * c2;
  Complex c6 = c1 / c2;

  c3.print();
  c4.print();
  c5.print();
  c6.print();

  return 0;
}
