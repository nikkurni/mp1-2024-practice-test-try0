// Задача 1. Найти сумму целых чисел a и b. 
// Если a + b >= INT_MAX, возвращать INT_MAX 
// Если a + b <= INT_MIN, возвращать INT_MIN 
 
#include <stdio.h> 
#include <limits.h> 
 
 
int sum_of_two_numbers(int a, int b) 
{ 
    if (a>0 && b>INT_MAX-a) 
    { 
        return INT_MAX; 
    } 
    if(a<0 && b < INT_MIN-a) 
    { 
        return INT_MIN; 
    } 
    return a+b; 
} 
 
int main(){ 
    int a,b; 
    a = 1000000; 
    b = 20; 
    printf("%d",sum_of_two_numbers(a,b)); 
}
