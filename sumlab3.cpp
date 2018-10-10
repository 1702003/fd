#include<iostream>
using namespace std;
class Summer
{
public:
  Summer(double a,double b)
  {
    number1=a;
    number2=b;
    sum=0;
  }
  double set_sum()
  {
    sum=number1+number2;
  }
  double get_sum()
  {
    return sum;
  }
private:
  double number1;
  double number2;
  double sum;
};
int main()
{
  double x;
  double y;
  cout<<"enter 1st integer : ";
  cin>>x;
  cout<<"enter 2nd integer : ";
  cin>>y;
  Summer summer1(x,y);
  summer1.set_sum();
  cout<<summer1.get_sum()<<endl;
  return 0;
}
