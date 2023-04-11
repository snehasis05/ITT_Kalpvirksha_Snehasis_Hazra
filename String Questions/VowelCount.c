//Program to count the number of vowels in a string
#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int len, i, count = 0;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   len = strlen(str);

   for (i = 0; i < len; i++) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
         count++;
      }
   }

   printf("Number of vowels: %d", count);

   return 0;
}
