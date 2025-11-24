#include <iostream>
using namespace std;

int main()
{
  double pi;
  
  cout << "원주율의 값은 얼마입니까? \n";
  cin >> pi;
  cout << "원주율의 값은 " << pi << "입니다. \n";

  char alpha;
  cout << "알파벳 첫 글자는 무엇입니까? \n";
  cin >> alpha;
  cout << "첫 글자는 " << alpha << "입니다. \n";

  double height, weight;
  cout << "키와 몸무게는 얼마입니까? \n";
  cin >> height >> weight;
  cout << "키는 " << height << "cm 입니다. \n";
  cout << "몸무게는 " << weight << "kg 입니다. \n";
  return 0; 
}