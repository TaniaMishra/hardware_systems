#include <stdio.h>

int main() {
        // Question 3
        // Section 1

        int a = 9;
        char c = 'a';
        float f = 9.0;
        double d = 123123123.00;

        int size_of_int = sizeof(int);
        int size_of_char = sizeof(char);
        int size_of_float = sizeof(float);
        int size_of_double = sizeof(double);

        printf("Value of a: %d\n", a);
        printf("Size of a: %d\n", sizeof(a));
        printf("Size of ints: %d\n", size_of_int);

        printf("Value of c: %c\n", c);
        printf("Size of c: %d\n", sizeof(c));
        printf("Size of chars: %d\n", size_of_char);

        printf("Value of f: %f\n", f);
        printf("Size of f: %d\n", sizeof(f));
        printf("Size of floats: %d\n", size_of_float);

        printf("Value of d: %lf\n", d);
        printf("Size of d: %d\n", sizeof(d));
        printf("Size of doubles: %d\n", size_of_double);

        // Section 2

        char c1 = 50;
        char c2 = '2';

        printf("c1: %c\n", c1);
        printf("c2: %c\n", c2);

        // Section 3

        char a1[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};

        int i;
        for (i = 0; i < 11; i++) {
                printf("Array Value: %c\n", a1[i]);
        }

        // Question 4
        double num = 123456.789;
        printf("num address: %d\n", &num);

        return 0;

}