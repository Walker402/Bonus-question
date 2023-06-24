//Hunter Walker Bonus 

#include <stdio.h>
#include <string.h>

void Swap(char *x, char *y) {
char temp = *x;
*x = *y;
*y = temp;
}

void Permute(char str[], int l, int r) {
if (l == r) {
printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            Swap(&str[l], &str[i]);
            Permute(str, l + 1, r);
            Swap(&str[l], &str[i]); //Backtracking to return to the og
        }
    }
}

void RecursivePermute(char str[]) {
int length = strlen(str);
Permute(str, 0, length - 1);
}

int main() {
char str[] = "abc";
RecursivePermute(str);
return 0;
}
