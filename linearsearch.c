/*
File - linearsearch.c
Description - Performs linear search on an array of integers.
Course - S.Y Bsc(cs)
Author - Swarali Kulkarni

*/
#include<stdio.h>
#define max 20
void lsearch(int[],int,int);
main()
{
	int i,key,a[max],n;
	do
	{
		printf("Enter how many elements?\n");
		scanf("%d",&n);
	}
	while(n<=0||n>max);

	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("Enter key to search:\n");
	scanf("%d",&key);

	lsearch(a,n,key);
}
void lsearch(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
	    if(key==a[i])
	    {
		printf("%d is found at %d position\n",key,i+1);
	    }
	}
	if(i==n)
	printf("%d not found",key);

}


