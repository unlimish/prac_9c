#include<stdio.h>

int main(void){
    int score;
    printf("Enter score");
    scanf("%d",&score);
    if(score > 100) score = 100;
    printf("Your score is %d",score);
    return 0;
}