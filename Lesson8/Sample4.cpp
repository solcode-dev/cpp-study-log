#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 10;
  int* pA;

  pA = &a;

  cout << "변수 a의 값: " << a << "\n"; // 5
  cout << "포인터 pA의 값: " << pA << "\n"; // 주소
  cout << "pA의 값: " << *pA << "\n"; // 5

  pA = &b;

  cout << "변수 b의 값: " << b << "\n"; // 10
  cout << "포인터 pA의 값: " << pA << "\n"; // 주소
  cout << "pA의 값: " << *pA << "\n"; // 10
  
  return 0;

}
