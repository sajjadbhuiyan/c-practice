#include<stdio.h>

int main(){
    
    
    return 0;
}

/* 

Takahashi and Aoki decided to train themselves by running.
Takahashi repeats the following schedule: "Run for A seconds at B meters per second and then rest for C seconds."
Aoki repeats the following schedule: "Run for D seconds at E meters per second and then rest for F seconds."
When X seconds have passed since they simultaneously started running, which of Takahashi and Aoki is ahead?
 */

    // Wrong answer on test 4

/* 
A :
int N, K, A, count = 0;
    scanf("%d %d %d", &N, &K, &A);
    int i = A;
    while (i <= N)
    {
        printf("%d\n", i);
        count++;
        if (i >= N)
        {
            i = 1;
            while ( i <= (K - count))
            {
                printf("%d\n", i);
                count++;
                if (i >= N)
                {
                    i = 1;
                    while (i <= (K - count))
                    {
                        printf("%d\n", i);
                        i++;
                    }
                    return 0;
                }else{
                    i++;
                }
            }
              
        }else{
            i++;
        }
        
        
    }
    
*/

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


/* 
G :

int A, B, count = 0;
    scanf("%d %d", &A, &B);
    
    for (int i = A; i <= B; i++)
    {
        count++;
    }
    printf("%d", count);

 */


/* 
H :

int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            if (i == n)
            {
                printf("I hate it\t");
            }else{
                if (i != n)
                {
                    printf("I hate that\t");
                }else{
                    printf("I hate\t");
                }
            }
            
        }else{

            if ( i == n)
            {
                printf("I love it\t");
            }else{
                if (i != n)
                {
                    printf("I love that\t");
                }else{
                    printf("I love\t");
                }
            }
        }
        
    }
 */



/* 
I :

int X;
    scanf("%d", &X);
    if (X >= 0 && X <= 100 )
        {
            if (X < 40)
        {
            printf("%d", 40 - X);
        }else if (X >= 40 && X < 70)
        {
            printf("%d", 70 - X);
        }else if (X >= 70 && X < 90)
        {
            printf("%d", 90 - X);
        }else if (X >= 90)
        {
            printf("expert");
        }  
    }
 */