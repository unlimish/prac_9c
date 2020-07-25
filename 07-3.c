#include<stdio.h>

int main(void){
    int score;
    printf("Enter score");
    scanf("%d",&score);
    if(score > 100){
        printf("Your entered score is bigger than 100 so I'll edit to 100.\n");
        score = 100;
    }
    printf("Your score is %d",score);
    return 0;
}