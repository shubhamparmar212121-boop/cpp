#include<iostream>
using namespace std;
int main(){
    int exp;
    float base,result =1;
    cout<<"Enter base and exponent respectively: ";
    cin>>base>>exp;
    cout<<base<<" ^ "<<exp<<" = ";
    while(exp != 0){
        result *=base;
        --exp;
    }
    cout<<result;
    return 0;
}