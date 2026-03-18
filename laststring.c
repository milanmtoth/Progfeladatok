#include <stdio.h>
#include <string.h>

int rfind_char(char s[], char c) {
    int i;
    int utolso_index = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            utolso_index = i; 
        }
    }
    return utolso_index;
}

int main(){
    printf("rfind_char(\"Abba\", 'b')   -> %d \n", rfind_char("Abba", 'b'));
    printf("rfind_char(\"Abba\", 'a')   -> %d \n", rfind_char("Abba", 'a'));
    printf("rfind_char(\"Abba\", 'x')   -> %d \n", rfind_char("Abba", 'x'));
    printf("rfind_char(\"Aladar\", 'a') -> %d \n", rfind_char("Aladar", 'a'));

    return 0;
}