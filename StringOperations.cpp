#include<iostream>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

    //String Operations  
	int  Valide(char *name)
{
	int i=0;
	for(i=0;name[i]!=0;i++)
	{
		if(!(name[i]>=65 && name[i]<=90) && (!(name[i]>=97 && name[i]<=122)) && !(name[i]>=48 && name[i]<=57) )
		
		   return 0;
	}
	return 1;
	
} 

void ReverseStr( string& str)
{
	int n=str.length();
	
	for(int i=0;i<n/2;i++)
	swap(str[i],str[n-i-1]);
}
int main()
{
	//1. Consonent Words and Vowel in a string 
	
	/*char A[]="bicky kumar jha";
	int i;
	int Vcount=0,Ccount=0;
	for(i=0;i!=A[i];i++)
	{
		if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
		
		      Vcount++;
		      
		else if((A[i]>=65 && A[i]<=90 ) || (A[i]>=97 && A[i]<=122)) 
		Ccount++;
	}
	
	cout<<Vcount<<endl;
	cout<<Ccount<<endl;*/
	
	
	//2.count how many words
	
	/*char A[]="Bicky Kumar    jha  welcome";
	 int i,word=0;
	 for(i=0;A[i]!=0;i++)
	 {
	 	if(A[i]==' ' && A[i-1]==' ')
	 	word++;
	 }
	 cout<<word<<endl;*/
	 
// 3. validating a String 

    /*char *valid="Bickyjha@12345";
		 
	 if(Valide(valid))
	 {
	 	cout<<"validate String "<<endl;
	 }
	 else
	   cout<<"not validate String "<<endl;*/
	   
//4. Reverse a String 

 //1.method
 
    /*string str="python";
    ReverseStr(str);
    cout<<str<<endl;*/
    
 //2.method using inbuilt "reverse function" 
 
 /*string str1="bickyjha";
 
      reverse(str1.begin(),str1.end());
	  cout<<str1<<endl;*/
//3.method	  
	  /*char A[]="python";
	  char B[7];
	  int i,j;
	  for(i=0;A[i]!='\0';i++)
	  {
	  	
		}  
		i=i-1;
		for(j=0;i>=0;i--,j++)
		{
			B[j]=A[i];
		}
		B[j]='\0';
		cout<<B<<endl;*/
		
//4. method	using swap 
	
	  /*char A[]="python";
	  char B[7];
	  int i,j;
	  for(i=0;A[i]!='\0';i++)
	  {
	  	
		}  
		i=i-1;
		for(j=0;j<i;i--,j++)
		{
			int temp;
			temp=A[j];
			A[j]=A[i];
			A[i]=temp;
		}
	  cout<<A<<endl;*/
	  
/*5.comparing two string  */	  

 /*char A[]="painter";
 char B[]="painting";
 
 int i,j;
 
 for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
 {
 	if(A[i]!=B[j])
 	break;
}
  if(A[i]==B[j]) 
    cout<<"equal";
    else if(A[i]<B[j])
    cout<<"smaller";
    else
    cout<<"greter";*/
    

		return 0;
}

