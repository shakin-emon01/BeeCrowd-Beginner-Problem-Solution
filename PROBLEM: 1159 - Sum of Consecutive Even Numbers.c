#include<iostream>
using namespace std;
int main(){
    int X;
  while (true) {
        cin >> X;
        if (X == 0) {
            break;
        }
        if (X%2==0){
        X = X + (X+2) + (X+4) + (X+6) + (X+8) ;
        }
       else{
           X= X+1;
          X = X + (X+2) + (X+4) + (X+6) + (X+8) ;
       } 
       cout<<X<<endl;;
    }
  return 0;  
}
