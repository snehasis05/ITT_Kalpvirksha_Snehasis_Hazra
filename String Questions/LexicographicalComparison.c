// Program to find the lexicographically smallest and largest substring of a given string
#include <stdio.h>
#include <string.h>

int main() {
   char str[100], smallest[100], largest[100];
   int len, i, j, k;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   len = strlen(str) - 1;

   strcpy(smallest, str);
   strcpy(largest, str);

   for (i = 0; i < len; i++) {
      for (j = i + 1; j <= len; j++) {
         char sub[100];
         for (k = i; k < j; k++) {
            sub[k - i] = str[k];
         }
         sub[k - i] = '\0';

         if (strcmp(sub, smallest) < 0) {
            strcpy(smallest, sub);
         }
         if (strcmp(sub, largest) > 0) {
            strcpy(largest, sub);
         }
      }
   }

   printf("Smallest substring: %s\n", smallest);
   printf("Largest substring: %s\n", largest);

   return 0;
}
