/*Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines, otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Input : ransomNote = "a", magazine ="b"
Ouput : false

Input : ransomNote = "aa", magazine = "ab"
Output : false

Input : ransomeNote = "aa", magazine = "aab"
Output : true

You may assume that both strings contain only lowercase letters.
*/
#include<stdio.h>
int main()
{
	char ransomNote[100],magazine[100];
	int i,j,flag=0;
	printf("Enter the ransomNote string\n");
	gets(ransomNote);
	printf("Enter the magazine string\n");
	gets(magazine);
	for(i=0;ransomNote[i]!='\0';i++)
	{	
		flag=0;
		for(j=0;magazine[j]!='\0';j++)
		{
			if(ransomNote[i]==magazine[j])
			{
				magazine[j]='*';
				flag=1;	
				break;
			}
		}	
		if(flag==0)
		{
			printf("false");
			break;	
		}
	}
	if(flag==1)
		printf("true");

}
