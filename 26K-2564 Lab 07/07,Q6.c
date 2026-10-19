//6. A manufacturing factory uses a 3x3 matrix to log daily production counts across 3 workstations,
//where each workstation handles 3 shifts per day. Due to an unplanned maintenance routine, an
//emergency shift must be added at a specific location, requiring a new row insertion at a designated
//index (e.g., Row Index 1). All subsequent rows must be shifted down accordingly.
//1. Declare a 2D integer array int shifts[4][3] (pre-allocated with extra row capacity) to store
//shift counts for up to 4 workstations.
//2. Prompt the user to input the initial 3x3 production data.
//3. Ask the user for the target row index where insertion should occur and input the 3 new
//production values.
//4. Use Nested Loops and element shifting logic to move all existing rows from the target index
//down by one position:
//Shift[i][j]=shift[i-1][j]
//5. Insert the new row values at the target row index and print the resulting 4 x3 matrix in a clean
//grid format.



#include <stdio.h>

int main() {
    int shifts[4][3];   
    int i;
    int j;
    int index;

    printf("Enter the production data (3 workstations x 3 shifts):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }
    printf("\nEnter the row index where the new row should be inserted (0 to 3): ");
    scanf("%d", &index);
    if (index < 0 || index > 3) {
        printf("Invalid index!\n");
        return 1;
	}
    for (i = 3; i > index; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }
    printf("Enter the 3 production values for the new row:\n");
    for (j = 0; j < 3; j++) {
        printf("Shift %d: ", j + 1);
        scanf("%d", &shifts[index][j]);
    }
    printf("\nUpdated production matrix (4 x 3):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n");
    }
}
