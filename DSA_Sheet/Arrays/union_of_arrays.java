package DSA_Sheet.Arrays;

import java.util.HashSet;

public class union_of_arrays {
  public static int doUnion(int a[], int n, int b[], int m) {
    HashSet<Integer> set = new HashSet<>();
    for (int x : a)
      set.add(x);
    for (int x : b)
      set.add(x);
    return set.size();
  }
}
