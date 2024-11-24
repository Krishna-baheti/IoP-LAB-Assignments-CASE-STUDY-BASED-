// BIGGER IS GREATER

#include<stdio.h>
#include<string.h>

void lexi_greater(char arr[]);

int main() {
    printf("Enter the string : "); // only lower case
    char str[100];
    scanf("%s",str);
    lexi_greater(str);
    return 0;
}

void lexi_greater(char str[]) {
    for (int i = 1; i < strlen(str); ++i){
        for (int j = 0; j < i; j++){
            if (str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("%s",str);
}