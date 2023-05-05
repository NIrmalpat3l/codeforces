#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char st[101];
        scanf("%s", st);
        int l = strlen(st);
        if (l <= 10) {
            printf("%s\n", st);
        } else {
            printf("%c%d%c\n", st[0], l - 2, st[l - 1]);
        }
    }
    return 0;
}