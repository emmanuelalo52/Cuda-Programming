#include <stdio.h>
typedef struct structsize
{
    float x;
    float y;
}Point;

int main(){
    Point p = {1.1,2.5};
    printf("size of Point: %zu\n", sizeof(Point));
}