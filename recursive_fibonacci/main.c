#include <stdio.h>


int fib(int n)
{
    if(n==0){
        return 0;

    }else if(n == 1){
        return 1;

    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int number;

    scanf("%d", &number);
    printf("O numero da posição %d da sequencia é %d \n", number, fib(number));
    


    return 0;
}