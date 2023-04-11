#include <stdio.h>
#include <string.h>

// Function to return value of a Roman numeral character
int romanToInt(char c) {
   switch (c) {
      case 'I': return 1;
      case 'V': return 5;
      case 'X': return 10;
      case 'L': return 50;
      case 'C': return 100;
      case 'D': return 500;
      case 'M': return 1000;
      default: return 0;
   }
}

// Function to convert Roman numerals to integers
int romanToDecimal(char* roman) {
   int i, len = strlen(roman), num = 0;

   for (i = 0; i < len; i++) {
      int s1 = romanToInt(roman[i]);
      if (i+1 < len) {
         int s2 = romanToInt(roman[i+1]);
         if (s1 >= s2) {
            num += s1;
         } else {
            num += s2 - s1;
            i++;
         }
      } else {
         num += s1;
      }
   }

   return num;
}

// Main function to test the above functions
int main() {
   char roman[20], input[40];

   printf("Enter a Roman numeral with spaces between each character: ");
   fgets(input, 40, stdin);

   // Remove any spaces from the input string
   int i, j;
   for (i = 0, j = 0; input[i] != '\0'; i++) {
      if (input[i] != ' ') {
         roman[j++] = input[i];
      }
   }
   roman[j] = '\0';

   int decimal = romanToDecimal(roman);

   printf("The decimal value of %s is %d\n", roman, decimal);

   return 0;
}
