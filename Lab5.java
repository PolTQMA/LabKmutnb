import java.util.Scanner;

public class Lab5 {
    public static void main(String[] args) {
        float[] array = {123.456f, 45.6789f, 7.89123f};
        int n = array.length;
        float max = array[0], min = array[0], sum = 0;
        int indexMax = 0, indexMin = 0;
        float variance = 0;
        try (Scanner x = new Scanner(System.in)) {//try
        System.out.print("Enter num :");
        float num = x.nextFloat();

        for(int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                indexMax = i;
            }
            if (array[i] < min) {
                min = array[i];
                indexMin = i;
            }
            if (array[i] == num) {
                System.out.println("Your index : " + i);
            }
            sum += array[i];
        }
        }//cau use x.close(); instead of try
        System.out.printf("max : %.2f at index : %d%n", max, indexMax);
        System.out.println("min : " + String.format("%.2f", min) + " at index : " + indexMin);
        System.out.println("average : " + String.format("%.2f", sum/n));

        for(int i = 0; i < n; i++)
            variance += (array[i] - sum/n) * (array[i] - sum/n);
        variance /= n;
        System.out.println("variance : " + String.format("%.2f", variance));
    }
}