
#include<stdio.h>   

int main() 
{ 
    int n, a = 0, b = 1, next, c;   
    n=6;   
    printf("First %d terms of Fibonacci series are :-\n",n);   
    for ( c = 0 ; c < n ; c++ ) 
    { 
        if ( c <= 1 ) next = c; 
        else 
        { 
            next = a+ b; 
            a = b; 
            b= next; 
        } 
        printf("%d\n",next); 
    }   
    return 0; 
}
