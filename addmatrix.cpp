#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    cout<<"enter number of row";
    cin>>r;
    cout<<"enter number of col ";
    cin>>c;


    cout<<endl<<"Enter element of 1st matrix : "<<endl;
    for(i =0; i<r; ++i)
        for(j=0; j<c; ++j){
            cout<<"Enter element a "<<i+1<<j+1<<" : ";
        cin>>a[i][j];
            
    }
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j){
            cout<<"Enter element of b "<<i+1<<j+1<< " : ";
            cin>>b[i][j];

        
    }
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j){
            sum[i][j]=a[i][j]+b[i][j];
        }
    

    cout<<endl<<"sum of two matrix : "<<endl;
    for(i=0; i<r; ++i)
        for(j=0;j<c; ++j){
            cout<<sum[i][j]<<" ";
            if(j==c -1)
            cout<<endl;
        
    }
    return 0;
}