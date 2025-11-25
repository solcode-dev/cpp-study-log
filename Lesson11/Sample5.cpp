// 구조체를 가리키는 포인터를 함수의 인수로 사용하기
#include <iostream>
using namespace std;

struct Car {
  int num;
  double gas;
};

void show(Car *pC);

int main() {
  Car car1 = {0, 0.0};

  cout << "차량 번호 입력: ";
  cin >> car1.num;
  cout << "연료량 입력: ";
  cin >> car1.gas;

  show(&car1);

  return 0;
}

void show(Car *pC) {
  cout << "차량 번호는 " << pC->num << ", 연료량은 " << pC->gas << "입니다.\n";
}