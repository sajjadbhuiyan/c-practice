#include<stdio.h>
int main(){
    
    return 0;
}


/* 
B :

int n, pi, qi;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &pi, &qi);
        if( pi != qi){
            count ++;
        };
    };
    printf("%d", count);
 */

/* 
C :

int S, T, X;
    scanf("%d %d %d", &S, &T, &X);

    if(S - T >= 0 && S != X && S != T){
        printf("No");
    }else{
        printf("Yes");
    } 

 */


/* 
D :

int n;
    scanf("%d", &n);
    char A = 'A';
    char D = 'D';
    int count1 = 0;
    int count2 = 0;
    char s;
    for (int i = 0; i < n; i++){
        scanf("%s", &s);

        if (s == 'A')
        {
            count1++;
        }else if (s == 'D')
        {
            count2++;
        } 
    } 
    if (count1 > count2)
    {
        printf("Anton");
    }else if (count2 > count1)
    {
        printf("Danik");
    }else{
        printf("Friendship");
    }

    // Idleness limit exceeded on test 1

 */