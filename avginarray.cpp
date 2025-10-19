#include<iostream>
using namespace std;
int main(){
    int n,i;
    float sum =0, avg;
    cout<<"enter number of element : ";
    cin>>n;
    int arr[n];
    cout<<"enter element: ";
    for(i=0; i<n; i++) 
    {
        cin>>arr[i];
        sum +=arr[i];
    }
    avg = sum/n;
    cout<<"sum = "<<sum;
    cout<<"avg = "<<avg;
    
}