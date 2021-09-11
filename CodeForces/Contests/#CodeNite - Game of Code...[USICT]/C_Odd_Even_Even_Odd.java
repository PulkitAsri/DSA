
import java.util.*;
import java.lang.*;
import java.io.*;

/**
 * C_Odd_Even_Even_Odd
 */
public class C_Odd_Even_Even_Odd {

  public static void main(String[] args) {
    try {
      Scanner scan = new Scanner(System.in);

      int test = scan.nextInt();
      while (test-- > 0) {
        String number = scan.next();
        char[] chArr = number.toCharArray();
        int n = chArr.length - 1;

        int oddSum = 0, evenSum = 0;
        for (int i = 0; i <= n; i++) {
          int x = chArr[n - i] - '0';
          // System.out.println(x);
          if ((n - i) % 2 == 0) {
            // if even place
            oddSum += x;
          } else {
            evenSum += x;
          }
        }
        // System.out.println(oddSum + " " + evenSum);
        System.out.println(oddSum % 2 == 0 && evenSum % 2 == 1 ? "good" : "not good");

      }
    } catch (Exception e) {
    }
  }
}