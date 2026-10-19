//7.An environmental monitoring station logs temperature values across 3 consecutive days using 4 distinct
//hardware sensors, storing the readings in a 3x4 floating-point matrix. During a system audit, one of the
//sensors (e.g., Sensor at Column Index 1) was found to be faulty. You are required to write a C program that
//deletes the entire specified column and left-shifts the remaining columns.
//1. Declare and initialize a 3x4 floating-point array float sensor_data[3][4].
//2. Prompt the user to enter data for all 3 days and 4 sensors.
//3. Ask the user to specify the column index (0 to 3) corresponding to the defective sensor to be
//removed.
//4. Write Nested Loops to perform column deletion by left-shifting all columns beyond the target index:
//Sensor_data[r][c] = sensor_data[r][c+1]
//5. Display the updated 3x3 matrix with formatted decimal output.
#include <stdio.h>

int main() {
    float sensor_data[3][4] = {0};   
    int r;
    int c;
    int col;

    printf("Enter temperature readings (3 days x 4 sensors):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            printf("Day %d, Sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    printf("\nEnter the column index of the defective sensor (0 to 3): ");
    scanf("%d", &col);

    if (col < 0 || col > 3) {
        printf("Invalid column index!\n");
        return 1;
    }
    for (r = 0; r < 3; r++) {
        for (c = col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }
    printf("\nUpdated sensor data (3 x 3):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%.2f\t", sensor_data[r][c]);
        }
        printf("\n");
    }
}
