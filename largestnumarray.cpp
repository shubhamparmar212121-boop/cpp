#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number of element: ";
    cin>>n;
    int arr[n];
    cout<<"enter element: ";
    for(i =0; i<n; i++){
        cin>>arr[i];

    }
    for(i =0; i<n; i++){
        if(arr[0]< arr[i])
        arr[0]=arr[i];
    }
    cout<<endl<<"Largest element  is = "<<arr[0];
    return 0;
}