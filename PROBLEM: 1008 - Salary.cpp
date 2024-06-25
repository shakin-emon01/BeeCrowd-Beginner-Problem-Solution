#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int A, B;
 double C, output;
    cin>>A>>B>>C;
output = B * C;
     cout<<"NUMBER = "<<A<<endl;
 cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<output<<endl;
    return 0;
}
