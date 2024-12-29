#include <iostream>
using namespace std;
int main() {
    int i, j, num, inp1, inp2, out;
    cin>>num;
    for(i=1; i<=num; i++)
    {
        cin>>inp1>>inp2;
        if(inp1 %2 ==1)
        {
            out=0;
            for(j=1; j<=inp2;j++)
           {
            out += inp1;
            inp1 +=2;
        }
        cout<<out<<endl;
    }
    else {
       inp1++; 
        out=0;
            for(j=1; j<=inp2;j++)
           {
            out += inp1;
            inp1 +=2;
        }
        cout<<out<<endl;
    }
}
}
