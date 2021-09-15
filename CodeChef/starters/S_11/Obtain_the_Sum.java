import java.lang.*;
import java.math.BigInteger;
import java.io.*;
import java.util.*;

/**
 * The_Two_Dishes
 */
/**
 * Obtain_the_Sum
 */

class Obtain_the_Sum {

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
        String nStr = scan.next();
        String sStr = scan.next();

        BigInteger n = new BigInteger(nStr);
        BigInteger s = new BigInteger(sStr);

        // Solution

        BigInteger sum = n.multiply(n.add(new BigInteger("1"))).divide(new BigInteger("2"));

        int compare = sum.compareTo(s);
        int compareLessThanN = sum.subtract(s).compareTo(n);

        System.out.println(compare > 0 && compareLessThanN <= 0 ? sum.subtract(s) : -1);
      }
    } catch (Exception e) {
    }

  }

}