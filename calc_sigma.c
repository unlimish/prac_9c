#include<stdio.h>

int main(void){
    int min,max,sum;

    // imput
    printf("Enter minimum and maximum values sepereted by ,");
    scanf("%d,%d",&min,&max);

    // calc
    sum = (min + max) * (max - min + 1) / 2;

    // display
    printf("%d~%d の合計は %d です。\n",min,max,sum);
    return 0;
}