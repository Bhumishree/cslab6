//writing SUM function by reference
#include<iostream>
using namespace std;

//declaring variables for the function
    int sum(int a, int b)
       {int sum=a+b;
       return sum;}
//using void function
    void sumR(int a,int b,int &c)
    {c=a+b;}
//asking the user for input
    int main(){
        int a,b;
        cout<<"the first number is";
        cin>>a;
        cout<<"the second number is";
        cin>>b;
//adding the numbers
        cout<<sum(a,b);
        sum(a,b);
        cout<< sum <<endl;
//end the program
return 0;
}
