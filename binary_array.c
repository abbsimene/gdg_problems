
#include <stdio.h>
#include <string.h>

int main() {
    char nums[1000];
    char result[1001];
    char word[1001];
    int n;

    printf("Give us a number n:\n");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Error: n must be between 1 and 1000.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int valid = 0;

        while (!valid) {
            printf("Give us a binary string of length %d:\n", n);
            scanf("%1000s", word);

            if (strlen(word) != n) {
                printf("Error: The string must have exactly %d characters. Try again.\n", n);
                continue;
            }

            valid = 1;

            for (int j = 0; j < n; j++) {
                if (word[j] != '0' && word[j] != '1') {
                    printf("Error: Only 0 and 1 are allowed. Try again.\n");
                    valid = 0;
                    break;
                }
            }
        }

        nums[i] = (word[i] == '0') ? '1' : '0';
    }

    for (int i = 0; i < n; i++) {
        result[i] = nums[i];
    }

    result[n] = '\0';

    printf("The result is: %s\n", result);

    return 0;
}
