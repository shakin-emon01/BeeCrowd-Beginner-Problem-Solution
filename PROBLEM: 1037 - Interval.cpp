#include <iostream>
using namespace std;
int main(){
    double N;
    cin>>N;
    if(N<0 || N>100) cout<<"Fora de intervalo"<<endl;
    if(N>=0 && N<=25) cout<<"Intervalo [0,25]"<<endl;
    if(N>25 && N<=50)cout<<"Intervalo (25,50]"<<endl;
    if(N>50 && N<=75)cout<<"Intervalo (50,75]"<<endl;
    if(N>75 && N<=100)cout<<"Intervalo (75,100]"<<endl;
    return 0;
}
