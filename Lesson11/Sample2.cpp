// 구조체 멤버에 접근하기
#include <iostream>
using namespace std;

struct Car {
  int num;
  double gas;
};

int main() {
  Car car1;

  cout << "차량 번호: \n";
  cin >> car1.num;
  cout << "연료량: \n";
  cin >> car1.gas;

  cout << "차량번호는 " << car1.num << ", 연료량은 " << car1.gas << "입니다.\n";

  return 0;
}