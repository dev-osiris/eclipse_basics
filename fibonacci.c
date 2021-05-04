#include<stdio.h>
#include<conio.h>
// 1 1 2 3 5 8 13 21 ...
void fibo(int limit){
	int sum, firstnum = 1, secondnum = 1;
	printf("First %d terms of Fibonacci series: \n\n", limit);

	for(int i = 0; i < limit; i++){
		printf("%d ", firstnum);

		sum = firstnum + secondnum;
		firstnum = secondnum;
		secondnum = sum;
	}
	printf(". . . .");
}

