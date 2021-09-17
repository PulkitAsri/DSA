public class Longest_Turbulent_Subarray {

  /*
   * https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-
   * 2021/638/week-3-september-15th-september-21st/3976/
   */
  public int maxTurbulenceSize(int[] arr) {
    int n = arr.length;

    if (arr.length == 1)
      return 1;

    int maxSize = 1;
    int tempMaxChanges = 0;
    boolean prevIsGreater = false;

    for (int i = 1; i < n; i++) {

      boolean currentIsGreater = arr[i] > arr[i - 1];

      // XOR -> A^B means A and B are different (AB' + A'B)
      boolean isDifferent = (i == 1) ? currentIsGreater : (prevIsGreater ^ currentIsGreater);

      if (arr[i] == arr[i - 1])
        tempMaxChanges--;

      if (isDifferent && (arr[i] != arr[i - 1])) {
        // Flipped
        tempMaxChanges++;

      } else {
        tempMaxChanges = 1;
        if (arr[i] == arr[i - 1])
          tempMaxChanges--;
      }

      maxSize = Math.max(maxSize, tempMaxChanges + 1);
      // updating for next
      prevIsGreater = currentIsGreater;
    }

    return maxSize;
  }
}
