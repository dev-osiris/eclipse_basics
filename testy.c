#include<stdio.h>
#include<conio.h>

void lop(){
	int row[4];
	int col[10];
	for(int i = 0; i < 3; i++){
		printf("row %d : ", i + 1);
//		scanf("%d", &row);
		for(int j = 0; j < 3; j++){

			scanf("%d", &col);
		}
	}

	for(int i = 0; i < 3; i++){
//			printf("%d", i + 1);

			for(int j = 0; j < 3; j++){
				printf("%d", col[j]);

			}
			printf("\n");
		}
}
