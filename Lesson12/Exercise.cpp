#include <iostream>
using namespace std;

class Point {
private:
  int x;
  int y;

public:
  int getX() { return x; }
  int getY() { return y; }
  void setX(int num);
  void setY(int num);
};

void Point::setX(int num) {
  if (0 <= num && num <= 10) {
    x = num;
  } else {
    x = 0;
    cout << "x의 범위는 0~10 입니다.\n";
  }
}
void Point::setY(int num) {
  if (0 <= num && num <= 10) {
    y = num;
  } else {
    y = 0;
    cout << "y의 범위는 0~10 입니다.\n";
  }
}

class X {
private:
  int x;

public:
  void set();
  int get() { return x; }
};

void X::set() {
  int num;
  cout << "X좌표를 입력하세요: ";
  cin >> num;
  x = num;
}

class Y {
private:
  int y;

public:
  void set();
  int get() { return y; }
};

void Y::set() {
  int num;
  cout << "Y좌표를 입력하세요: ";
  cin >> num;
  y = num;
}

int main() {
  // Point p;
  // p.setX(-1);
  // int x = p.getX();
  // cout << "x: " << x << "\n";
  // p.setX(10);
  // x = p.getX();
  // cout << "x: " << x << "\n";

  // p.setY(-5);
  // int y = p.getY();
  // cout << "y: " << y << "\n";
  // p.setY(10);
  // y = p.getY();
  // cout << "y: " << y << "\n";

  X x;
  Y y;
  x.set();
  y.set();
  cout << "좌표는 (" << x.get() << "," << y.get() << ") 입니다.\n";
}