/*You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1,2,....,n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given a function to int isBadVersion(Version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the function.

Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version
*/
#include<stdio.h>
int isBadVersion(int i,int y);
int main()
{
	int n,x,i;
	printf("Enter the number of versions\t");
	scanf("%d",&n);
    	srand(time(0)); 
	x=rand()%n;
	if(x==0)
		printf("1 is the first bad version\n");
	else
	{
		for(i=1;i<n;i++)
		{
			if(isBadVersion(i,x))
			{
				printf("%d is the first bad version\n",i);
				break;
			}	
		}
	}
}
int isBadVersion(int i,int y)
{
	if(i==y)
		return 1;
	else
		return 0;
}
