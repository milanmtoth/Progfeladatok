#include <stdio.h>
#include <string.h>

void abc(char str[]){
    for(int i = 0; i < 26;i++){
        str[i] = 'a' + i;
    }
    str[26] = '\0';

}

int main(){
    char abc_string[27];
    abc(abc_string);

    printf("%s\n",abc_string);
    return 0;
}