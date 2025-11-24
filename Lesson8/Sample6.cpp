#include <iostream>
using namespace std;

//잘못된 swap함수의 선언
// void swap(int x, int y);
// swap함수의 수정
void swap(int* pX, int* pY);

int main()
{
  int num1 = 5;
  int num2 = 10;

  cout << "변수 num1의 값: " << num1 << "\n";
  cout << "변수 num2의 값: " << num2 << "\n";
  cout << "num1, num의 값을 교환한다. \n";

  swap(num1, num2);
  cout << "변수 num1의 값: " << num1 << "\n";
  cout << "변수 num2의 값: " << num2 << "\n";
  
  return 0;
}

void swap(int* pX, int* pY)
{
  int tmp;

  tmp = *pX;
  *pX = *pY;
  *pY = tmp;
}

