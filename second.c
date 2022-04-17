//my first programming with c

#include<stdio.h>

int main(){
    int T, X;
    scanf("%d %d", &T, &X);
    double worldA = (double)T / (double)X;
    printf("%.10f", worldA);
return 0;
}
