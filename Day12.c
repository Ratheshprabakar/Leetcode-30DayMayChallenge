/*You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
 

Note: Your solution should run in O(log n) time and O(1) space.*/
#include<stdio.h>
int main()
{
	int n,i;
	int *input_array,*temp_array;
	printf("Enter number of elements\t");
	scanf("%d",&n);
	input_array=(int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{		
		scanf("%d",&input_array[i]);
	}
	temp_array=calloc(input_array[n-1],sizeof(int));
	for(i=0;i<n;i++)
	{
		temp_array[input_array[i]]++;	
	}
	for(i=0;i<input_array[n-1];i++)
	{
		if(temp_array[i]==1)
		{
			printf("%d",i);
			break;	
		}	
	}
	free(input_array);
	free(temp_array);

}
