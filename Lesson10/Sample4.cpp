#include <iostream>
using namespace std;

int main() {
  int num;
  int *pT;

  cout << "몇 명의 시험 점수를 입력하시겠어요?\n";
  cin >> num;
  pT = new int[num]; // 입력받은 수만큼 배열 요소 확보

  cout << num << "명 분의 점수를 입력하세요.\n";
  for (int i = 0; i < num; i++) {
    cin >> pT[i]; // 포인터 사용하여 점수를 저장한다
  }

  for (int j = 0; j < num; j++) {
    cout << j + 1 << "번째 사람의 점수는 " << pT[j] << "입니다.\n";
  }

  delete[] pT;

  return 0;
}