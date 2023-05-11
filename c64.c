#include<stdio.h>
int main() 
{
    int korean;
    int math, english, total;
    float average;
    int science = 95, history = 92;
    char grade ='a';
    korean =0, math = 0, english = 0;
    total = korean + math + english + science + history;
    average = total / 5.0;
    printf("total: %d, average: %.1f, grade: %c\n", total, average, grade);

    return 0;

}