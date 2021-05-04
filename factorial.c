#include<conio.h>
#include<stdio.h>
void factorial(int num){
	int fact = 1;
	while(num > 1){
		fact *= num;
		num--;
	}
	printf("factorial = %d", fact);
}
