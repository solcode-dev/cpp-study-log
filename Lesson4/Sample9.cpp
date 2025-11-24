#include <iostream>
using namespace std;

int main()
{
  double dnum = 160.5;
  int inum;
  
  cout << "키는 " << dnum << "cm. \n";
  cout << "int형 변수에 대입합니다.\n";

  inum = (int)dnum;  // 더 작은 형에 대입
  cout << "키는 " << inum << "cm. \n";

  return 0;
}
  