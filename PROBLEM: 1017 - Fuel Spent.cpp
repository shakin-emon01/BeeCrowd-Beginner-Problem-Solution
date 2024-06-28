#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int Time, Speed;
    cin>>Time>>Speed;
    double Fuel = (Time * Speed) / 12.0;
    cout<<fixed<<setprecision(3)<<Fuel<<endl;
    return 0;
}
