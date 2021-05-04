/*
 * loops.c
 *
 *  Created on: 31-Jan-2020
 *      Author: Harish
 */
#include<conio.h>
#include<stdio.h>

void loop(){
	int j = 0;
	int arr[] = {2, 3, 5, 9, 4};
//	for(int i = 0; i < 5; i++){
//		printf("hlo");
//		printf("%d\n", arr[i]);
//	}
	do{
		printf("%d\n", arr[j]);
		j++;
	}while(j < 5);

}


