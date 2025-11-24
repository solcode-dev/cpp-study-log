#include <cstring>
#include <iostream>
using namespace std;

int max(int x[]);
int length(char *str);
int count(char str[], char ch);

int main() {
  // 1번 문제
  // int score[5];
  // cin >> score[0] >> score[1] >> score[2] >> score[3] >> score[4];

  // int result = max(score);
  // cout << "가장 높은 점수는 " << result;

  // 2번 문제
  // cout << "문자열 입력하시오: ";
  // char str[100];
  // cin >> str;
  // cout << "문자열은 " << str;
  // int result2 = length(str);
  // cout << "문자열의 길이는 " << result2;

  // 3번 문제
  cout << "문자열 입력하시오: ";
  char str[100];
  cin >> str;
  cout << "검색할 문자 입력하시오: ";
  char target;
  cin >> target;

  int cnt = count(str, target);
  cout << str << "안에" << target << "은 총 " << cnt << "개 있다.\n";
}

int count(char str[], char ch) {
  int cnt = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch)
      cnt++;
  }
  return cnt;
}

int length(char *str) {
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int max(int x[]) {
  int max = x[0];
  for (int i = 1; i < 5; i++) {
    if (x[i] > max) {
      max = x[i];
    }
  }
  return max;
}