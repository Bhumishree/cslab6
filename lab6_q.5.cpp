//writing a program to define different functions
//including library
#include <iostream>
using namespace std;

	//defining variables for different functions
	
	int sum(int a, int b )
	{
		int sum = a + b ;
		return sum;
	}

	int max(int a,int b)
	{
		if (a>b){
			int maximum = a;
			return maximum; 
			}
		else{
			int maximum = b;
			return maximum; 
			}
	}
	
	int min(int a , int b)
	{
		if (a<b){
			int minimum = a;
			return minimum;
				}
		else{ 
			int minimum = b;
			return minimum;			
			}
	}

//asking the user for inputs
		
	int main (){
			int a , b , c ,options;
                                        cout<<"the first number is:"<<endl;
					cin>>a;
					cout<<"the second number is:"<<endl;
					cin>>b;
					cout<<" Enter the number of the operation want to perform"<<endl;				
					cout<<" 1.sum the two numbers "<<endl;
					cout<<" 2.maximum of the two "<<endl;
					cout<<" 3.minimum of the two "<<endl;
					cin>>options;
//applying conditions
			if(options==1){int a , b , c , options;
					c = sum(a,b);
					cout<<"The sum of the two number is "<<c<<endl;
					}
			else if (options==2){int a , b , c , options;
					c = max(a,b);
					cout<<"The maximum of the two number is "<<c<<endl;
					}
			else if(options==3){int a , b , c , options;
					c= min(a,b);
					cout<<"The minimum of the two number is "<<c<<endl;}
			else{
					cout<<" Invalid !!!"<<endl;
				}

//end the program						
	return 9;
}
