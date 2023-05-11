#include<stdio.h>
// #define PI 3.14159265
int main() {
    int radius=5;
    const double PI = 3.141592652;
    double cir = 2*radius*PI;
    printf("radius : %d, circumference : %f\n", radius, cir);
    return 0;
}