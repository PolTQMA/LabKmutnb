#include<stdio.h>

int main() {
    float array[] = {100.8, 20.0, 30.3, 40.68, 55.0};
    int n = sizeof(array)/sizeof(array[0]);
    float max = array[0], min = array[0], average = 0;
    int indexMax = 0, indexMin = 0;
    float variance = 0;
    float num;

    printf("Enter num :");
    scanf("%f", &num);

    for(int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            indexMax = i;
        }
        if (array[i] < min) {
            min = array[i];
            indexMin = i;
        }
        if (array[i] == num) 
            printf("Your index : %d\n", i);
        average += array[i];
    }
    printf("max : %.2f at index : %d\n", max, indexMax);
    printf("min : %.2f at index : %d\n", min, indexMin);
    printf("average : %.2f\n", average/n);

    for(int i = 0; i < n; i++)
        variance += (array[i] - average/n) * (array[i] - average/n);
    variance /= n;
    printf("variance : %.2f",variance);
    return 0;
}