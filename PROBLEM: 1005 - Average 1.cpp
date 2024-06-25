#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double A, B, Avg;
    cin>>A>>B;
    Avg = (3.5*A + 7.5*B)/11;
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<Avg<<endl;
    return 0;
}
