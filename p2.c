#include <stdio.h>
#define M 20
// = java final constant

int main(int argc, char *argv[]) {
	
	/*
	int 		����, ����/��� 	-4, -3, -2, -1, 0, 1, 2, 3, 4, ...
	long		���� (ū����) 		
	float		�Ǽ�, ����/��� 	10.1, 11,1
	double		�Ǽ� (ū����) 
	char		���� (���ĺ� �ϳ�)  A, B, C ...
	*/
	
	int n = 0;
	const int x = 123;
	// fianl constant
	
	n = 5;
	printf("value of n : %d\n", n);
	n = 10;
	printf("value of n : %d\n", n);
	
	printf("value of M : %d\n", M);
	printf("value of x : %d\n", x);
	
	printf("int: %d\n", sizeof(int));	
	printf("long: %d\n", sizeof(long));		
	printf("float: %d\n", sizeof(float));	
	printf("double: %d\n", sizeof(double));
	printf("char: %d\n", sizeof(char));
	
	// size =>byte
	
	return 0;

}
