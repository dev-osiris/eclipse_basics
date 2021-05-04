/*
 * star.c
 *
 *  Created on: 25-Jan-2020
 *      Author: Harish
 */
#include <stdio.h>
#include <conio.h>

void starmaker(){

//half triangle
//	int num;
//	printf("frequency: ");
//	scanf("%d", &num);
//	for(int i = 1; i < num + 1 ; i++){
//		for(int j = 0; j < i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}



 //triangle
	int line, star, space;
	for(line = 0; line < 4; line++){

		for(space = 3; space > line; space--){
			printf(" ");
		}

		for(star = 0; star <= line; star++){
			printf("*");
		}

		for(star = 0; star < line; star++){
			printf("*");
		}

		printf("\n");
	}

//diamond shape
//	for(line = 1; line < 4; line++){
//		for(star = 0; star < line; star++){
//					printf(" ");
//		}
//		for(star = 4; star > line; star--){
//					printf("*");
//				}
//		for(star = 3; star > line; star--){
//			printf("*");
//		}
//
//		printf("\n");
//	}
 }



