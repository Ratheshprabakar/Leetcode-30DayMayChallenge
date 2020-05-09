/*Given a positive integer num, write a function which returns True if num is a perfect square else false

Note : Do not use any built-in library function such as sqrt.

Input : 16
Output : true

Input : 14
Output : false
*/
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i*i==n)
		{
			printf("true");
			break;
		}
		else if(i*i>n)
		{
			printf("false");
			break;
		}	
	}


}
