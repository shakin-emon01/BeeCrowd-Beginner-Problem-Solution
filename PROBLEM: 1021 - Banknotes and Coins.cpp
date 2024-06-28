#include <iostream>
using namespace std;
int main()
{
    double A,D,E;
   cin>>A;
    int N,a,b,c,d,e,f,g,h,i,j,k,l,B,m,n,o,p,q,r,s,t,u;
    N=A;
    a=N/100;
    b=N%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;
    E=A*100;
    B=(int) E;
    m=B%100;
    n=m/50;
    o=m%50;
    p=o/25;
    q=o%25;
    r=q/10;
    s=q%10;
    t=s/5;
    u=s%5;
    cout<< "NOTAS:"<<endl;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    cout<<c<<" nota(s) de R$ 50.00"<<endl;
   cout<<e<<" nota(s) de R$ 20.00"<<endl;
    cout<<g<<" nota(s) de R$ 10.00"<<endl;
    cout<<i<<" nota(s) de R$ 5.00"<<endl;
    cout<<k<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:\n";
   cout<<l<<" moeda(s) de R$ 1.00"<<endl;
    cout<<n<<" moeda(s) de R$ 0.50"<<endl;
    cout<<p<<" moeda(s) de R$ 0.25"<<endl;
    cout<<r<<" moeda(s) de R$ 0.10"<<endl;
    cout<<t<<" moeda(s) de R$ 0.05"<<endl;
    cout<<u<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
