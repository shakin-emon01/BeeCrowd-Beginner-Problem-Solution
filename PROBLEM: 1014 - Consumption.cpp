#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int distance;
float fuel, average;
cin>>distance>>fuel;
average = distance / fuel;
cout<<fixed<<setprecision(3)<<average<<" km/l"<<endl;
    return 0;
}
