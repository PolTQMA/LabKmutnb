#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void fromLeft(char* text, int n) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (text[i] == 'a') {
            index = i;
            break;
        }
    }
    printf("Your index from left: %d\n", index);
}

void fromRight(char* text, int n) {
    int index = -1;
    for (int i = n-1; i >= 0; i--) {
        if (text[i] == 'a') {
            index = i;
            break;
        }
    }
    printf("Your index from right: %d\n", index);
}

void palindrome(char* text, int n) {
    int bool = 1;
    for (int i = 0; i < floor(n/2); i++) {
        if (text[i] != text[n-1-i]) {
            bool = 0;
            break;
        }
    }
    printf("Mirror valid: %d\n", bool);
}

int countChar(char* text, int n, char a) {
    int count = 0;
    for (int i = 0; i < n; i++) 
        if (text[i] == a)
            count++;
    return count;
}

int countVowels(char* text, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        text[i] = tolower(text[i]); 
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            count++;
    }
    return count;
}

int main() {
    char text[30];
    printf("Enter massage: ");
    scanf("%s", text);
    char a;
    printf("Enter char: ");
    scanf(" %c", &a);//skip \n
    int n = strlen(text);
    fromLeft(text, n);
    fromRight(text, n);
    palindrome(text, n);
    printf("Char: %d\n", countChar(text, n, a));
    printf("Vowels: %d\n", countVowels(text, n));
    return 0;
}