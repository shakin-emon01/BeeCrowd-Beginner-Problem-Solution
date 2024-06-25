#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 double A, B, C, AVG;
cin>>A>>B>>C;
AVG = (2*A + 3*B + 5*C)/10;
cout<<"MEDIA = "<<fixed<<setprecision(1)<<AVG<<endl;
    return 0;
}
