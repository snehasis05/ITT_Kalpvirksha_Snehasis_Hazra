//Write a C program to read a string from the user and print it in reverse order
#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int len;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   len = strlen(str);

   printf("Reversed string: ");
   for (int i = len - 2; i >= 0; i--) {
      printf("%c", str[i]);
   }

   return 0;
}
