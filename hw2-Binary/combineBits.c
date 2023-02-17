#include <stdio.h>

int combine(int x, int y);

int main() {
    // Test case 1: should be 104
    unsigned int x = 8;
    unsigned int y = 6;
    unsigned int z = combine(x, y);
    printf("%u and %u combined: %u\n", x,y,z);
    // Test case 2: should be 16027
    x = 101;
    y = 123;
    z = combine(x, y);
    printf("%u and %u combined: %u\n", x,y,z);
    // Test case 3: should be 13359
    x = 99;
    y = 71;
    z = combine(x, y);
    printf("%u and %u combined: %u\n", x,y,z);
}

int combine(int x, int y) {
    unsigned int z = 0;
    int i;
    int placeValue = 32768;     // first value to shift is the 15th indexed bit (2^15 = 32768)
    int shift = 16;             // first shift moves 16 places left
    for (i = 0; i < 32; i++) {
        if (i % 2 == 0) {
            unsigned int bit = y & placeValue;
            bit = bit << shift;
            z = z + bit;
            shift--;
        }
        else {
            unsigned int bit = x & placeValue;
            bit = bit << shift;
            z = z + bit;
            placeValue /= 2;
        }
    }
    return z;
}