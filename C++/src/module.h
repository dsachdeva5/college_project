#include<iostream>
#include<string>
using namespace std;
class Module{
  public:
  int moduleNo;
  string moduleName;
  int duration;
  int fees;
  string tentativeStartDate;
  void insert();
  void display();
  void update();
};
void input1(int);