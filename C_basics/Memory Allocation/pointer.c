#include <stdio.h>

int main(){
	int x = 10; //variable
	int* ptr = &x;	//reference to variable x
	printf("Address of x: %p\n", ptr);
	printf("Variable of x: %d\n", *ptr);
}
