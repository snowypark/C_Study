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
	n%2 => 2�� ������� �׽�Ʈ, ¦��  
		=0, 2�� ���
		=1, 2�� ����� �ƴ�. Ȧ��
		
	n%1000 
		n�� ū ������ ��, ���� ����������� ��.
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
	//++n = ���� ���ϱ�
	//n++ = ���ݺ��� ���ϱ�. ���� ���� �ݿ�. 
	printf("* %d\n", ++n);
	printf("* %d\n", n);
	
	n = 5; 
	printf("* %d\n", n++);
	printf("* %d\n", n);
	
	return 0;
}


