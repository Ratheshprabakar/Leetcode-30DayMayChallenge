/*Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Input : 5
Output : 2
Explanation : The binary representation of 5 is 101(no leading zero bits), and its complement is 010. So you need to output 2.

Input : 1
Output : 0
Explanation : The binary representation of 1 is 1 (no leeding zero bits), and its complement is 0. So you need to output 0.
*/
#include<stdio.h>
int main()
{
	int n,sum=0,k=0,i=0,j;
	int input_array[100];
	printf("Enter the positive integer\t");
	scanf("%d",&n);
	if(n==0)
		printf("1");
	else
	{
		while(n>0)
		{
			input_array[i++]=n%2;
			n/=2;
				
		}
		for(j=0;j<i;j++)
		{
			if(input_array[j]==1)
				input_array[j]=0;
			else
				input_array[j]=1;
		}
		for(j=i-1;j>=0;j--)
		{
			sum+=(input_array[j]*pow(2,k));
			k++;	
		}
		printf("%d",sum);
	}
}
