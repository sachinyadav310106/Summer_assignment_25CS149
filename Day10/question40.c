#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;

    for(i = 1; i <= rows; i++) {

       
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        for(ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        for(ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}