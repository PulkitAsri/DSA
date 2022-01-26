import java.lang.*;
import java.io.*;
import java.util.*;

/**
 * Maximum_Points
 */
public class Maximum_Points {

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
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();

        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();

        double[][] marksPerMin = new double[3][3];

        marksPerMin[0][0] = x / (double) a;
        marksPerMin[1][0] = y / (double) b;
        marksPerMin[2][0] = z / (double) c;

        marksPerMin[0][1] = a;
        marksPerMin[1][1] = b;
        marksPerMin[2][1] = c;

        marksPerMin[0][2] = x;
        marksPerMin[1][2] = y;
        marksPerMin[2][2] = z;

        // Solution

        Arrays.sort(marksPerMin, Comparator.comparingDouble(o -> o[2]));
        Arrays.sort(marksPerMin, Comparator.comparingDouble(o -> o[0]));

        long maxMarks = 0;
        int totalques = 0;
        int totaltime = 0;

        for (int i = 2; i >= 0; i--) {
          for (int j = 0; j < 20; j++) {

            int minTaken = (int) marksPerMin[i][1];
            int marks = (int) (marksPerMin[i][0] * minTaken);

            if (totalques > 60 || totaltime + minTaken > 240)
              break;

            maxMarks += marks;
            System.out.println(maxMarks + " " + (j + 1));

            totaltime += minTaken;
            totalques++;
          }
        }

        System.out.println(maxMarks);

      }
    } catch (Exception e) {
    }

  }
}