#include<iostream>
#include<cmath>
using namespace std;
float calculate(float data[]);
int main(){
    int i;
    float data[10];

    cout<<"Enter 10 element : ";
    for(i =0; i<10; i++){
        cin>>data[i];

    }
    cout<<endl<<"std = "<<calculate(data);
}
float calculate(float data[]){
    float sum=0.0, mean, std =0.0;
    int i;
    for(i=0; i<10; i++){
        sum += data[i];
    }
    mean = sum /10;
    for(i =0; i<10; i++){
        std += pow(data[i]-mean,2);
    }
    return sqrt(std /10);
}