#include <iostream>

using namespace std;

int my_max(int a, int b, int c = 0) {
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}

int main() {
  int choice, a, b, c;

  cout << "Choose one of the following:" << endl
       << "1. Max of three positive integers" << endl
       << "2. Max of two positive integers" << endl
       << "Your choice: ";

  cin >> choice;

  if (choice == 1) {
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
      cout << "Invalid input" << endl;
      return 0;
    }
    cout << "Max: " << my_max(a, b, c) << endl;
  } else if (choice == 2) {
    cout << "Enter two positive integers: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
      cout << "Invalid input" << endl;
      return 0;
    }
    cout << "Max: " << my_max(a, b) << endl;
  } else {
    cout << "Invalid input" << endl;
  }

  return 0;
}
