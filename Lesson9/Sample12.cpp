#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str0[20];
  char str1[10];
  char str2[10];

  strcpy(str1, "hello");
  strcpy(str2, "goodbye");
  strcpy(str0, "str1");
  strcat(str0, "str2");

  cout << "배열 str1은 " << str1 << ".\n";
  cout << "배열 str2는 " << str2 << ".\n";
  cout << "연결하면 " << str0 << ".\n";

  return 0;
}