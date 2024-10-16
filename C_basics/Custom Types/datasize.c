#include <stdio.h>
#include <stdlib.h>
int main(){
        int arr[] = {12,24,36,48,60};
        size_t size = sizeof(arr)/sizeof(arr[0]); //size_t is used to showcase the datasize structure of a variable
        printf("Size of array:%zu\n",size);
        printf("Size of size_t:%zu\n",sizeof(size_t));
        printf("Size of Int in Bytes:%zu\n", sizeof(int));

        return 0;
}