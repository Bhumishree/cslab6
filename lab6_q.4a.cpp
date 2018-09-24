//writing a program to find minimum between two numbers
//include library
#include<iostream>
using namespace std;
int min(int a,int b){
    if(a<b)
    return a;
    else if (a==b)
    cout<<"both numbers are equal"<<endl;
    else(a>b);
    return b;}
    
//defining main function
  int main(){
     int a,b;{
     cout<<"the first number is";
     cin>>a;
     cout<<"the second number is";
     cin>>b;
     cout<<min(a,b)<<endl;
      }
//end the program
return 0;
}
