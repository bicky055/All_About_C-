#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, i, j, m=1, a[10000], temp=0;
	    cin>>n;
	    a[0]=1;
	    for(j=2;j<=n;j++)
	    {
	        for(i=0;i<m;i++)
	        {
	            int x=a[i]*j+temp;
	            a[i]=x%10;
	            temp=x/10;
	        }
	        while(temp!=0)
	        {
	            a[m]=temp%10;
	            temp/=10;
	            m++;
	        }
	    }
	    for(int x=m-1;x>=0;x--)
	    cout<<a[x];
	    cout<<endl;
	}
	return 0;
}

