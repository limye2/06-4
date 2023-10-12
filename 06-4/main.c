//
//  main.c
//  06-4
//
//  Created by MacBook Air on 2023/10/12.
//

#include <stdio.h>

int square(int a)
{
    return(a*a);
}

int main(void)
{
    int a = 2;
    a=square(a);
    printf("a=%i\n",a);
    
    return 0;
}
