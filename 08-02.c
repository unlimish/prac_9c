#include<stdio.h>

int main(void){
    int age;
    printf("Age:");
    scanf("%d",&age);
    if(age <= 3) printf("幼児:無料\n");
    if(age >= 4 && age <= 12) printf("子供:250円\n");
    if(age >= 13) printf("大人:400円\n");
    return 0;
}