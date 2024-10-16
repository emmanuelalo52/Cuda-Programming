#include <stdio.h>
#include <stdlib.h>

int main(){
	int* ptr = NULL;
	printf("Intial value: %p\n", (void*)ptr);
	//Allocate memory
	ptr = malloc(sizeof(int));
	if (ptr==NULL){
		printf("Value is still null\n");
		return 1;
	}
	printf("Memory Allocated: %p\n", (void*)ptr);
	//Allocate memory to pointer
	*ptr = 42;
	printf("New value for ptr:%d\n", *ptr);
	//clean up
	free(ptr);
	ptr = NULL;
	printf("Recent value is:%p\n",(void*)ptr);
	//debug
	if(ptr == NULL){
		printf("ptr is Null again\n");
	}
	return 0;

}
