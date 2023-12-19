// Simple Calculator

#include<iostream>
using namespace std;

int main(){
	
	char op;
	float num1,num2;
	
	cout<<"Enter operator: +,-,*,/:";
	cin>>op;
	
	cout<<"\n Enter two operands:";
	cin>>num1>>num2;
	
	switch(op){
		
		case'+':
			cout<<"\nAddition of numbers is:"<<" "<<num1+num2;
			break;
			
		case'-':
			cout<<"\nDivision of numbers is:"<<" "<<num1-num2;
			break;
			
		case'*':
			cout<<"\nMultiplication of numbers is:"<<" "<<num1*num2;
			break;
			
		case'/':
			if(num2!=0){
			cout<<"\nDivision of numbers is:"<<" "<<num1/num2;
			}
			else{
				cout<<"\nError in division";
			}
			break;
			
		default:
			//IF operator is other than =,-,*,/ , error message is shown and if num2 is zero in case of '/'
			cout<<"\n Error! operator is not correct";
			break;
				}
				
	return 0;
}
