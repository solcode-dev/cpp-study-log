#include <iostream>
using namespace std;

double avg(int t[]);

int main() {
  int test[5] = {60, 40, 38, 41, 55};
  double ans = avg(test);
  cout << "평균점수: " << ans << "\n";

  return 0;
}

double avg(int t[]) {
  double sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += t[i];
  }
  return sum / 5;
}