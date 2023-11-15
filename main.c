#include <stdio.h>


void task1() {
    int result = 0;

    for(int i = 1; i <= 100; i++){
        result = result + i;
    }

    printf("Die Summe aus allen Zahlen von 0-100 ist %d.\n\n", result);
}

int main()
{
    printf("Aufgabe 1:\n\n");
    task1();
    return 0;
}
