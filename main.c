#include <stdio.h>


void task1() {
    printf("Aufgabe 1:\n\n");

    int result = 0;

    for(int i = 1; i <= 100; i++){
        result = result + i;
    }

    printf("Die Summe aus allen Zahlen von 0-100 ist %d.\n\n", result);
}

void task2(){
    printf("Aufgabe 2:\n\n");

    int limit = 10;

    printf("0\t|");

    for(int i = 1; i <= limit; i++){
        printf("%d\t", i);
    }

    printf("\n");

    for(int i = 0; i <= limit; i++){
        printf("--------");
    }

    printf("\n");

    for(int i = 1; i <= limit; i++){
        printf("%d\t|",i);
        for(int j = 1; j <= limit; j++){
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    printf("\n\n");
}

int main()
{
    task1();
    task2();
    return 0;
}
