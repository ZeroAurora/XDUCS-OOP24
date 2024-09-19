#include <iostream>

using namespace std;

template <typename T> void sort_three(T &a, T &b, T &c) {
  if (a > b) {
    swap(a, b);
  }
  if (a > c) {
    swap(a, c);
  }
  if (b > c) {
    swap(b, c);
  }
}

int main() {
  int choice;
  cout << "int or float?" << endl
       << "1. int" << endl
       << "2. float" << endl
       << "Your choice: ";

  cin >> choice;

  if (choice == 1) {
    int a, b, c;
    cout << "Enter three: ";
    cin >> a >> b >> c;
    sort_three<int>(a, b, c);
    cout << a << " " << b << " " << c << endl;
  } else if (choice == 2) {
    float a, b, c;
    cout << "Enter three: ";
    cin >> a >> b >> c;
    sort_three<float>(a, b, c);
    cout << a << " " << b << " " << c << endl;
  } else {
    cout << "Invalid input" << endl;
  }

  return 0;
}
