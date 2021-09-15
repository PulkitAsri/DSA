import java.lang.*;
import java.io.*;
import java.util.*;

/**
 * Find_the_Direction
 */
class Find_the_Direction {

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
        int x = scan.nextInt();
        // Solution
        switch (x % 4) {
          case 0:
            System.out.println("North");
            break;
          case 1:
            System.out.println("East");
            break;
          case 2:
            System.out.println("South");
            break;
          case 3:
            System.out.println("West");
            break;
          default:
            break;
        }

      }
    } catch (Exception e) {
    }

  }
}