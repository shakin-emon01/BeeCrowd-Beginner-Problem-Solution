#include <iostream>
#include <iomanip>
#include <string.h>
 using namespace std;
int main() {
 char Name[50];
 double A, B;
 cin>>Name;
 cin>>A>>B;
 double total = (0.15 * B) + A;
 cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
