/*Given an array of size n, find the majority element. The majority element is the element that appears more than floor of n/2 times.

You may assume that the array is non-empty and the majority element always exists in the array.

Input : [3,2,3]
Output : 3

Input : [2,2,1,1,1,2,2]
Output : 2
*/
#include<stdio.h>
int main()
{
	int size,i,j,temp,flag=1;
	int *input_array;
	printf("Enter the array size\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size * sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);	
	}
	for(i=size-1; i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i;j++)
		{
			if(input_array[j]<input_array[j+1])
			{
				temp=input_array[j];
				input_array[j]=input_array[j+1];
				input_array[j+1]=temp;
				flag=1;			
			}
		}	
	}
	printf("The Majority element is \t%d",input_array[size/2]);

}
