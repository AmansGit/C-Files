/* Read input from STDIN. Print your output to STDOUT*/
/*	Author:: Aman Kumar Sharma
 *	Date:: 12/03/19
 *	prob: find minimum of subarray of a given array
 *		N=5 , k=2: for array:: 10 0 3 2 5 
 *			   ans is::    0 0 2 2
 */

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *a[])
{
	int c[100],i,j,min;
	int n= atoi(a[1]);
	int k=atoi(a[2]);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	j=0;
	while(i<n){
	for(i=j;i<j+k;i++,j=j+k-1){
		min=c[j];
		if(c[j]>c[++i])
		{
			min=c[i];
		}
	
		printf("%d  ",min);
	}
	}
	return 0;
}

