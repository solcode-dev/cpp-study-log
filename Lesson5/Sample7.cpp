#include <iostream>
using namespace std;

int main()
{
  int res;
  char ans;

  cout << "몇 번째 코스를 선택할래요? \n";
  cout << "정수를 입력하세요. \n";

  cin >> res;

  ans = (res==1) ? 'A' : 'B';
  cout << "당신이 선택한 코스는 " << ans << "코스입니다.\n";
  
  return 0;
}
