//writing a program to find maximum of two numbers
//including library
#include<ostream>
using namespace std;
//defining maximum function
int max(int p,int q){
       if (p>q)
       {return p;}
       else if  (p==q)
      { cout<<"both numbers are equal"<<endl;}
        else (p<q);
        {return q;}
return 0;
}
//using void function
void maxR(int p,int q,int &r){
     cout<<max(p,q)<<endl;}
//defining the main function
  int main(){
      int p,q;{
      cout<<"the first number is";
      cin>>p;
      cout<<"the second number is";
      cin>>q;
      cout<<max(p,q)<<endl;}
//end the program
return 0; 
}
