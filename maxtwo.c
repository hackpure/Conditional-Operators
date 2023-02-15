// C Program To Find Maximum Of Two Numbers

#include <stdio.h>

void main(){
	int a, b;
	printf("Enter The First Number : ");
	scanf("%d", &a);
	printf("Enter The Second Number : ");
	scanf("%d", &b);
	(a > b)? printf("Maximum Number Is : %d", a) : printf("Maximum Number Is : %d", b);
}