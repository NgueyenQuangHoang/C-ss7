#include<stdio.h>

int main(){
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("gia tri thu %d: ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    
}