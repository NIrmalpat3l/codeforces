#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        char st[4];
        scanf("%s", st);
        if (st[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}