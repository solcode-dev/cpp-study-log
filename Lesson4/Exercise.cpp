#include <iostream>
using namespace std;

int main()
{

  // double num1, num2;
  // cout << "삼각형의 높이를 입력하세요. \n";
  // cin >> num1;
  // cout << "삼각형의 밑변을 입력하세요. \n";
  // cin >> num2;
  // cout << "삼각형의 넓이는 " << (num1 * num2)/2 << " 입니다. \n";

  int score1, score2, score3, score4, score5;
  double sum;

  cout << "과목 1의 점수를 입력하세요. \n";
  cin >> score1;

  cout << "과목 2의 점수를 입력하세요. \n";
  cin >> score2;

  cout << "과목 3의 점수를 입력하세요. \n";
  cin >> score3;

  cout << "과목 4의 점수를 입력하세요. \n";
  cin >> score4;
  
  cout << "과목 5의 점수를 입력하세요. \n";
  cin >> score5;

  sum = score1 + score2 + score3 + score4 + score5;

  cout << "5과목의 합계는 " << sum << " 입니다.\n";
  cout << "5과목의 평균은 " << sum/5 << " 입니다.\n";

  return 0;
}
