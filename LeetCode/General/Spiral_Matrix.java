import java.util.*;
import java.lang.*;
import java.io.*;

public class Spiral_Matrix {

  /*
   * https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-
   * 2021/638/week-3-september-15th-september-21st/3977/
   */

  public List<Integer> spiralOrder(int[][] matrix) {

    ArrayList<Integer> result = new ArrayList<>();

    // Taking Record of all four corners
    int hStart = 0;
    int vStart = 0;
    int hEnd = matrix[0].length - 1;
    int vEnd = matrix.length - 1;

    while (vStart <= vEnd && hStart <= hEnd) {

      // till the corners cross each other

      // RIGHT->LEFT
      for (int i = hStart; i <= hEnd; i++) {
        result.add(matrix[vStart][i]);
      }
      vStart++;

      // TOP->BOTTOM
      for (int i = vStart; i <= vEnd; i++) {
        result.add(matrix[i][hEnd]);
      }
      hEnd--;

      // for center element / center 2 elements
      if (vStart > vEnd || hStart > hEnd)
        break;

      // LEFT->RIGHT
      for (int i = hEnd; i >= hStart; i--) {
        result.add(matrix[vEnd][i]);
      }
      vEnd--;

      // BOTTOM->TOP
      for (int i = vEnd; i >= vStart; i--) {
        result.add(matrix[i][hStart]);
      }
      hStart++;
    }

    return result;
  }
}
