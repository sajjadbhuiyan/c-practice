#include<stdio.h>

int main(){
    
    return 0;
}

//  i / X && i / Y && ( i%X ==0 && i%Y ==0)



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