#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op){
        case '+':
            printf("%d", a+b );
            break;
        case '-':
            printf("%d", a-b );
            break;
        case '*':
            printf("%d", a*b );
            break;
        case '/':
            printf("%d", a/b );
            break;
    };
    
    
    
    return 0;
}

/* 
step 1 - Editing
step 2 - Copliling 
step 3 - Linking
step 4 - Executing
*/
