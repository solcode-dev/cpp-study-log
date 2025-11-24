// 배열 요소 정렬하기
#include <iostream>
using namespace std;

int main() {
  const int num = 5;
  int test[num];

  cout << num << "명의 점수를 입력하세요.\n";
  for (int i = 0; i < num; i++) {
    cin >> test[i];
  }

  // 배열을 정렬한다
  for (int s = 0; s < num - 1; s++) {
    for (int t = s + 1; t < num; t++) {
      if (test[t] >
          test[s]) { // 각 배열의 요소를 배열의 첫번째 요소(test[0])와 비교한다.
        int tmp = test[t];
        test[t] = test[s];
        test[s] = tmp;
      }
    }
  }

  for (int j = 0; j < num; j++) {
    cout << j + 1 << "번째 사람의 점수는 " << test[j] << "입니다.\n";
  }
  return 0;
}