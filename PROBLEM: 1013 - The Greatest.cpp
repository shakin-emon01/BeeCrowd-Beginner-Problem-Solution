#include <iostream>
using namespace std;
int main() {
int A, B, C;
cin>>A>>B>>C;
int MaiorAB = (A + B + abs (A - B)) / 2;
MaiorAB = (MaiorAB + C + abs (MaiorAB - C)) / 2;
cout<<MaiorAB<<" eh o maior"<<endl;
    return 0;
}
