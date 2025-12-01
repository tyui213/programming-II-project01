#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_digits(int n) {
    int count = 0;

    if (n == 0)
        return 1;

    while (n > 0) 
    {
        n /= 10; //n을 10으로 나누어 자릿수 
        count++;
    }
    return count;
}

int main(void) {
    int n;

    //첫번째 정수 입력
    printf("정수? ");
    scanf("%d", &n);
    printf("count of digits: %d\n\n", count_digits(n));

    //두번쨰 정수 입력
    printf("정수? ");
    scanf("%d", &n);
    printf("count of digits: %d\n", count_digits(n));

    return 0;
}