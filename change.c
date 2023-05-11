#include<stdio.h>
int main() {
    int dodo, gogo;
    int total, deposit, change; 
    int menu;
    int w500, w100, w50, w10;
    int cnt_dodo, cnt_gogo;

    while(1) {
        printf("dodo:70, gogo:30, \n");
        printf("how many? \n");
        scanf("%d %d", &cnt_dodo, &cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo + gogo;
        printf("total price : %d\n", total);
        printf("money plz\n");
        scanf("%d", &deposit);
        if(deposit>total); {
            change =deposit - total;
            w500 = change / 500;
            w100 = change % 500 / 100;
            w50 = change % 500 % 100 / 50;
            w10 = change % 500 % 100 % 50 / 10;
            printf("dodo's total price : %d\n", dodo);
            printf("toto's total price : %d\n", gogo);
            printf("change : %d\n", change);
            printf("w500 : %d\n", w500);
            printf("w100 : %d\n", w100);
            printf("w50 : %d\n", w50);
            printf("w10 : %d\n", w10);
            printf("#############################\n\n");
            printf("keep again? yes=1/no=2");
            scanf("%d", &menu);
            if(menu==1) {
                continue;
            } else  {
                break;
            }
        }

        return 0;
    }
}