//writing a function for sum of odd and even
//including library
#include<iostream>
using namespace std;

//function to find the sum of even numbers between the given numbers
int sumenN(int a , int b){
	int sum=0, i;
	for(i=a ; i<=b ; i++){
		if(i % 2 == 0){
		sum = sum + i; }}
	return sum;}

//function to find the sum of odd numbers between the given numbers
int sumodN(int a , int b){
	int sum=0, i;
	for(i=a ; i<=b ; i++){
		if(i % 2 != 0){
		sum = sum + i; }}
	return sum;}

//function to find the sum of square of even numbers between the given numbers
int sumsqodN(int a , int b){
	int sum=0, i = a;
	while(i<b){
		if(i % 2 != 0){
		sum = sum + (i*i); }
		i++;}
	return sum;}

//function to find the sum of square of even numbers between the given numbers
int sumsqenN(int a , int b){
	int sum=0, i = a;
	while(i<=b){
		if(i % 2 == 0){
		sum = sum + (i*i); }
		i++;}
	return sum;}

// the main function declaring various variables
int main(){
	int a , b , sumen , sumod , sumsqod , sumsqen;
		
		// asking 1st number

		cout<<"the first number is : ";		
		cin>>a;

		//asking 2nd number

		cout<<"the second number is : ";
		cin>>b;

	sumen = sumenN(a,b);
	sumod = sumodN(a,b);
	sumsqod = sumsqodN(a,b);
	sumsqen = sumsqenN(a,b);

		//viewing output

		cout<<"The sum of even numbers between the two number is "<<sumen<<endl;
		cout<<"The sum of odd numbers between the two number is "<<sumod<<endl;
		cout<<"The sum of square of even numbers between the two number is "<<sumsqen<<endl;
		cout<<"The sum of square of odd numbers between the two number is "<<sumsqod<<endl;
//end the program
return 9;
}
