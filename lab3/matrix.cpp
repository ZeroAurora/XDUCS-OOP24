#include <iostream>
#include <istream>

class Matrix {
public:
  int m[2][3];

  Matrix() {
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
        this->m[i][j] = 0;
      }
    }
  }
};

std::istream &operator>>(std::istream &in, Matrix &m) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      in >> m.m[i][j];
    }
  }
  return in;
}

std::ostream &operator<<(std::ostream &out, Matrix &m) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      out << m.m[i][j] << " ";
    }
    out << std::endl;
  }
  return out;
}

int main() {
  Matrix m;
  std::cout << "Enter matrix: " << std::endl;
  std::cin >> m;
  std::cout << "Matrix: " << std::endl;
  std::cout << m;
  return 0;
}
