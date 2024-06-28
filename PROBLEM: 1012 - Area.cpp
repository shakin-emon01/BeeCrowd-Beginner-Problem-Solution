#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
double A, B, C;
const double pi = 3.14159;
cin>>A>>B>>C;
double triangle = 0.5 * A * C;
double circle = pi * C * C;
double trap = 0.50 * ((A+B)*C);
double quad = B* B;
double rectangle = A * B;
cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle<<endl;
cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trap<<endl;
cout<<"QUADRADO: "<<fixed<<setprecision(3)<<quad<<endl;
cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle<<endl;
    return 0;
}
