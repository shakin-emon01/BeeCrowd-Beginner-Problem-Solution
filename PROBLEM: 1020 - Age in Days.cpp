#include <iostream>
 using namespace std;
int main() {
 int N;
 cin>>N;
 int year = N / 365;
 int months = (N % 365)/30;
 int days = (N % 365)%30;
 cout<<year<<" ano(s)"<<endl;
 cout<<months<<" mes(es)"<<endl;
 cout<<days<<" dia(s)"<<endl;
    return 0;
}
