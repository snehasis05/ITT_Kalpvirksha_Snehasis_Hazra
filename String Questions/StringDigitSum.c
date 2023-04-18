#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[100];
        scanf("%s", s);
        int total = 0;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                total += (s[i] - '0');
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
