package DSA_Sheet.Arrays;

public class sort_an_array_of_0_1_2s {

  public static void sort012(int a[], int n) {
    // MAKING A FREQ ARRAY
    // freq[0]-> frequency of 0's appears in array
    // freq[x]-> frequency of x's appears in array

    int[] freq = new int[3];
    for (int x : a) {
      freq[x]++;
    }
    int index = 0;
    for (int i = 0; i < 3; i++) {
      int x = freq[i];
      while (x-- > 0) {
        a[index++] = i;
      }
    }

  }
}