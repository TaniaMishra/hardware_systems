#include <stdio.h>

float addOdds(float *nums);

int main() {
        // Question 2
        char ar1[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};
        int i;

        for (i = 0; i < 11; i++){
                printf("%c\n", ar1[i]);
        }

        //Question 3
        float floatArray[] = {3.1, 2.1, 4.1, 5.1};
        float *fPtr = &floatArray[3];

        printf("Name of the variable fPtr: %p\n", fPtr);
        printf("*fPtr = %f\n", *fPtr);

        //Question 4
        float input[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
        float sum = addOdds(input);
        printf("Sum of odd indexed elements: %f\n", sum);

}

float addOdds(float *nums) {
        float sum = 0;
        int i;
        for (i = 1; i < 20; i+=2) {
                sum += nums[i];
        }
        return sum;
}