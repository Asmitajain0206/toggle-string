/* You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output. */

#include<ctype.h>
#include<stdio.h>
#include<stdio.h>
int main()
{
	char s[200];
	int len;
	scanf("%s",s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(isupper(s[i]))
		printf("%c",tolower(s[i]));
		else if(islower(s[i]))
		printf("%c",toupper(s[i]));
	}
 return 0;
}
