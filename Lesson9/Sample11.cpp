#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[100];

  cout << "문자열을 입력하세요. \n";
  cin >> str;
  cout << "문자열의 길이는 " << strlen(str) << "\n";

  return 0;
}
