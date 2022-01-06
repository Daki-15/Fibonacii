#include <stdio.h>
#include <stdlib.h>

int fibonacci_iter(int number){
    int n2, n0=0, n1=1;
    for(int i=1; i<number; i++){
        n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
    }
    return n2;
}

int fibonacci_rec(int number){
    if(number <= 1) return number;
    return fibonacci_rec(number - 1) + fibonacci_rec(number - 2);
}

int main(){
    int number;
    
    printf("Enter the number:\n> ");
    scanf("%d", &number);

    printf("The %d-th number is %d", number, fibonacci_iter(number));

    printf("\nThe %d-th number from recursiv calcul is %d", number, fibonacci_rec(number));

    return 0;
}