#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h, m, s,a, err;
    err=a=0;
    while(err==0)
  {
      cout<<"       PLEASE SET the Time \n";
    cout<<"Enter the Hour : \n";
    cin>>h;
    cout<<"Enter the Minutes : \n";
    cin>>m;
    cout<<"Enter the Seconds : \n";
    cin>>s;
    if(h<24 && m<60 && s<60)
    err++;
    else
    system("cls");
  }
  while(a==0)
  {
      system("cls");
      cout<<"  |        TIME   |\n";
      cout<<"          "<<h <<":"<<m<<":"<<s<<"   "<<endl;



      Sleep(1000);
      s++;
      if(s>59)
      {
          s=0;
          m++;
      }
      if (m>59)
      {
          m=0;
          h++;
      }
      if(h>24)
      {
          h=0;
      }
  }
  return 0;
}