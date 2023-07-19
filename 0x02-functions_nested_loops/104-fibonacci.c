#include <stdio.h>

void print_fibonacci_sequence() {
    int a = 1, b = 2, c, count = 0;

    while (count < 98) {
        if (count < 97)
            printf("%d, ", a);
        else
            printf("%d\n", a);

        c = a + b;
        a = b;
        b = c;
        count++;
    }
}

int main() {
    print_fibonacci_sequence();
    return 0;
}
