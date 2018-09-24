//writing SUM function by value
#include<iostream>
using namespace std;
//declaring variables for function
int SUM(int a,int b)
    {int SUM=a+b;
     return SUM;}
int main(){
//declaring the variables
        int a,b;
        cout<<"the first number is";
        cin>>a;
        cout<<"the second number is";
        cin>>b;
        cout<<SUM(a,b)<<endl;

//end the program
return 0;
}
