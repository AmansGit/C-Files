/*	Author:: Aman Kumar Sharma
 *	prob::	Programme to check whether a string is Palindrome or not??
 */

#include <stdio.h>
#include <string.h>

int isPalindrome(char word[])
{
	int l=strlen(word);
	int n=l-1;
	for(int i=0;i<l;i++,n--){
		if(word[i]==word[n-1]){
			continue;
		}
		else if(word[i]!=word[l-1])
			return 0;
	}
	return 1;
}
int main()
{
	char word[100];
	if (fgets(word , sizeof(word), stdin) > 0)
	{
		printf("%s", isPalindrome(word) ? "true" : "false");
	}
}
