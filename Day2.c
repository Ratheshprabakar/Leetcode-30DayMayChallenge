/*You are given strings J representing the types of stones that are jewels, and S representing the stones you have. Each character in S is a type of stone you have. Each character in S is a type of stone you have. You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input : J="aA", S="aAAbbbb"
Output : 3

Example 2:
Input : J="z", S="ZZ"
Output : 0
*/
#include<stdio.h>
int main()
{
	char J[100],S[100];
	int i,j,count=0;
	printf("Enter the first string\n");
	gets(J);
	printf("Enter the second string\n");
	gets(S);
	for(i=0;J[i]!='\0';i++)
	{
		for(j=0;S[j]!='\0';j++)
		{
			if(J[i]==S[j])
			{
				count++;	
			}	
		}	
	
	}
	printf("%d",count);
}
