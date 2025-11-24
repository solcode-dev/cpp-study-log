#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int& rA = a;

  cout << "변수 a의 값: " << a <<"\n";
  cout << "레퍼런스 rA의 값: " << rA <<"\n";

  rA = 50;
  cout << "rA에 50을 대입했다.\n";
  cout << "레퍼런스 rA의 값은 " << rA << "로 변경되었다..\n";
  cout << "변수 a의 값도: " << a << "로 변경되었다..\n";
  cout << "변수 a의 주소는: " << &a << "이다..\n";
  cout << "레퍼런스 rA의 주소도 " << &rA <<" 이다..\n";
}
