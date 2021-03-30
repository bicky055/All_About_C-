#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//find the length of String 
	
	//1.method
	string str="bickyjha";
	int i;
	for( i=0;str[i];i++)
	{
		//empty bcz i is given length
	}
	cout<<i<<endl;
	//2.method 
	cout<<str.size()<<endl;
	
	//3.method
	cout<<str.length()<<endl;
	
	//4.method
	cout<<strlen(str.c_str())<<endl;
	
	//5.method
	while(str[i])
	{
		i++;
	}
	cout<<i<<endl;
		   
	return 0;
}
