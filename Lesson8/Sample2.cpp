#include <iostream>
using namespace std;

int main()
{
  int a;
  int* pA;

  a = 5;
  pA = &a;

  cout << "변수 a의 값: " << a << "\n";
  cout << "변수 a의 주소: " << &a << "\n";
  cout << "포인터 pA의 값: " << pA << "\n";

}