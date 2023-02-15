// C Program To Find If A Given Number Is Even Or Odd

#include <stdio.h>

void main(){
	int num;
	printf("Enter Your Number : ");
	scanf("%d", &num);
	(num % 2 == 0)? printf("%d Is Even.", num) : printf("%d Is Odd.", num);
}