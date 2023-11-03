#include <stdio.h>
#include <stdlib.h>

#define N_Student 5
int main(int argc, char *argv[]) 
{
	int grade[N_Student];
	int i;
	
	for(i = 0; i < N_Student; i++) {
		grade[i] = (i+1)*10;
	}
	
	for(i = 0; i < N_Student; i++) {
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	return 0;
}
