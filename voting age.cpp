#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your for age eligiblity of vote"<<"\n";
	cin>>age;
	
	if(age>17)
	{
		cout<<"you are eligible for vote"<<"\n";
	}
	
	else
	{
		cout<<"your age is not match with the requirement for vote(so you are not eligible for vote)"<<"\n";
	}
	return 0;
}
