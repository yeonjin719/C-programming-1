#include <stdio.h>
int convCase(int ch){
    // 모든 문자의 대소문자간 차의 크기는 같다.
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
    }

int main(void){
    int ch;
    printf("문장 입력: ");
    while (1){
        ch = getchar(); // 문자 입력
        if (ch == EOF)
            break;
        ch = convCase(ch); // 문자 변환
        putchar(ch); // 변환된 문자 출력
    }
    return 0;
}