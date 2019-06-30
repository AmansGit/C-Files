/*	author: Aman Kumar Sharma
 *	Language used: C
 *	Prob: Find the sum of any two number without using any operator..
 _______________________________________________________________________
 */


#include<stdio.h> 
#include<stdlib.h>  
int add(int x, int y) 
{ 
    return printf("%*c%*c", x, ' ',y, ' ');	// * => field width specifier. 
} 
  
// Driver code 
int main() 
{
	int a,b;	
	scanf("%d%d",&a,&b);
	printf("\nSum = %d\n", add(a,b)); 
	return 0; 
}
