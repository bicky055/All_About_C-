#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
   /*string str;//Declaration of string
   cin>>str;
   cout<<str;
   return 0;*/
   //Diffrence tpypes of way to declaration 
   
   /*string str;
   string str1(5,'n');
   cout<<str1<<endl;*/
   
   /*string str="bickyjha";
   cout<<str;*/
   
   //full sentence print 
   /*string str;
   getline(cin,str);
   cout<<str<<endl;*/
   
   /*string s1="fam";
   string s2="ily";
   cout<<s1+s2<<endl;*/
   
   /*string s1="fam";
   string s2="ily";
   s1.append(s2);//using Append function
   cout<<s1<<endl;*/
   
   /*string s1="fam";
   string s2="ily";
   
   cout<<s1[1]<<endl;*/
   
   /*string acb="bicky kumar jha ";
   acb.clear();//remove all String 
   cout<<acb;*/
   
   /*string s1="abc";
   string s2="xyz";

   cout<<s2.compare(s1)<<endl;*/
   
   /*string s1="abc";
   string s2="abc";
   if(s2.compare(s1)==0)
   cout<<"String are equal"<<endl;*/
   
   /*string s1="abc";
   string s2="abc";
   if(!s2.compare(s1))
   cout<<"String are equal"<<endl;*/
   
    /*string s1="acbfhg";
    s1.clear();
    if(s1.empty())
    cout<<"string is empty";*/
    
    /*string s1="acbfhg";
    s1.clear();
    if(!s1.empty())
    cout<<"String is empty"<<endl;
    else
    cout<<"string is not empty";*/
    
    /*string s1="nincompoop";
    s1.erase(3,3);
    cout<<s1;*/ 
	//o/p=ninpoo
	
	/*string s1="nincompoop";
	cout<<s1.find("oo");*/
	//index 7
	
	/*string s1="nincompoop";
	s1.insert(2,"lol");
	cout<<s1;*/
	
	/*string s1="nincompoop";
	cout<<s1.size(); *///s1.length() 
	//length of String 	
    
    /*string s1="bickyjha";
    
    for(int i=0;i<s1.length();i++)
    {
    	cout<<s1[i]<<endl;
	}*/
	
	/*string s1="bickykumarjha";
	string s=s1.substr(5,5);
	cout<<s;*/
    //kumar o/p
    
    /*string s1="786";
    int x = stoi(s1);
    cout<<x+2;*/
    //788
    
    /*int x = 786;
    cout<<to_string(x)+ "2";*/
    //7862
    
    //Sorting 
    /*string s1 ="ajasjidsfhiuhfdiuhfweuhm";
    sort(s1.begin(),s1.end());
    cout<<s1;*/
    
        /*String Challenges */
        
//1. given string have both characters are present "BacDeF" so convert upper/lower case
    
    /*inpute="BcaDeF"
    output=BCADEF/bcadef*/
	
	/*string str="BICKYKUMARJHA";
	//cout<<'a' - 'A'; o/p=32
	//convert upper case
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		 str[i]=str[i]-32;
	   } */
	   
	   //convert lower case
	   
	   /*for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		 str[i]=str[i]+32;
	   }   
    cout<<str<<endl;*/
    
    /*string s1="fdfffkfokdjesdaifsdj";
    
    //direct function to convert lower to upper
    
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    
    cout<<s1<<endl;*/
    
    /*string s="BICKY";
    
    //direct function to convert upper to lower 
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    cout<<s<<endl;*/
    
//2. given number to find biggest number like (1532556->6555321)    
    
    
    /*string str="6458";
    
    sort(str.begin(),str.end(),greater<int>());
    
    cout<<str<<endl;*/
    
//3. In given String maximum no of character occure like("abcacbade" -> a o/p)

    string s="abcacbade";
	int freq[26];
	for(int i=0;i<26;i++)
	  freq[i]=0; 
	  
	for(int i=0;i<s.length();i++)
	   freq[s[i]-'a']++;
	   
	   char ans='a';
	   int maxFreq=0;  
	   
	 for(int i=0;i<26;i)
	 {
	 	if(freq[i]>maxFreq)
	 	{
	 		maxFreq=freq[i];
	 		ans=i+'a';
		 }
		 
     }    
    
    cout<<maxFreq<<" "<<ans<<endl;
    
    
    return 0;
   
}
