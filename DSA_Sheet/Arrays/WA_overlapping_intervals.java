package DSA_Sheet.Arrays;

import java.util.*;
import java.io.*;
import java.lang.*;

public class WA_overlapping_intervals {

  public int[][] merge(int[][] intervals) {

    // Ideas:
    // initiate an interval with start_i
    // ->if(end_i >= start_i+1) keeping going
    // else complete an interval and start again
    // WORKS

    Arrays.sort(intervals, Comparator.comparingInt(a -> a[0]));

    // for(int[] hh:intervals){
    // for(int h:hh){
    // System.out.print(h+" ");
    // }
    // System.out.println();
    // }

    ArrayList<ArrayList<Integer>> result = new ArrayList<>();
    ArrayList<Integer> newPair = new ArrayList<>();

    // Initiate the first Pair
    newPair.add(intervals[0][0]);

    for (int i = 0; i < intervals.length - 1; i++) {
      if (intervals[i][1] >= intervals[i + 1][0])
        continue; // keep the interval going
      else { // there is an overlap

        // complete the interval
        newPair.add(intervals[i][1]);
        result.add(newPair);

        // start a new interval
        newPair = new ArrayList<Integer>();
        newPair.add(intervals[i + 1][0]);
      }
    }
    // complete the last interval
    newPair.add(intervals[intervals.length - 1][1]);
    result.add(newPair);

    return convert2DListTo2DArray(result);

  }

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
