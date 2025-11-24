#include <iostream>
using namespace std;

int main()
{
  // 문제 1.
  // cout << "1부터 10까지의 짝수를 출력합니다.\n";
  // for(int i = 1; i < 11; i++)
  // {
  //   if(i % 2 == 0)
  //   {
  //     cout << i << "\n";
  //   }
  // }

  // 문제 2.
  // int grade = 0;
  // int sum = 0;
  // cout << "시험 점수를 입력하세요 (0으로 종료) \n";
  // do
  // {
  //   sum += grade;
  //   cin >> grade;
  // } while(grade);

  // cout << "시험 점수의 합계는 " << sum << "점 입니다.\n"; 

  // 문제 3.
  for(int i = 1; i < 6; i++)
  {
    for(int j = 1; j < 6; j++)
    {
      cout << '*';
      if(i == j) break;
    }
    cout << '\n';
  }


  return 0;
}