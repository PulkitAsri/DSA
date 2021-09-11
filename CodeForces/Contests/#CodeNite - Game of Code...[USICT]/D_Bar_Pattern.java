
import java.util.*;
import java.lang.*;
import java.io.*;

/**
 * D_Bar_Pattern
 */
public class D_Bar_Pattern {

  public static void main(String[] args) {
    try {
      Scanner in = new Scanner(System.in);

      int n = in.nextInt();

      int[] arr = new int[n];
      int max = 0;
      for (int i = 0; i < n; i++) {
        arr[i] = in.nextInt();
        max = Math.max(max, arr[i]);
      }

      char[][] graph = new char[max][n];
      // filling the graph
      for (int i = max - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
          graph[i][j] = (arr[j] > 0) ? '*' : ' ';
          arr[j] -= 1;
        }
      }

      // showing teh graph
      for (int i = 0; i < max; i++) {
        for (int j = 0; j < n; j++) {
          System.out.print(graph[i][j]);
        }
        System.out.println();
      }
      in.close();
    } catch (Exception e) {
    }
  }
}