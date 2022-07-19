#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n = 7;
	int m = 3;
	//int n = 3, m = 7;
	
	// +, -, *, /, %(moduleo)
	
	printf("+: %d\n", n+m);
	printf("-: %d\n", n-m);
	printf("*: %d\n", n*m);
	printf("/: %d\n", n/m);
	printf("%%: %d\n", n%m);
	
	/*
	n%2 => 2의 배수인지 테스트, 짝수  
		=0, 2의 배수
		=1, 2의 배수가 아님. 홀수
		
	n%1000 
		n이 큰 숫자일 때, 하위 백단위까지만 컷.
		ex. n = 1987456
			n%1000 = 456 
	*/
	
	n = 5;
	n = n + 1;
	n++;
	
	n = n - 1;
	n--;
	
	n = n + 5;
	n += 5;
	
	n = n * 5;
	n *= 5;
	
	n = 5;
	//++n = 먼저 더하기
	//n++ = 지금부터 더하기. 다음 값에 반영. 
	printf("* %d\n", ++n);
	printf("* %d\n", n);
	
	n = 5; 
	printf("* %d\n", n++);
	printf("* %d\n", n);
	
	return 0;
}


