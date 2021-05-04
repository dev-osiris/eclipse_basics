#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


int isPrime(int number){

	int i = 2;
	while(i < (number - 1)){
		if(number % i == 0){
			i++;
			return 0;
		}
		else i++;
	}

    return 1;
}


