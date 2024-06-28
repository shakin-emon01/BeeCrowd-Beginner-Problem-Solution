#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;
int main(){
    double A, B, C;
    cin>>A>>B>>C;
    double Root = (B*B)- 4*A*C;
    if(Root>0 && A!=0)
    {
       double R1 = (- B + sqrt (Root))/(2*A);
        double R2 = (- B - sqrt (Root))/(2*A);
         cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
    else
    cout<<"Impossivel calcular"<<endl;
    
    
    
    return 0;
}
