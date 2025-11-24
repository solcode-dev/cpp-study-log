#include <iostream>
using namespace std;

template <class T>
T squaret(T x)
{
  return x * x;
}

inline int square(int x)
{
  return x * x;
}

inline double square(double x)
{
  return x * x;
}

int main()
{
  int num;
  cout << "정수를 입력하세요.\n";
  cin >> num;
  cout << num << "의 제곱은 " << squaret(num) << "입니다.\n";

  double dnum;
  cout << "소수를 입력하세요.\n";
  cin >> dnum;
  cout << dnum << "의 제곱은 " << squaret(dnum) << "입니다.\n";

  return 0;
}