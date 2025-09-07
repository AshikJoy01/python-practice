#include <stdio.h>

int main() {
    int case_num = 1;
    int n;

    
    while (scanf("%d", &n) != EOF) {
        int numbers[n];
        char strings[n][21];

        for (int i = 0; i < n; i++) {
            scanf("%d %s", &numbers[i], strings[i]);
        }

        printf("Case %d: ", case_num++);

        int row_end = 1;
        int row_length = 1;

        while (row_end <= n) {
            printf("%s", strings[row_end - 1]);
            row_length++;
            row_end += row_length;

            if (row_end <= n) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
