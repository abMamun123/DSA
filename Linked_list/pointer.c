#include<stdio.h>
int main(){
    int x = 10;
    int *ptr = &x;
    printf("%p\n",&x);
    printf("%d\n",*ptr);
}