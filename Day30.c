/*  K Closest Points to Origin

We have a list of points on the plane.  Find the K closest points to the origin (0, 0).

(Here, the distance between two points on a plane is the Euclidean distance.)

Distance of a point P(x, y) from the origin is given by d(0, P) = sqrt(x2 + y2)

You may return the answer in any order.  The answer is guaranteed to be unique (except for the order that it is in.)

Example 1:
Input: points = [[1,3],[-2,2]], K = 1
Output: [[-2,2]]
Explanation: 
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].

Example 2:
Input: points = [[3,3],[5,-1],[-2,4]], K = 2
Output: [[3,3],[-2,4]]
(The answer [[-2,4],[3,3]] would also be accepted.)

*/
#include<stdio.h>
int main()
{
	int n,i,j,temp,k,flag=1;
	int a[100][2];
	float *res;
	printf("Enter no of coordinates\t");
	scanf("%d",&n);
	res=(float *)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
		res[i]=sqrt((a[i][0]*a[i][0])+(a[i][1]*a[i][1]));	
	}
	printf("Enter the K value\t");
	scanf("%d",&k);
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if(res[j]>res[j+1])
			{
				temp=res[j];
				res[j]=res[j+1];
				res[j+1]=temp;
				temp=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=temp;
				temp=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=temp;
				flag=1;
			}	
		}	
	}
	printf("The Result is \n[");
	for(i=0;i<k;i++)
	{
		printf("[%d,%d]",a[i][0],a[i][1]);
		if(i!=(k-1))
		{
			printf(",");	
		}	
	}
	printf("]");
	free(res);
}
