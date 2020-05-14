/* Check If It Is a Straight Line
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
*/
#include<stdio.h>
int main()
{
	int n,i,flag=0,xdiff=0,ydiff=0;
	int arr[20][2];
	printf("Total number of coordinates\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d\t%d",&arr[i][0],&arr[i][1]);
	}

	for(i=0;i<n-1;i++)
	{
		xdiff=abs(arr[i][0]-arr[i+1][0]);
		ydiff=abs(arr[i][1]-arr[i+1][1]);
		if(xdiff!=ydiff)
		{
			flag=1;
			printf("false");
			break;	
		}	
	}
	if(flag==0)
	{
		printf("true");	
	}
	

}
