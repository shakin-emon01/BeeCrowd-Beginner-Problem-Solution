#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int Code1, Code2, unit1, unit2;
    double price1, price2;
    cin>>Code1>>unit1>>price1;
    cin>>Code2>>unit2>>price2;
    double Value = (unit1 * price1) + (unit2 * price2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<Value<<endl;
    return 0;
}
