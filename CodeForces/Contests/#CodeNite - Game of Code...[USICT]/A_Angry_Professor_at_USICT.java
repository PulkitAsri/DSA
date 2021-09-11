
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
/**
 * A_Angry_Professor_at_USICT
 */
public class A_Angry_Professor_at_USICT {

  public static void main(String[] args) {
    try {
      Scanner in = new Scanner(System.in);

      int n = in.nextInt();

      int[] arr = new int[n];
      int bunked = 0;
      int notBunked = 0;

      for (int i = 0; i < n; i++) {
        arr[i] = in.nextInt();
        if (arr[i] == 0)
          notBunked++;
        else
          bunked++;
      }
      System.out.println((bunked >= notBunked) ? "Yes" : "No");
      in.close();
    } catch (Exception e) {
    }
  }
}