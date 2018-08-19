#include<stdio.h>
#include<math.h>
int main()
{
	char a[]="110111100";
	int i,j=0,num=0;
	for(i=0;a[i]!='\0';i++);
	
	while(j<i)
	{
		num=num+(a[j]-'0')*pow(2,i-j-1);
		j++;
	}
	printf("%d",num);
	printf("%x",num);
}
