#include <iostream>
using namespace std;

int main() {
  int test[5] = {80, 60, 55, 22, 75};

  cout << "test[0]의 값: " << test[0] << "\n";
  cout << "test[0]의 주소: " << &test[0] << "\n";
  cout << "test의 값: " << test << "\n";
  cout << "test+1의 값: " << test + 1 << "\n";
  cout << "*(test+1)의 값: " << *(test + 1) << "\n";

  return 0;
}