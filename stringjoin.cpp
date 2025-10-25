// #include<iostream>
// using namespace std;
// int main(){
//     string s1,s2,result;
//     cout<<"Enter string 1: ";
//     getline(cin,s1);
//     cout<<"Enter string 2: ";
//     getline(cin,s2);
//      result = s1 + s2;
//      cout<<"Resultent string = "<<result;
//      return 0;
// }

#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char s1[50],s2[50];
    cout<<"Enter string 1: ";
    cin.getline(s1,50);
    cout<<"Enter string 2: ";
    cin.getline(s2,50);
    strcat(s1,s2);
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2;
    return 0;

}