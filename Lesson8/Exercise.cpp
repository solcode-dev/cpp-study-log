#include <iostream>
using namespace std;

// int add(int* x1, int* x2, int a);
int add(int& rX1, int& rX2, int a);

int main()
{
  int num1, num2, plus; // 포인터변수 초기화를 위해 실제 값을 담을 변수 선언
  // int* pNum1 = &num1;
  // int* pNum2 = &num2;
  
  cout << "2과목 분의 점수를 입력해라.\n";
  cin >> num1 >> num2;
  cout << "더할 점수를 입력해라.\n";
  cin >> plus;

  add(num1, num2, plus);
  cout << plus << "점을 더했으므로 과목1은 " << num1 << "점이 되었습니다.\n";
  cout << plus << "점을 더했으므로 과목2은 " << num2 << "점이 되었습니다.\n";
}

int add(int& rX1, int& rX2, int a)
{
  rX1 += a;
  rX2 += a;
}

// int add(int* pX1, int* pX2, int a)
// {
//   *pX1 += a;
//   *pX2 += a;
// }