// FIND DIGITS

#include<stdio.h>

int find_digits(int);

int main() {
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    int digits = find_digits(n);
    printf("%d\n",digits);
    return 0;
}

int find_digits(int n) {
    int temp = n, count = 0,rem;
    while(n != 0) {
        rem = n % 10;
        if(temp % rem == 0) {
            count++;
        }
        n = n / 10;
    }
    return count;
}