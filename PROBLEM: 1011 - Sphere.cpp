#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
long int A;
const double pi = 3.14159;
cin>>A;
double Volume = (4.0/3) * pi* (A*A*A);
cout<<"VOLUME = "<<fixed<<setprecision(3)<<Volume<<endl;
    return 0;
}
