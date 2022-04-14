import java.lang.*;
import java.io.*;
import java.util.*;

/**
 * Festival
 */
public class Festival {
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
        int d = scan.nextInt();
        int n = scan.nextInt();
        int k = scan.nextInt();

        int[] happyArr = new int[n];
        int[] startingDates = new int[n];
        int[] endingDates = new int[n];

        // Inputs
        for (int i = 0; i < n; i++) {

          happyArr[i] = scan.nextInt();
          startingDates[i] = scan.nextInt();
          endingDates[i] = scan.nextInt();
        }

        // Solution
        int[][] EachDayHappiness = new int[d + 1][n + 1];
        int[] eachDaySize = new int[d + 1];

        for (int i = 0; i < n; i++) {
          for (int j = startingDates[i]; j <= endingDates[i]; j++) {
            EachDayHappiness[j][eachDaySize[j]++] = happyArr[i];
          }
        }

        long result = 0;
        for (int i = 1; i <= d; i++) {
          // For Each Day
          // Check top "k" elements
          long sum = 0;
          Arrays.sort(EachDayHappiness[i]);

          for (int j = 0; j < k; j++) {
            sum += EachDayHappiness[i][n - j];
          }
          result = Math.max(result, sum);
        }

        // Printing
        System.out.print("Case #" + (nTest - test) + ": ");
        System.out.print(result);

        System.out.println();
      }
    } catch (Exception e) {
    }

  }
}