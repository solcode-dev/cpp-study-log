// 파일 분할하기
#include "myfunc.h"
#include <iostream>
using namespace std;

int main() {
  int num1, num2, ans;

  cout << "첫번째 정수를 입력하세요.\n";
  cin >> num1;

  cout << "두번째 정수를 입력하세요.\n";
  cin >> num2;

  ans = max(num1, num2); // 다른 파일에 있는 함수를 호출

  cout << "최댓값은 " << ans << ".\n";

  return 0;
}