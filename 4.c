// GEM STONES

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n = 0;
    //Input the number of rocks the user want to enter
    printf("Enter the number of rocks you want to enter : ");
    scanf("%d",&n);

    char rock_names[100][100];

    //Input the names of the rock
    for (int i = 0; i < n; ++i){
        printf("Enter the name of rock %d : ",i+1);
        scanf("%s",rock_names[i]);
    }

    //Printing the rocks
    /*
    for (size_t i = 0; i < n; ++i){
        for (size_t j = 0; j < 100; ++j){
            int temp = isalpha(rock_names[i][j]);
            if (temp == 0){
                    break;
            }
            printf("%c",rock_names[i][j]);
        }
        printf("\n");
    }
    */
   
    char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
    int alphabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < 100; ++j){
            for (int k = 0; k < 26; ++k){
                if (rock_names[i][j] == alphabets[k]){
                    ++alphabet[k];
                }
            }
        }
    }

    int count = 0;

    for (int i = 0; i < 26; ++i){
        if (alphabet[i] == n){
            count++;
        }
    }

    printf("%d",count);

}