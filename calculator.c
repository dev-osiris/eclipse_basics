#include<stdio.h>
#include<conio.h>

void oddeven(){
	int var = 5;
	if(var % 2 == 0){
		printf("even");
	}
	else{
		printf("odd");
	}
}

int calculate(int num1, char operator, int num2){
	int result;

	if(operator == '+'){
		result = num1 + num2;
	}
	else if(operator == '-'){
		result = num1 - num2;
	}

	else if(operator == '*'){
		result = num1 * num2;
	}

	else if(operator == '/'){
		if(num2 == 0){
			printf("division by 0!\n");
			result = 0;
		}
		else{
		result = num1 / num2;
		}
	}
	else{
		result = NULL;
	}

	if(result == NULL){
			printf("operation not allowed!\n");
			result = 0;
	}

	return result;

}
