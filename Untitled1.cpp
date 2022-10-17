#include<iostream>
using namespace std;
class shape
{
  protected:
      float width;
      float height;
  public:
    void setdata(float a , float b)
    {
        width = a;
        height= b;
    }
};
class Triangle : public shape
{
public:
float area()
    {
     return(width*height/2);
    }
};
class rect : public shape
{
public:
    float area()
    {
        return (width* height);
    }
};

int main()
{
    rect r;
    Triangle t;
    r.setdata(3,7);
    t.setdata(3,8);
    cout<<"rectangle area"<<r.area()<<endl;
    cout<<"Triangle area"<<t.area()<<endl;
    return 0;
}
