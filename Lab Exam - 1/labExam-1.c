#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if(a < 0){
            count++;
        }
        
    }

    printf("%d", count);
    
    
    return 0;
}