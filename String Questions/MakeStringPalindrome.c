//Program to find the minimum number of characters to be inserted in a string to convert it into a palindrome
#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int len, i, j, count = 0;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   len = strlen(str) - 1;

   for (i = 0, j = len - 1; i < j; i++, j--) {
      if (str[i] != str[j]) {
         count++;
         if (str[i] < str[j]) {
            j++;
         } else {
            i--;
         }
      }
   }

   printf("Minimum number of characters to be inserted: %d", count);

   return 0;
}
