#include<conio.h>
#include<stdio.h>
#include<math.h>


void quad(){
	float a = 3, b = 4, c = 12, root1, root2, dmt;
	dmt = sqrt(b*b - 4*a*c);
	if(dmt > 0){
		root1 = (-b + dmt)/(2*a);
		root2 = (-b - dmt)/(2*a);
		printf("root1 = %.2f \nroot2 = %.2f", root1, root2);
	}
	else {
		printf("roots are irrational");
	}

}

