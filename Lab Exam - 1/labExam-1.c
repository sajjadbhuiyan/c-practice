#include<stdio.h>

int main(){
    int A, B, C; 
    scanf("%d %d %d", &A, &B, &C);

    if (A==5&&B==5&&C==7||A==5&&B==7&&C==5||A==7&&B==5&&C==5)
    {
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}

//  i / X && i / Y && ( i%X ==0 && i%Y ==0)


/* 
A :
char alphabet;
    char a = 'a', e= 'e', i= 'i', o = 'o', u = 'u';
    scanf("%c", &alphabet);

    if( alphabet == a || alphabet == e || alphabet == i ||alphabet == o || alphabet == u){
        printf("vowel");
    }else{
        printf("consonant");
    }

 */

/* 
C : 

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
    
*/


/* 
D :


    int n;
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        float A, B;
        scanf("%f %f", &A, &B);

        float result = A * B;
        sum += result;
    }

    printf("%.3f", sum);

 */

/* 
E :

int X, Y, N;
    scanf("%d %d %d", &X, &Y, &N);

    for (int i = 1; i < N+1; i++)
    {
        if(i / X && i%X ==0 && i%Y !=0){
            printf("Fizz\n");
        }else if( i / Y && i%Y ==0 && i%X !=0){
            printf("Buzz\n");
        }else if(i%X == 0 && i / X && i%Y == 0 && i / Y){
            printf("FizzBuzz\n");
        }else{
            printf("%d\n", i);
        }
    }
 */

/* 
F : 

int A, B, C; 
    scanf("%d %d %d", &A, &B, &C);

    if (A==5&&B==5&&C==7||A==5&&B==7&&C==5||A==7&&B==5&&C==5)
    {
        printf("YES");
    }else{
        printf("NO");
    }

 */

/* 
G :
int A, B, C ;
    scanf("%d %d %d", &A, &B, &C);
    if (C >= A && B >= C)
    {
        printf("Yes");
    }else{
        printf("No");
    }

 */


/* 
H :
int A, B ;
    scanf("%d %d", &A, &B);
    int sum = A + B; 

    if (sum >= 10)
    {
        printf("error");
    }else{
        printf("%d", sum);
    }    

 */

/* 
I :
int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);

    int sum1 = a + b;
    int sum2 = a + c; 
    int sum3 = b + c; 

    if (sum1 < sum2 && sum1 < sum3)
    {
        printf("%d", sum1);
    }else if (sum2 < sum1 && sum2 < sum3)
    {
        printf("%d", sum2);
    }else
    {
        printf("%d", sum3);
    }

 */


/* 
J :
int x;
    scanf("%d", &x);

    if (x < 1200)
    {
        printf("ABC");
    }else if( x >= 1200){
        printf("ARC");
    }
 */