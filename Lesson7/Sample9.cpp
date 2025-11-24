#include <iostream>
using namespace std;

// max함수 정의
inline int max(int x, int y) { if (x>y) return x; else return y;}
int main()
{
  int num1, num2, ans;

  cout << "첫 번째 정수 입력: ";
  cin >> num1;

  cout << "두 번째 정수 입력: ";
  cin >> num2;

  ans = max(num1, num2);
  cout << "최댓값은 " << ans << "입니다.\n";
  return 0;
}