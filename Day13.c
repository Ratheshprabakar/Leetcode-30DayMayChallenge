/*Remove K Digits

Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

Note : The length of num is less than 10002 and will be >=k.
The given num does not contain any leading zero.

Input : num ="1432219", k=3
Output : "1219"
Explanation : Remove the threee digits 4,3, and 2 to form the new number 1219 which is the smallest.

Input : num="10200", k=1
Output : "200"
Explanation : Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

Input : num="10", k="2"
Output : "0"
Explanation : Remove all the digits from the number and it is left with nothing which is 0.
*/
#include<stdio.h>
int main()
{
	char input_array[100];
	int k,i=1,length;
	printf("Enter the number\n");
	gets(input_array);
	printf("Enter the k Value\n");
	scanf("%d",&k);
	length=k;
	if(strlen(input_array)==k)
		printf("0");
	else
	{
		while(k--)
		{
			if(input_array[0]>input_array[i] && i!=strlen(input_array))
			{
				input_array[0]=999;
				i++;
			}
			else
			{
				input_array[i]=999;
				i++;
			}		
		}
		for(i=0;input_array[i]!='\0';i++)
		{
			if(input_array[i]>='0' && input_array[i]<='9')
			{
				printf("%c",input_array[i]);	
			}	
		}
	}
}
