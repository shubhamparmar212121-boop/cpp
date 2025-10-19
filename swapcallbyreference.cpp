#include<iostream>
using namespace std;

int main(){
    int data[5];
    cout<<"Enter element ";
    for(int i=0; i<5; i++){
        cin>>data[i];
    }
    cout<<"your enter data : ";
    for(int i=0; i<5; i++){
    cout<<endl<<*(data+i);
    break;
}

    return 0;
}
 