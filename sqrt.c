#include <stdio.h>

int main() 
{
	float fNum=3,temp,root;
	if(fNum==0 || fNum==1)
		root=fNum;
	else
	{
		root=fNum/2;
		temp=0;
		while(root!=temp)
		{
			temp=root;
			root=(fNum/temp+temp)/2;
		}
	}
	printf("%f",root);
	return 0;
}
