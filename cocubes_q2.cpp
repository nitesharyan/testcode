#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10]={2,3,4,5,7,8,9,10,11,12},x,k,n;
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&k);
	printf("%d",find_Closet(arr,n,x,k));
}
int find_Closet(int arr[],int n,int x,int k)
{
	int sum=0,index;
	for(index=0;index<n;index++)
		if(arr[index]>x)
			break;
	int first=0,second=0;
	for(int i=0;i<k;i++)
	{
		if(abs(arr[index+second]-x) <= (abs(arr[index-1-first]-x)) && (index+second)<n)
		{
			sum+=arr[index+second];
			second++;
		}
		else
		{
			if(arr[index-1-first]==x)
				first++;
			sum=sum+arr[index-1-first];
			first++;
		}
	}
}
