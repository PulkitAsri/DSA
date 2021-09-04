package DSA_Sheet.Arrays;

import java.util.*;
import java.io.*;
import java.lang.*;

public class WA_overlapping_intervals {

  public int[][] merge(int[][] intervals) {

    Arrays.sort(intervals, Comparator.comparingInt(a -> a[0]));

    ArrayList<ArrayList<Integer>> result = new ArrayList<>();
    ArrayList<Integer> newPair = new ArrayList<>();

    // Initiate the first Pair
    newPair.add(intervals[0][0]);
    int currentRangeMax = intervals[0][1];

    for (int i = 0; i < intervals.length - 1; i++) {
      if (currentRangeMax >= intervals[i + 1][0]) {
        // Some KindOf Overlap
        // Keep the interval going

        if (intervals[i + 1][1] < currentRangeMax) {
          // the interval is already included
          // eg: [1,8] already has [2,3]
          // <---------------->
          // <---->

          // do nothing...just ignore..already included

          continue;
        } else {
          // the range interval is expanded
          // <------------><end>
          // <======> OVERLAP
          // <--------------><end>

          // just shift the end

          currentRangeMax = intervals[i + 1][1];

        }
      } else {
        // there is no overlap
        // <------>
        // <-------->

        // So finish and start a new interval

        // complete the interval with current range max
        newPair.add(currentRangeMax);
        result.add(newPair);

        // start a new interval
        newPair = new ArrayList<Integer>();
        newPair.add(intervals[i + 1][0]);
        currentRangeMax = intervals[i + 1][1];
      }
    }
    // complete the last interval
    newPair.add(currentRangeMax);
    result.add(newPair);

    return convert2DListTo2DArray(result);

  }

  // AUXIALLY FUNCTION
  public int[][] convert2DListTo2DArray(ArrayList<ArrayList<Integer>> list) {
    int[][] result = new int[list.size()][2];
    int i = 0;
    for (ArrayList<Integer> pair : list) {
      result[i][0] = pair.get(0);
      result[i][1] = pair.get(1);
      i++;
    }
    return result;
  }
}
