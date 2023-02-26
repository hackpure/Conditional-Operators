// C Program To Find Maximum Of Three Numbers

#include <stdio.h>

void main(){
	int a, b, c;
	printf("Enter The First Number : ");
	scanf("%d", &a);
	printf("Enter The Second Number : ");
	scanf("%d", &b);
	printf("Enter The Third Number : ");
	scanf("%d", &c);
	(a > b && a > c)? printf("%d Is Greater", a) : (b > a && b > c)? printf("%d Is Greater", b) : printf("%d Is Greater", c);
}