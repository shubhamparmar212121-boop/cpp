#include<iostream>
using namespace std;
int main(){
    string str = "shubham parmar";
    int count =0;
    char check='a';
     for(int i=0; i<str.size(); i++){
        if(str[i] == check){
           ++count;   
           
        }
     }
     cout<<"Number of"<< check<<"  "<<count;
     return 0;
     
}