#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[6], str2[6];
  char result[6];
  int noOfTestcase;
  scanf("%d", &noOfTestcase);
  while (noOfTestcase != 0) {
    scanf("%s", str1);
    scanf("%s", str2);
    int len = strlen(str1) < strlen(str2) ? strlen(str1) : strlen(str2);
    for (int i = 0; i < len; i++) {
      if (str1[i] == str2[i]) {
        result[i] = 'G';
      } else {
        result[i] = 'B';
      }
    }
    result[len] = '\0';
    printf("%s\n", result);
    noOfTestcase--;
  }
  return 0;
}
