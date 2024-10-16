#include <stdio.h>
int main(){
	int value = 20;
	int* ptr = &value;
	int** ptr2 = &ptr;
	int*** ptr3 = &ptr2;
	printf("Address of value: %d\n", ***ptr3);
}

