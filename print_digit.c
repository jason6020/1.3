#include <stdio.h>

void print_digit(int);

int main(int argc, char *argv[]) {
    print_digit(-124);
    printf("\n");
    print_digit(0);
    printf("\n");
    print_digit(12343);
    printf("\n");
    return 0;
}

void print_digit(int a) {
    
    int tmp = a;
    if (a < 0) {
        printf("-");
        tmp = -a;
    }

    if (tmp > 10) {
        print_digit(tmp/10);
    }
    printf("%d", tmp%10);
}
