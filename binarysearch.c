/**
File - binarysearch.c
Description - Binary search algorithm implemented on array of integers
Course - S.Y Bsc(cs)
Author - Swarali Kulkarni

*/
#include<stdio.h>
#define max 20
void bubble(int [],int);
int binsearch(int [],int,int,int);
main()
{
	int a[max],n,key,i;

	do
	{
		printf("Enter no of elements:\n");
		scanf("%d",&n);
	}while(n<=0||n>max);

	printf("Enter %d elements:\n",n);
	 for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter a key to search:");
	scanf("%d",&key);

	bubble(a,n);  		//providing sorted array to search function

	i=binsearch(a,0,n-1,key);
	if(i==-1)
	printf("%d not found",key);
	else
	printf("%d found at %d location",key,i+1);
}
/**
	@param - array,low specifies starting index, high specifies last index, key to search
	@desc- Recursive function to search key in sorted array. 
*/
int binsearch(int a[],int low,int high,int key)
{
	int mid;

	if(low<=high)
	{
		mid=(mid+high)/2;
		
		if(a[mid]==key)
			return(mid);
		else if(key<a[mid])
			binsearch(a,low,mid-1,key);  //recursive call to search sub-array before mid
		else
			binsearch(a,mid+1,high,key); //recursive call to search sub-array after mid
	}
		return(-1);
}

void bubble(int a[],int n)
{
  int i,j,t;
        for(i=1;i<n;i++)
        {
           for(j=0;j<n-1;j++)
             {
                  if(a[j]>a[j+1])
                  {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                  }
             }
        }
}


