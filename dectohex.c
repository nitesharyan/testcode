#include<stdio.h>
int main()
{
	int n,i,j,s[32];
	scanf("%d",&n);
	while(n)
	{
		s[i]=n%16;
		i++;
		n=n/16;
	}
	i--;
	while(i>=0)
	{
		if(s[i]>=10)
		{
			printf("%c",s[i--]-10+'a');
		}
		else
			printf("%d",s[i--]);
	}
}
