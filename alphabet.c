// C Program To Check Whether A Character Is Alphabet Or Not

#include <stdio.h>
#include <ctype.h>

void main(){
	char c;
	printf("Enter Your Character : ");
	scanf("%c", &c);
	(isalpha(c) == 0)? printf("%c Is Not An Alphabet", c) : printf("%c Is An Alphabet", c);
}