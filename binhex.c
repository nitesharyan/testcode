/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 10
int main(int argc,char *argv[])
{
	char *str=*(argv+1),hex[max];
	int iNum=0,l,i,j,base=atoi(argv[2]),temp;
	if(argc!=3)
		printf("Invlaid input!!!!");
	else
	{
		for(l=0;str[l]!='\0';l++);
		for(i=l-1;i>=0;i--)
		{
			j=(int)(str[i]-48);
			/*printf("%d\n",j);
			printf("%c\n",str[i]);*/
			iNum=iNum+j*pow(2,l-1-i);
		}
		temp=iNum;
		i=0;
		while(temp)
		{
		    j=temp%base;
		    if(j>=10)
		        hex[i]='a'+j-10;
		    else
		        hex[i]=j+'0';
		    i++;
		    temp/=base;
		}
		while(i)
		{
		    i--;
		    printf("%c",hex[i]);
	    }
	}
	return 0;
}