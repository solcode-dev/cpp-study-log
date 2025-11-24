#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int* pA = &a;

  cout << "변수 a의 값은 "  << a << "\n";

  *pA = 50;
  cout << "*pA에 50을 대입했음";
  cout << "변수 a의 값은 "  << a << "\n";

}