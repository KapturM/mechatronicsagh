#include <stdio.h>
#include <math.h>

int x;

int check_triangle(int a, int b, int c) {

	if (a + b > c && a + c > b && b + c > a) {
		printf("Triangle exists\n");				//only to see if it works
		x=1;
	}
	else {
		printf("Triangle doesn't exists\n");		//only to see if it works
		x=0;
	}
}

int main() {
	
	int a, b, c;

	printf("Put lenghts of sides of triangle: ");
	scanf_s("%d",&a);								//
	scanf_s("%d",&b);								//		INPUTS
	scanf_s("%d",&c);								//
	
	check_triangle(a,b,c);
	printf("%d\n", x);

	int cir=a+b+c;
	int* cir_pointer;
	cir_pointer = &cir;

	printf("%d\n", *cir_pointer);


	
	return 0; 