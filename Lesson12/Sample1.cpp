// 클래스 사용하기
#include <iostream>
using namespace std;

class Car {
public:
  int num;
  double gas;
  void show();
};

// 클래스 멤버 함수의 정의
void Car::show() {
  cout << "차량 번호는 " << num << "이다.\n";
  cout << "연료량은 " << gas << "다.\n";
}

int main() {
  Car car1; // 지역변수
  car1.num = 1234;
  car1.gas = 20.5;

  car1.show();

  Car *pCar;
  pCar = new Car; // 동적으로 객체 생성하고 포인터에 그 주소를 대입한다
  pCar->num = 1234;
  pCar->gas = 20.5;

  delete pCar; // 객체 소멸

  return 0;
}