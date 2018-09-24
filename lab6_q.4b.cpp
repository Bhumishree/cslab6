//writing a program to find the miinimum between two numbers
//include library
#include<iostream>
using namespace std;
//defining the min function
int min(int a,int b){
     if(a<b)
     return a;
     else if (a==b)
     cout<<"both the numbers are equal"<<endl;
     else(a>b);
     return b;
//using void function
void min(int a,int b,int &c);

//defining the main function
  {
    int a,b;
    cout<<"the first number is";
    cin>>a;
    cout<<"the second number is";
    cin>>b;
    cout<<min( a, b)<<endl;
    }
//end the prgram
return 0;}
