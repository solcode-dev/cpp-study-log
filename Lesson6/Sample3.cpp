#include <iostream>
using namespace std;


int main()
{
  int num;
  cout << "몇 개의 *를 출력할래요? \n";
  cin >> num;

  for(int i = 1; i <= num; i++)
  {
    cout << '*';
  }

  cout << '\n';
  return 0;
} 
