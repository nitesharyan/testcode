#include<stdio.h>
#include<math.h>
#define max 10
int main(int argc,char *argv[])
{
	char *str=*(argv+1);
	int l,i,j,k,num,result[max],n=0;
	if(argc!=2)
		printf("Invlaid input!!!!");
	else
	{
		for(l=0;str[l]!='\0';l++);
		for(i=l-1;i>=0;i-=3)
		{
			num=k=0;
			if(i-3<0)
			{
				while(k<=i)
				{
					j=(int)(str[i-k]-48);
					num=num+j*pow(2,k);
					k++;
				}
			}
			else
			{
				while(k<3)
				{
					j=(int)(str[i-k]-48);
					num=num+j*pow(2,k);
					k++;
				}
			}
			result[n++]=num;
		}
		for(i=n-1;i>=0;i--)
			printf("%d",result[i]);
	}
	return 0;
}