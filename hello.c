#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 2000;
    bool is_leap_year = (year%4 ==0) && (year%100 != 0 || year%400 ==0) ;

    if (is_leap_year)
    {
        printf("leap Year");
    }else{
        printf("Not leap Year");
    }
    
    
    return 0;
}

/* 
step 1 - Editing
step 2 - Copliling 
step 3 - Linking
step 4 - Executing
*/
