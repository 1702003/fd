#include<iostream>
using namespace std;
class Area
{
public:
  double area_of_rectangle(double l,double w)
  {
    length=l;
    width=w;
    double area=l*w;
    return area;
  }
private:
  double length;
  double width;
};
int main()
{
  double length,width;
  cout<<"enter the length of the rectangle :";
  cin>>length;
  cout<<"enter the width of the rectangle :";
  cin>>width;
  Area rectangle;
  cout<<"area of the rectangle is : "<<rectangle.area_of_rectangle(length,width)<<endl;
  return 0;
}
