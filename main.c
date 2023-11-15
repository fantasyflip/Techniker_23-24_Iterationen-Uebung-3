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

void task3(){
    int result;
    printf("Aufgabe 3:\n\n");

    for(int i = 0; i <=1; i++){
        printf("%c)\n\n",i == 0? 'a':'b');
        printf("a # b # c # d #");
        i == 0 ? printf(" a && b || c && d\n") : printf(" a && (b || c) && d\n");
        printf("--------------------------------\n");

        for(int a = 0; a <= 1; a++){

            for(int b = 0; b <= 1; b++){

                for(int c = 0; c <= 1; c++){

                    for(int d = 0; d <= 1; d++){

                        if(i == 0){
                            printf("%d # %d # %d # %d # \t%d\n",a,b,c,d, a&&b||c&&d?1:0);
                        } else {
                            printf("%d # %d # %d # %d # \t%d\n",a,b,c,d, a&&(b||c)&&d?1:0);
                        }

                    }
                }
            }
        }

        printf("\n\n");
    }
}

int main()
{
    task1();
    task2();
    task3();
    return 0;
}
