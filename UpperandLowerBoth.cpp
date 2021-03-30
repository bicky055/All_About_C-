#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

    //when both upper and lower case present  
int main()
{
	//upper case conversion
	char A[]="BickyWelCome";
	int i;
	for(i=0;i!=A[i];i++)
	{
		if(A[i]>=65 && A[i]<=90)
		   A[i]=A[i];
		  else if(A[i]>='a' && A[i]<='z')
		    A[i]=A[i]-32;
	}
      cout<<A<<endl;
      //lower conversion
      char B[]="BicKYJHAacbcD";
      for(i=0;i!=A[i];i++)
      {
      	if(B[i]>='a' && B[i]<='z')
      	  A[i]=A[i];
      	else if(B[i]>='A' && B[i]<='Z')
      	  B[i]+=32;
	  }
	  cout<<B<<endl;
		return 0;
}
