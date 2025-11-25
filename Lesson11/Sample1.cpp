// 열거형 변수 사용하기
#include <iostream>
using namespace std;

enum Week { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
  Week w; // Week형 변수 선언
  w = SUN;

  switch (w) {
  case SUN:
    cout << "일요일.\n";
    break;
  case MON:
    cout << "월요일.\n";
    break;
  case TUE:
    cout << "화요일.\n";
    break;
  case WED:
    cout << "수요일.\n";
    break;
  case THU:
    cout << "목요일.\n";
    break;
  case FRI:
    cout << "금요일.\n";
    break;
  case SAT:
    cout << "토요일.\n";
    break;
  default:
    cout << "무슨 요일인지 알 수 없음.\n";
    break;
  }
  return 0;
}