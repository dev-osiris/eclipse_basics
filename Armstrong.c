//Armstrong number
#include<stdio.h>
#include<conio.h>

void armstrong(){
	int number = 153, temp = 0, ans = 0;
	int num2 = number;
	while(number > 0){
		temp = number % 10;
		ans += (temp * temp * temp);
		number = number / 10;
	}
	printf("number: %d \n", ans);
	if(ans == num2)
		printf("Armstrong number!");
	else
		printf("no");
}

