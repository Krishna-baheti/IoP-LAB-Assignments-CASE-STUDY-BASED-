#include<stdio.h>

void fibo(int);

int main() {
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}

void fibo(int n) {
    int first = 0, second = 1, i;
    int arr[n];
    arr[0] = 0;
    for(int i = 1; i < n + 2; i++) {
        arr[i] = second;
        int next = first + second;
        first = second;
        second = next;
    }
    int flag = 0;
    for(int i = 0; i < n + 2; i++) {
        if(n == arr[i]) {
            printf("IsFibo\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("IsNotFibo\n");
    }
}

 