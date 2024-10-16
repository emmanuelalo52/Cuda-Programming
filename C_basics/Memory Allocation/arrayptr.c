#include <stdio.h>

int main(){
	int arr[] = {14,16,34,68};
	int* ptr = arr;
	printf("Position one:%d\n",*ptr);
	for (int i = 0 ; i<5; i++){
		printf("%d\t",*ptr);
		printf("%p\t",ptr);
		printf("%p\n",&ptr);
		ptr++;
	}
}
