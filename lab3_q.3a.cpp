//writing a program to find maximum of two numbers
//including library
#include<iostream>
using namespace std;
//defining the function
int maximum(int p,int q)
{
   if (p>q)
   {return p;}
    else if (p==q)
    {cout<<"both numbers are equal"<<endl;}
    
return 0;}

//define the main function
 int main(){
       int p,q;
       cout<<"the first number is";
       cin>>p;
       cout<<"the second number is";
       cin>>q;
       cout<<max(p,q)<<endl;
//end the program
return 0;
}
