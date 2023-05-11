#include<stdio.h>
int main() {
    int num, encrypt, passwd, key=2306;
    printf("input 4 numbers :"), scanf("%d", &num);
    encrypt = num^key;
    printf("encrypt : %d\n", encrypt);
    while(1) {
        printf("password :"), scanf("%d", &passwd);
        printf("original data : %d\n", encrypt^passwd);
        
    }
    
    return 0;
}