package DSA_Sheet.Arrays;

import java.util.HashSet;

public class union_of_arrays {
  // Given two arrays a[] and b[] of size n and m respectively.
  // The task is to find union between these two arrays.
  // Union of the two arrays can be defined as the set containing distinct
  // elements from both the arrays.
  // If there are repetitions, then only one occurrence of element should be
  // printed in the union.

  // Example 1:

  // Input:
  // 5 3
  // 1 2 3 4 5
  // 1 2 3
  // Output:
  // 5

  public static int doUnion(int a[], int n, int b[], int m) {
    HashSet<Integer> set = new HashSet<>();
    for (int x : a)
      set.add(x);
    for (int x : b)
      set.add(x);

    // Add All the elements to a HASHSET as it only saves unique values
    // WHY? -> It makes hashes of the elements using a hash function (one to one,
    // irreversible function)

    return set.size();
  }

}
