#include <iostream>
using namespace std;

int main()
{
  // 1번
  // int num;

  // cout << "정수를 입력하시오.\n";
  // cin >> num;
  
  // if(num % 2 == 0)
  // {
  //   cout << num << " 은 짝수입니다.\n";
  // }
  // else {
  //   cout << num << " 은 홀수입니다.\n";  
  // }

  // return 0;

  // 2번
  // int num1, num2;
  // cout << "정수 2개를 입력하시오.\n";
  // cin >> num1 >> num2;

  // if(num1 == num2)
  // {
  //    cout << "두 수는 같다.\n";
  // } else {
  //    cout << num1 << "보다" << num2 << "(이)가 큽니다.\n";
  // }

  // 3번
  int score;
  cout << "1~5까지 성적을 입력하세요. \n";
  cin >> score;

  switch(score){
    case 1:
      cout << "성적은 " << score << "입니다. 노력합시다\n";
      break;
    case 2:
      cout << "성적은 " << score << "입니다. 조금 더 노력합시다\n";
      break;
    case 3:
      cout << "성적은 " << score << "입니다. 잘 했어요\n";
      break;
    case 4:
      cout << "성적은 " << score << "입니다. 매우 잘 했어요\n";
      break;
    case 5:
      cout << "성적은 " << score << "입니다. 최고예요\n";
      break;
    default:
      cout << "1~5까지의 성적을 입력해주세요\n";
      break;
  }
  return 0;

} 