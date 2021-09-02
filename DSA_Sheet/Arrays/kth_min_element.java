package DSA_Sheet.Arrays;

public class kth_min_element {
  public static void sort012(int a[], int n) {
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
