// FILLING JARS

#include<stdio.h>

int main() {
    int jars [100];

    for (int i = 0; i < 100; ++i) {
        jars[i] = 0;
    }

    int n = 0, m = 0;
    printf("Enter the number of jars you want : ");
    scanf("%d",&n);

    printf("Enter the number of operations : ");
    scanf("%d",&m);

    for (int i = 0; i < m; i++) {
        int a = 0, b = 0, k = 0;
        printf("Enter a : ");
        scanf("%d",&a);
        printf("Enter b : ");
        scanf("%d",&b);
        printf("Enter k : ");
        scanf("%d",&k);
        for (; a <= b; ++a) {
            jars[a] += k;
        }
    }

    int total = 0;
    int average = 0;

    for (unsigned int i = 0; i < 100; i++) {
        total += jars[i];
    }

    average = total/n;
    printf("Average number of candies is %d",average);
    return 0;
}