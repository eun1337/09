#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[]) 
{
	int i;
	int average, sum = 0;
	int grade[SIZE];
	printf("5���� ������ �Է��ϼ���.\n");
	
	for(i = 0; i < SIZE; i++) {
		scanf("%d", &grade[i]);
		sum+= grade[i];
	}
	
	average = sum / SIZE;
	printf("score average : %d\n", average); 
	
	return 0;
}
