#include <stdio.h>

int main(int argc,char *argv[]) 
{
	float fNum=atoi(argv[1]),temp,root;
	if(argc!=2)
		print("Invalid input!!!!");
	else
	{
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
	}
	return 0;
}
