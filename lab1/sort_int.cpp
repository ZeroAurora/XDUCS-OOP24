#include <iostream>

using namespace std;

// make sure a < b < c
void sort_three_ints(int &a, int &b, int &c) {
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
  int a, b, c;
  cin >> a >> b >> c;
  sort_three_ints(a, b, c);
  cout << a << " " << b << " " << c << endl;
  return 0;
}
