// 멤버에 대한 접근 제한
#include <iostream>
using namespace std;

class Car {
private:
  int num;
  double gas;

public:
  void show();
  void setNumGas(int n, double g);
};

// 클래스 멤버 함수의 정의
void Car::show() {
  cout << "차량 번호는 " << num << "이다.\n";
  cout << "연료량은 " << gas << "다.\n";
}

void Car::setNumGas(int n, double g) {
  if (g > 0 && g < 1000) {
    num = n;
    gas = g;
    cout << "차량번호를 " << num << "으로, 연료량을 " << gas
         << "로 바꾸었습니다.\n";
  } else {
    cout << g << "는 올바른 연료량이 아닙니다.\n";
    cout << "연료량을 바꿀 수 없습니다.\n";
  }
}

int main() {
  Car car1; // 지역변수
  // car1.num = 1234;
  // car1.gas = 20.5;

  car1.setNumGas(1234, 20.5);
  car1.show();

  cout << "잘못된 연료량을 저장해보겠습니다..\n";
  car1.setNumGas(1234, -10.0);
  car1.show();

  return 0;
}