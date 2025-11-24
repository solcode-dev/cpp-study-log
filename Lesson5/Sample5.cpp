#include <iostream>
using namespace std;

int main()
{
  int res;

  cout << "정수를 입력하세요 .\n";
  cin >> res;

  switch(res){
    case 1:
      cout << "1이 입력됨\n";
      break;
    case 2:
      cout << "2가 입력됨\n";
      break;
    default:
      cout << "1 또는 2를 입력하세요.\n";
      break;
  }

  return 0;
}