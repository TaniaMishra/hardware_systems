#include <stdio.h>

int main() {
   unsigned int a = 63;
   printf("a = %u \n", a);

   printf("Enter b \n");
   unsigned int b;
   scanf("%u", &b);
   printf("You entered %u \n", b);
   
   return 0;
}
