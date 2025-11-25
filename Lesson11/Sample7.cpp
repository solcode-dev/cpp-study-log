// 공용체 사용하기
#include <iostream>
using namespace std;

union Year {
  int ad;
  int dangi;
};

int main() {
  Year myyear;

  cout << "서기 입력: ";
  cin >> myyear.ad;

  cout << "서기 " << myyear.ad << "년입니다.\n";
  cout << "단기도 " << myyear.dangi << "년입니다.\n";

  cout << "단기 입력: ";
  cin >> myyear.dangi;

  cout << "단기 " << myyear.dangi << "년입니다.\n";
  cout << "서기도 " << myyear.ad << "년입니다.\n";

  return 0;
}