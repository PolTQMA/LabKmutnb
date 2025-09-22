#include <stdio.h>

float avarge(float arr[][7], int n) {
    float avg = 0;
    if (n == 0) {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 7; j++)
                avg += arr[i][j];
        avg /= 28;
    }
    else {
        for (int j = 0; j < 7; j++)
            avg += arr[n-1][j];
        avg /= 7;
    }
    return avg;
}

float variance(float arr[][7], int n) {
    float mean = avarge(arr, n);
    float var = 0;
    if (n == 0) {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 7; j++)
                var += (arr[i][j]-mean)*(arr[i][j]-mean);
        var /= 28;
    }
    else {
        for (int j = 0; j < 7; j++)
            var += (arr[n-1][j]-mean)*(arr[n-1][j]-mean);
        var /= 7;
    }
    return var;
}

float* findMaxMin(float arr[][7], int row, int col, float* min, float* max) {
    *min = arr[0][0];
    *max = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 1; j < col; j++) {
            if (*min > arr[i][j])
                *min = arr[i][j];
            else if (*max < arr[i][j])
                *max = arr[i][j];
        }
    }
}

int isFound(float arr[][7], int row, int col, float n) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (n == arr[i][j])
                return 1;
    return 0;
}

int main() {
    float arr[][7] = {
        {30.5, 31.0, 29.8, 28.9, 30.2, 31.1, 30.0}, 
        {29.5, 30.0, 28.5, 27.9, 29.2, 30.3, 29.7}, 
        {31.0, 32.1, 30.8, 31.5, 30.9, 32.0, 31.7}, 
        {28.0, 28.5, 27.8, 28.2, 28.9, 29.0, 28.6}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    int week;
    printf("Week(0 for all): ");
    scanf("%d", &week);
    float num;
    printf("Enter num: ");
    scanf("%f", &num);
    float min, max;
    findMaxMin(arr, rows, cols, &min, &max);
    printf("Min: %.2f, Max: %.2f\n", min, max);
    printf("isFound(%.2f): %d\n", num, isFound(arr, rows, cols, num));
    float mean = avarge(arr, week);
    float var = variance(arr, week);
    printf("mean: %.3f\n", mean);
    printf("variance: %.3f\n", var);
    return 0;
}