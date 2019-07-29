/**
File - bubblesort.c
Description - Bubble sort program to sort an array of integers.
Course - S.Y Bsc(cs)
Author - Swarali Kulkarni

*/
#include<stdio.h>
#define max 20
void bubble(int [],int);
main()
{
	int a[max],n,i;
	do
	{
	printf("Enter how many elements?\n");
	scanf("%d",&n);
	}while(n<=0||n>max);

	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	bubble(a,n);
}
/*
	@param - array , size of array
	@desc - prints sorted array and corresponding passes
*/
void bubble(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)   //no of passes
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

	printf("\npass %d:\n",i);
	for(j=0;j<n;j++)
	printf("%d\t",a[j]);
	}
}





