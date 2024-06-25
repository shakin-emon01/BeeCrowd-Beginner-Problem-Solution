#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
    const double n=3.14159;
    double R, Output;
    cin>>R;
    Output = n * (R*R);
    cout<<"A="<<fixed<<setprecision(4)<<Output<<endl;
    return 0;
}
