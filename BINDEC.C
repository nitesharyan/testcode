#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[])
{
	char *str=*(argv+1);
	int iNum=0,l,i,j;
	if(argc!=2)
		printf("Invlaid input!!!!");
	else
	{
		for(l=0;str[l]!='\0';l++);
		for(i=l-1;i>=0;i--)
		{
			j=(int)(str[i]-48);
			printf("%d\n",j);
			printf("%c\n",str[i]);
			iNum=iNum+j*pow(2,l-1-i);
		}
		printf("%d",iNum);
	}
	return 0;
}