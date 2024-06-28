#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    cout<<N<<endl;
    int Note100 = N / 100;
    int Note50 = (N % 100) / 50;
    int Note20 = ((N % 100) % 50)/20;
    int Note10 = (((N % 100) % 50)%20)/10;
    int Note5 = ((((N % 100) % 50)%20)%10)/5;
    int Note2 = (((((N % 100) % 50)%20)%10)%5)/2;
    int Note1 = (((((N % 100) % 50)%20)%10)%5)%2;
    cout<<Note100<<" nota(s) de R$ 100,00"<<endl;
    cout<<Note50<<" nota(s) de R$ 50,00"<<endl;
    cout<<Note20<<" nota(s) de R$ 20,00"<<endl;
    cout<<Note10<<" nota(s) de R$ 10,00"<<endl;
    cout<<Note5<<" nota(s) de R$ 5,00"<<endl;
    cout<<Note2<<" nota(s) de R$ 2,00"<<endl;
    cout<<Note1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
