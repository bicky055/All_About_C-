#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

    //changing Case of a String  
int main()
{
	//1.method
	char A[]="bickyjha";
	char B[]="WELCOME";
	int i;
	for( i=0;A[i];i++)
	{
		A[i]=A[i]-32; //lower to upper case change
	}
	cout<<A<<endl;
	for(i=0;B[i];i++)
	{
		B[i]=B[i]+32;//upper to lower case change 
	}
	cout<<B<<endl;	   

	
	//2.method 
	string str1="bickykumarjha";
	
	for(i=0;i<str1.length();i++)
	{
		//lower to upper 
		if(str1[i]>='a' && str1[i]<='z')
		  str1[i]=str1[i]-32;
	}
	 cout<<str1<<endl;
	
	string str2="NINCOMPOO";
	
	for(i=0;i<str2.length();i++)
	{
		//upper to lower case
		if(str2[i]>='A' && str2[i]<='Z')
		   str2[i]+=32;
	}
	cout<<str2<<endl;
	
	//3.Method
	
	string s1="thetajmhal";
    
    //direct function to convert lower to upper
    
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    
    cout<<s1<<endl;
    
    string s="BICKY";
    
    //direct function to convert upper to lower 
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    cout<<s<<endl;
    
    
	
	
	
	
		return 0;
}
