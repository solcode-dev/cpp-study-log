// 레퍼런스를 함수의 인수로 사용하기
#include <iostream>
using namespace std;

struct Car {
  int num;
  double gas;
};

void show(Car &c);

int main() {
  Car car1 = {0, 0.0};

  cout << "차량 번호 입력: ";
  cin >> car1.num;
  cout << "연료량 입력: ";
  cin >> car1.gas;

  show(car1);

  return 0;
}

void show(Car &c) {
  cout << "차량 번호는 " << c.num << ", 연료량은 " << c.gas << "입니다.\n";
}