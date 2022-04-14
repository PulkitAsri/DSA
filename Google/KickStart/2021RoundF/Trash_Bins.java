import java.lang.*;
import java.io.*;
import java.util.*;

/**
 * Trash_Bins
 */
public class Trash_Bins {

  static class FastReader {
    BufferedReader br;
    StringTokenizer st;

    public FastReader() {
      br = new BufferedReader(new InputStreamReader(System.in));
    }

    String next() {
      while (st == null || !st.hasMoreElements()) {
        try {
          st = new StringTokenizer(br.readLine());
        } catch (IOException e) {
          e.printStackTrace();
        }
      }
      return st.nextToken();
    }

    int nextInt() {
      return Integer.parseInt(next());
    }

    long nextLong() {
      return Long.parseLong(next());
    }

    double nextDouble() {
      return Double.parseDouble(next());
    }

    String nextLine() {
      String str = "";
      try {
        str = br.readLine();
      } catch (IOException e) {
        e.printStackTrace();
      }
      return str;
    }
  }

  public static void main(String[] args) {
    try {
      FastReader scan = new FastReader();

      int test = scan.nextInt();
      int nTest = test;
      while (test-- > 0) {

        // For Each Test Case
        int n = scan.nextInt();
        String s = scan.next();

        char[] chArr = s.toCharArray();

        int[] arr = new int[n];
        int[] costArray = new int[n];

        int i = 0;
        for (char c : chArr) {
          int bit = c - '0'; // 0 or 1
          arr[i] = bit;
          costArray[i] = bit == 1 ? 0 : Integer.MAX_VALUE;
          i++;
        }

        // SOLUTION

        boolean flag = false;
        int currentCost = 0;
        for (i = 0; i < n; i++) {
          currentCost++;
          if (costArray[i] == 0) {
            // reset
            flag = true;
            currentCost = 0;

            // backTrace
            int backCounter = 0;
            for (int j = i - 1; j >= 0; j--) {
              if (costArray[j] == 0)
                break;
              backCounter++;
              costArray[j] = Math.min(costArray[j], backCounter);
            }
          } else {
            if (flag)
              costArray[i] = currentCost;
          }
        }

        // DRY RUN
        // System.out.println(Arrays.toString(costArray));

        long sum = 0;
        // Calculating sum
        for (int x : costArray) {
          sum += x;
        }

        System.out.print("Case #" + (nTest - test) + ": ");
        System.out.print(sum);

        System.out.println();

      }
    } catch (Exception e) {
    }

  }
}