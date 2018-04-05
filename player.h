#include<iostream>
#include<string>
using namespace std;
class player
{
  private:
  string name;
  int avg;
  string team;
  public:
void in()
  {
    cout<<"player name is ";
    getline(cin,name);
    cout<<endl<<"player's average is ";
    cin>>avg;
    cin.ignore();
    cout<<endl<<"player's team is ";
    getline(cin,team);
    
  }
  void out()
  {
    cout<<"displaying details"<<endl<<endl;
cout<<"player's name is "<<name<<endl;
cout<<"player's average is "<<avg<<endl;
cout<<"player's team is "<<team<<endl;

  }
  
};