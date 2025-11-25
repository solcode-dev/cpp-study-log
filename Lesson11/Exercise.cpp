#include <iostream>
using namespace std;

struct Person {
  int age;
  double weight;
  double height;
};

void aging(Person *p);

int main() {
  Person person1;
  Person person2;

  // 문제 1
  // cout << "나이 입력: ";
  // cin >> person1.age;
  // cout << "몸무게 입력: ";
  // cin >> person1.weight;
  // cout << "키 입력: ";
  // cin >> person1.height;

  // cout << "나이 입력: ";
  // cin >> person2.age;
  // cout << "몸무게 입력: ";
  // cin >> person2.weight;
  // cout << "키 입력: ";
  // cin >> person2.height;

  // cout << "나이 " << person1.age << ", 몸무게 " << person1.weight << ", 키 "
  //      << person1.height << "입니다.\n";
  // cout << "나이 " << person2.age << ", 몸무게 " << person2.weight << ", 키 "
  //      << person2.height << "입니다.\n";

  // 문제 2
  cout << "나이 입력: ";
  cin >> person1.age;
  cout << "몸무게 입력: ";
  cin >> person1.weight;
  cout << "키 입력: ";
  cin >> person1.height;
  aging(&person1);
}

void aging(Person *p) {
  cout << "나이 " << p->age << ", 몸무게 " << p->weight << ", 키 " << p->height
       << "입니다.\n";
  cout << "1년이 지났습니다. \n";
  p->age += 1;
  cout << "나이 " << p->age << ", 몸무게 " << p->weight << ", 키 " << p->height
       << "입니다.\n";
}