// 구조체 변수에 값 대입하기
#include <iostream>
using namespace std;

struct Car {
  int num;
  double gas;
};

int main() {
  Car car1 = {1234, 25.5};
  Car car2 = {6645, 52.2};

  cout << "car1의 차량 번호는 " << car1.num << ", 연료량은 " << car1.gas
       << "입니다.\n";
  cout << "car2의 차량 번호는 " << car2.num << ", 연료량은 " << car2.gas
       << "입니다.\n";

  car2 = car1; // 구조체끼리 대입한다
  cout << "car1을 car2에 대입했다.\n";
  cout << "car2의 차량 번호는 " << car2.num << "연료량은 " << car2.gas
       << "이다.\n";

  return 0;
}