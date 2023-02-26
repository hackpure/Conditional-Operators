// C Program To Check Whether A Year Is Leap Year Or Not

#include <stdio.h>

int main(){
	int year;
	printf("Enter Your Year : ")
	scanf("%d", &year);
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)? printf("%d Is A Leap Year", year) : printf("%d Is Not A Leap Year", year);
}