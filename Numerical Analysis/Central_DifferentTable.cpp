#include <stdio.h>
void central_difference_table(int n) {
    float x[20], y[20][20];

    printf("Enter the values of x and corresponding y:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);

        printf("y[%d] = ", i);
        scanf("%f", &y[i][0]);
    }
    for (int i = 1; i < n; i++) { 
        for (int j = 0; j < n - i; j++) {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
    printf("\nCENTRAL DIFFERENCE TABLE\n");
    printf("--------------------------------------------------\n");
    printf("|   x   |    y    | Δy  | Δ²y  | Δ³y  | Δ⁴y  | ... |\n");
    printf("--------------------------------------------------\n");

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        printf("| %5.2f |", x[i]);
        for (int j = 0; j < n - i; j++) {
            printf(" %6.2f |", y[i + (mid - i)][j]); // Adjusted indexing for central difference
        }
        printf("\n");
    }

    printf("--------------------------------------------------\n");
}

int main() {
    int n;
    printf("Enter the size of the table (max 20): ");
    scanf("%d", &n);

    if (n > 20 || n < 2) {
        printf("Invalid input! Please enter a number between 2 and 20.\n");
        return 1;
    }

    central_difference_table(n);
    return 0;
}
