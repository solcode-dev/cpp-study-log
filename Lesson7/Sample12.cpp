#include <iostream>
using namespace std;

//max함수 선언
int max(int x, int y);
double max(double x, double y);

int main()
{
  int a, b;
  double da, db;

  cout << "정수 2개 입력하세요\n";
  cin >> a >> b;
  cout << "소수 2개 입력하세요\n";
  cin >> da >> db;

  int ans1 = max(a,b);
  double ans2 = max(da, db);

  cout << "입력받은 정수의 최대값은 " << ans1 << "입니다 .\n";
  cout << "입력받은 소수의 최대값은 " << ans2 << "입니다 .\n";

  return 0;
}

//max(int형) 함수 정의
int max(int x, int y)
{
  if(x>y)
    return x;
  else
   return y;
}

//max(double형) 함수 정의
double max(double x, double y)
{
  if(x > y)
    return x;
  else
   return y;
}