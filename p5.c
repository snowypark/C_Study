#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n = 7, m = 3;
	
	printf("== %d\n", n==m);
	printf("!= %d\n", n!=m);
	printf("> %d\n", n>m);
	printf("< %d\n", n<m);
	
	/*
	(n>m)&&(n==10) : n이 m보다 크고, n의 값은 10이다. (AND)
	
	(n>m)||(n==10) : n이 m보다 크거나, n의 값이 10이다. (OR)
	  
	*/
	
	
	return 0;
}
