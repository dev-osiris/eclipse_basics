/*
 * caller.c
 *
 *  Created on: 25-Jan-2020
 *      Author: Harish
 */
#include<stdio.h>
#include<conio.h>

int main(){
	setbuf(stdout, NULL);
//	oddeven();
//	starmaker();
//	int res = calculate(12, '+', 5);
//	printf("Result = %d", res);
//	quad();
//	loop();
//	consonant();
//	isPrime(23);

	for(int j = 2; j < 100; j++){
		int i = 2;
		while(i < (j - 1)){
			if(j % i == 0){
				i++;

			}
			else i++;
		}

		printf("%d ", j);
	}







//	factorial(4);
//	fibo(12);
//	armstrong();
//	lop();

	return 0;
}

