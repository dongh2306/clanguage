#include<stdio.h>
int main() {
    int total;
    char average;
    scanf("%d", &total);
    // fflush(stdin);
    // scanf("%*c%c", &average);
    while(getchar()!='\n')
    scanf("%c", &average);
    printf("input : %d, %c\n",total , average);
    return 0;
}