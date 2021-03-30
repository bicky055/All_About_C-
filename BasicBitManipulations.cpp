#include<iostream>
using namespace std;

  /*         Get bit 
             n=0101
      suppose we need to get bit at position , i=2
          1<<i=0100
        0101 & 0100=0100
     if n&(1<<i)!=0, then bit is 1		  
  */
int getBit(int num,int position)
{
	return ((num & (1<<position))!=0);
}

/*  Set bit(menas Add zero(0-1and 1-0 jaha tk positon bola bahi tk krna rehta hai)) 
             n=0101
      suppose we need to set bit at position , i=1
          1<<i=0010
        0101 | 0010=0111
     if n|(1<<i), then bit is 1		  
  */
  
int setBit(int num,int position)
{
	return (num| (1<<position));
}

/*         Clear bit(zero krna) 
             n=0101
      suppose we need to clear bit at position , i=2
          1<<i=0100
        ~0100=1011(masking)
        0101 & 1011 = 0001	  
  */
  
  int clearBit(int n,int pos)
  {
  	int mask=~(1<<pos);
  	
  	return (n & mask);
  }
  
  /*         Update bit(clear and then set) 
             n=0101
      suppose we need to update bit at position , i=1 to 1
          1<<i=0010
          ~0010=1101(masking)
        0101 & 1101=0101
     	 1<<i=0010
		  0101 | 0010=0111 
  */
  
  int updateBit(int n,int pos,int value)
  {
  	int mask=~(1<<pos);
  	n=n & mask;
  	return (n | (value<<pos ));
  }
int main()
{
	cout<<getBit(5,2)<<endl;
	cout<<setBit(5,1)<<endl;
	cout<<clearBit(5,2)<<endl;
	cout<<updateBit(5,1,1)<<endl;
}
