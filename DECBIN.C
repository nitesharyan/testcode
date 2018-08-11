#include <stdio.h>
#define MAX 10
int main(int argc,char *argv[])
{
	int iNum=atoi(argv[1]),ibin[MAX],i;
	if(argc!=2)
		printf("Invalid input!!!!");
	else
	{
		for(i=0;iNum;iNum/=2,i++)
			ibin[i]=iNum%2;
		for(i=i-1;i>=0;i--)
			printf("%d",ibin[i]);
	}
	return 0;
}