import java.lang.*;
import java.io.*;
import java.util.*;

/**
 * The_Two_Dishes
 */
class The_Two_Dishes {
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
      while (test-- > 0) {

        // For Each Test Case
        int n = scan.nextInt();
        int s = scan.nextInt();

        // Solution
        System.out.println((s <= n) ? s : n - (s - n));
      }
    } catch (Exception e) {
    }

  }

}