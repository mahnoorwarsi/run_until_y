#include<iostream>
#include<string>
#include"player.h"
using namespace std;
main()
{
  char x;
  do
  {
    player p;
  p.in();
  p.out();
  cout<<"press y to continue entering other players' details:  "<<endl;
  cin>>x;
  cin.ignore();
}
while(x=='y');
getchar();
}