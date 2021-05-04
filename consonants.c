/*
 * consonants.c
 *
 *  Created on: 31-Jan-2020
 *      Author: Harish
 */
#include<conio.h>
#include<stdio.h>
void consonant(){
	char var;
	printf("enter character: ");
	scanf("%c", &var);
	char consonant_array[] = {'b', 'c', 'd', 'f','g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
	char vowel_array[] = {'a', 'e', 'i', 'o', 'u'};
	char nums[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	for(int i = 0; i <= 21; i++){
		if(var == consonant_array[i]){
			printf("%c is consonant.", var);
		}
	}
	for(int j = 0; j <= 5; j++){
		if(var == vowel_array[j]){
			printf("%c is a vowel.", var);
		}
	}
	for(int k = 0; k <= 10; k++){
		if(var == nums[k]){
			printf("%c is a number.", var);
		}
	}

}


