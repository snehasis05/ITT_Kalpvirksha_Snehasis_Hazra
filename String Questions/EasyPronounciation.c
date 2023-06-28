#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int num_vowels = sizeof(vowels) / sizeof(char);
    for (int i = 0; i < num_vowels; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

char* is_easy_to_pronounce(char* s) {
    int consecutive_consonants = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (is_vowel(s[i])) {
            consecutive_consonants = 0;
        } else {
            consecutive_consonants++;
            if (consecutive_consonants >= 4) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[101];
        scanf("%d %s", &n, s);
        printf("%s\n", is_easy_to_pronounce(s));
    }
    return 0;
}
