#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    char data[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &data[i]);
        printf("%s ", data[i]);
    }

    return 0;
}