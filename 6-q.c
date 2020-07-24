// 3-1
#include<stdio.h>

int main(void)
{
    int price = 0;
    int offOne,offThree,offFive,offEight;

    printf("Enter the price:");
    scanf("%d",&price);

    offOne = price * 0.9;
    offThree = price * 0.7;
    offFive = price * 0.5;
    offEight = price * 0.2;

    printf("1割引: %d円\n3割引: %d円\n5割引: %d円\n8割引: %d円\n",offOne,offThree,offFive,offEight);
    return 0;
}
