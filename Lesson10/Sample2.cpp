// 변수의 기억 수명 이해하기
#include <iostream>
using namespace std;

void func();
int a = 0; // 전역변수

int main() {
  for (int i = 0; i < 5; i++) {
    func();
  }

  return 0;
}

void func() {
  // 지역변수
  int b = 0;

  // static 지역변수. 전역변수와 같은 기억수명을 가지게 되어, 프로그램이
  // 끝날 때까지 파괴되지 않음. = 정적 수명을 가진 지역변수
  static int c = 0;

  cout << "변수 a는 " << a << ", 변수 b는" << b << ", 변수 c는 " << c << "\n";

  a++;
  b++;
  c++;
}