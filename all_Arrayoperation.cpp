#include <bits/stdc++.h>

using namespace std;

class Array
{
  private :
      int *A;
      int size;
      int length;
      void swap(int *x,int *y);
  public :
     Array
        {
        size=10;
        length=0;
        A=new int[size];
        }
      Array(int sz)
      {
         size=sz;
         length=0;
         A=new int[size];
      }
      ~Array()
      {
          delete []A;
      }

 void Display();
 void Append(int x);
 void Insert(int index,int x);
 int LinearSearch(int key);
 int BinarySearch(int key);
 //int RBinarySearch(int a[],int l,int h,int key);
 void Get(int index);
 void Set(int index,int x);
 int Max();
 int Min();
 float Avg();
 int Sum();
 void Reverse();
 void Reverse2();
 void InsertSort();
 int isSort();
 void REarrange();
 Array* Marge(struct Array *arr2);
 Array* Union(struct Array *arr2);
 Array* Intersection(struct Array *arr2)
 Array* Difference(struct Array *arr2);

};

void Array::Display()
{
	printf("elements are\n");
	for(int i=0;i<length;i++)
	printf("%d",A[i]);
}

      /* ADD the end of the array length element */

void Array::Append(int x)
{
	//1st check the arr have size or not
	if(length<size)
	//then add element an length position (if length is 5 then add 5th position to elem)
	A[length++]=x;
}

    /* Insert(add) any position of an element in Given Array */

void Array::Insert(int index, int x )
{
    int i;
    //1st we check given element b/w the length of arr (0 to length)
    if(index >= 0 && index <=length)
    {
	for(i=length;i>index;i--)
	// index to right shift of all element then Insert the element
	   A[i]=A[i-1];
	   //Insert the element
	   A[index]=x;
	   //increase length
	   length++;
}
	}

	/* Delete operation */
void Array::Delete(int index)
{
	//initialize delete element x is zero(0)
	int x=0;
	int i=0;
	if(index >=0 && index<=length)
	{
		x=A[index];
		//left shift all elements to delete index element using for loop
		for(i=index;i<length-1;i++)
		A[i]=A[i+1];
		length--;
		//return x; void fun se value nhi return hogi
	}

}

	     /*Linear Search */

int Array::LinearSearch(int key)
{
	int i;
	for(i=0;i<length;i++)
	{
	  if(key==A[i])
	  return i;
    }
	  return -1;
}

     /* Swap function */

void Array::swap(int *x,int *y)
{

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

   /* Improvement of LinearSearch */

int Array::LinearSearch1(int key)
{
    int i;
	for(i=0;i<length;i++)
	{
		if(key==A[i])
		{
		// This is Transposition method its faster
		 swap(&A[i],&A[i-1]);
		 return i;
	    }
	    return -1;
	}
}

	     /* Binary Search */
	     /* iterative version*/

int Array::BinarySearch(int key)
{
	int mid;
	int l=0;
	int h=length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		return mid;
		else if(key<A[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	return -1;
}

     /* Recursive version*/

int  Array::RBinarySearch(int a[],int l,int h,int x)
{
	int mid;
	 l=0;
	 h=length-1;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(x==[mid])
		return mid;
		else if(x<[mid])
		return RBinarySearch(arr,l,mid-1,x);
		else
		return RBinarySearch(arr,mid+1,h,x);
	}
	return -1;
}
void Array::Get(int index)
{

    if(index>=0 && index<length)
        return A[index];
    return -1;
}

void Array::Set(int index,int key)
{

    if(index>=0 && index<length)
    return A[index]=key;
    return -1;

}
int Array::max()
{
    int max=A[0];
    for(int i=0;i<length;i++)
    {
      if(max<A[i])
        max=A[i];
    }
    return max;
}
int Array::min()
{
    int min=A[0];
    for(int i=0;i<length;i++)
    {
        if(min>A[i])
            min=A[1];
    }
     return min;
}

int Array::sum()
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum=sum+A[i];
    }
     return sum;
}

float Array::Avg()
{
    return sum(arr)/length;
}

      /* Reverse of Array m-1 */
void Array::Reverce()
{
	int *B;
	int i,j;
	B=(int *)malloc(length*sizeof(int));

	for(i=length-1,j=0;i>=0;i--,j++)
	   B[j]=[i];
	   for(i=0;i<length;i++)
	   [i]=B[i];
}
      /*Revers Array m-2*/
void Array::Reverse2()
{
	int i,j;
	for(i=0,j=length-1;i<j;i++,j--)
	   swap(&A[i],&A[j]);
}
     /*Insertion an element of Sorted Array*/
int Array::Insert(int indexele)
{
	int i=length-1;
	if(length==size)
	   return ;
	   while(A[i]>indexele)
	   {
	   	A[i+1]=A[i];
	   	i--;
	   }
	   A[i+1]=indexele;
	   length++;
}

/* Check the Given Array is sort or not*/

void Array::isSort()
{
	for(int i=0;i<length;i++)
	{
		if(A[i]>A[i+1])
		return 0;
	}
	return 1;
}
   /* All negative ele leftsize and positive on Right size*/
void Array::REarrange()
{
	int i=0;j=length;
	while(i<j)
	{
		while(A[i]<A[j]) i++;
		while(A[i]>A[j]) j--;
		if(i<j)
		swap(&A[i],&A[j]);
	}
}

   /* Marge operation of Array and its time complexity O(n+m)*/
void Array::Marge( Array arr2)
{
	int i,j,k;
	 Array *arr3=new Array(length+arr2.length);
	while(i<length &&j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		arr3->A[k++]=A[i++];
		else
		arr3->A[k++]=arr2.A[j++];
	}
	for(;i<length;i++)
	  arr3->A[k++]=A[i];
	for(;j<arr2.length;j++)
	  arr3->A[k++]=arr2.A[j];

	arr3->length=length + arr2.length;

	return arr3;
}

       /* Union opretion using marge process */

 void Array::Union(struct Array *arr2)
{
	int i,j,k;
	 Array *arr3=new Array(length+arr2.length);
	while(i<length &&j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		  arr3->A[k++]=A[i++];
		else if(arr2.A[j]<A[i])
		  arr3->A[k++]=arr2.A[j++];
		else
		{
		   arr3->A[k++]=A[i++];
		   j++;
	    }
	}
	for(;i<length;i++)
	  arr3->A[k++]=A[i];
	for(;j<arr2.length;j++)
	  arr3->A[k++]=arr2.A[j];

	arr3->length=k;

	return arr3;
}

       /*Intersection of Array using marge process */

void Array::Intersection(struct Array *arr2)
{
	int i,j,k;
	 Array *arr3=new Array(length+arr2.length);
	while(i<length &&j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		    i++;
		else if(arr2.A[j]<A[i])
		    j++;
		else
		{
		   arr3->A[k++]=A[i++];
		   j++;
	    }
	}
	for(;i<length;i++)
	  arr3->A[k++]=A[i];

	arr3->length=k;

	return arr3;
}
     /*Diffenence(A-B Array ) Operation using marge process*/
void Array::Diffenence(struct Array *arr2)
{
	int i,j,k;
	 Array *arr3=new Array(length+arr2.length);
	while(i<length &&j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		    arr3->A[k]=A[i++];
		else if(arr2.A[j]<A[i])
		    j++;
		else
		{
		    i++;
		   j++;
	    }
	}
	arr3->length=k;

	return arr3;
}


int main()
{
    Array arr1;
	int ch,sz;
	int x,index;
	cout<<"enter Size of arr1"<<endl;
	cin>>sz;
	arr1=new Array(sz);

    //for mrage to difference we use two more Array
    struct Array arr2;
    cout<<"enter Size of arr2";
	cin>>sz;
	arr2=new Array(sz);
    arr2.length=0;

    struct Array arr3;
    cout<<"enter Size of arr3"<<endl;
	cin>>sz;
	arr3=new Array(sz);
    arr3.length=0;
do
 {
    cout<<"Menu Options"<<endl;
	cout<<"1. Insert"<<endl;
	cout<<"2. Delete"<<endl;
	cout<<"3. LinearSearch"<<endl;
	cout<<"4. Sum"<<endl;
	cout<<"5. Display"<<endl;
	cout<<"6. Append"<<endl;
	cout<<"7. LinearSearch"<<endl;
	cout<<"8. BinarySearch"<<endl;
	cout<<"9. RBinarySearch"<<endl;
	cout<<"10. Get"<<endl;
	cout<<"11. Set"<<endl;
	cout<<"12. Max"<<endl;
	cout<<"13. Min"<<endl;
	cout<<"14. Avg"<<endl;
	cout<<"15. Reverse"<<endl;
	cout<<"16. Reverse2"<<endl;
	cout<<"17. isSort"<<endl;
	cout<<"18. REarrange"<<endl;
	cout<<"19. Marge"<<endl;
	cout<<"20. Union"<<endl;
	cout<<"21. Intersection"<<endl;
	cout<<"22. Diffenence"<<endl;

    cout<<"enter you choice "<<endl;
    cin>>ch;
  switch(ch)
   {
        case 1: printf("Enter an element and index");
                scanf("%d%d",&x,&index);
                arr1.Insert(index,x);
                 break;
        case 2: printf("Enter index ");
                scanf("%d",&index);
                x=arr1.Delete(index);
                printf("Deleted Element is %d\n",x);
                 break;
        case 3:printf("Enter element to search ");
               scanf("%d",&x);
               index=arr1.LinearSearch(x);
               printf("Element index %d",index);
                break;
        case 4:printf("Sum is %d\n",arr1.Sum());
                break;
        case 5:arr1.Display();
                break;
        case 6:printf("Enter element to Add");
               scanf("%d",&x);
               printf("add element is",arr1.Append(x));
                break;
        case 7:printf("Enter element to search ");
               scanf("%d",&x);
               index=arr1.LinearSearch1(x);
               printf("Element index %d",index);
                break;
        case 8:printf("Enter element to search ");
               scanf("%d",&x);
               index=arr1.BinarySearch(x);
               printf("Element index %d",index);
                break;
        case 9:printf("Enter element to search ");
               scanf("%d",&x);
               index=arr1.RBinarySearch(x);
               printf("Element index %d",index);
                break;
        case 10:printf("Enter index ");
                scanf("%d",&index);
                x=arr1.Get(index);
                printf("Element is %d\n",x);
                 break;
        case 11:printf("Enter an element and index");
                scanf("%d%d",&x,&index);
                arr1.Set(index,x);
                 break;
        case 12:printf("Max is %d\n",arr1.Max());
                 break;
        case 13:printf("Min is %d\n",arr1.Min());
                 break;
        case 14:printf("Avg is %d\n",arr1.Avg());
                 break;
        case 15:printf("Enter an element of Array");
                scanf("%d",&arr1);
                arr1.Reverse();
                 break;
        case 16:printf("Enter an element of Array");
                scanf("%d",&arr1);
                arr1.Reverse2();
                 break;
        case 17:arr1.isSort();
                 break
        case 18:arr1.REarrange();
                Display(arr1);
                 break;
        case 19:arr1.Marge(&arr2);
                Display(arr3);
                 break;
        case 20:arr1.Union(&arr2);
                Display(arr3);
                 break;
        case 21:arr1.Intersection(&arr2);
                Display(arr3);
                 break;
        case 22:arr1.Union(&arr2);
                Display(arr3);
                 break;

}
}while(ch<23);

    return 0;
}
