//Write a program, which accepts annual basic salary of an employee and calculates and displays the 
//Income tax as per the following rules. 
//Basic: < 1, 50,000 Tax = 0
// 1, 50,000 to 3,00,000 Tax = 20% 
// > 3,00,000 Tax = 30% 

#include<iostream>
using namespace std;
int main()
{
	int i;
	do
	{
	int basic_salary,tax=0;
	cout<<"enter a basic salary"<<endl;
	cin>>basic_salary;
	if (basic_salary <= 150000)
		tax=0;
	else if (basic_salary>=150000 && basic_salary<=300000)
	{
	cout<<"you take 20% tax on your salary"<<endl;
	tax=0.2*basic_salary;
	}
	
	else if (basic_salary>300000){
	
	tax=0.3*basic_salary;
	cout<<"you take 30% tax on your salary"<<endl;
	}
	else
	cout<<"invalid income"<<endl;
	cout<<"income tax= "<<basic_salary<<endl<<endl;
	cout <<"do u continue 1 and quit to 0";
	cin>>i;
	}while(i==1 ||i!=0);
	
		
}
