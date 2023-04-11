// finding the length of a string without using strlen() function in C

#include <stdio.h>

int main() {
   char str[100];
   int len = 0, i;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   for (i = 0; str[i] != '\0'; i++) {
      len++;
   }

   printf("Length of string: %d", len);

   return 0;
}
