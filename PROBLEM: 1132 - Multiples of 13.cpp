#include <iostream>
using namespace std;
int main()
{
  int x, y, a=0, i, Out;
  cin>>x>>y;
   if(x > y){
    Out = y;
    y = x;
    x = Out;
    }
  for(i=x; i<=y;i++)
  {
    if(i % 13!=0)
    a += i;
  }
  cout<<a<<endl;
    return 0;
}
