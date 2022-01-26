
import java.lang.*;
import java.io.*;
import java.util.*;

public class SelectionSortRecursion {

  public <T extends Comparable<T>> T[] sort(T[] unsorted) {
    doSort(unsorted, 0, unsorted.length);
    return unsorted;
  }

  private static <T extends Comparable<T>> int getMin(T[] arr, int currentPosition, int size) {

    if (currentPosition == size - 1) {
      return size - 1;
    }

    int ans = getMin(arr, currentPosition + 1, size);

    if (arr[currentPosition].compareTo(arr[ans]) < 0) {

      ans = currentPosition;
    }

    return ans;
  }

  private static <T extends Comparable<T>> void doSort(T[] arr, int currentPosition, int size) {
    // @SuppressWarnings("unchecked")

    if (currentPosition == size) {
      return;
    }

    int indexOfMinElement = getMin(arr, currentPosition, size);

    if (indexOfMinElement != currentPosition) {

      T temp = arr[currentPosition];
      arr[currentPosition] = arr[indexOfMinElement];
      arr[indexOfMinElement] = temp;
    }

    doSort(arr, currentPosition + 1, size);
  }

  public static void main(String[] args) {
    SelectionSortRecursion selectionSort = new SelectionSortRecursion();

    Integer[] arr = { 4, 23, 6, 78, 1, 54, 231, 9, 12 };
    selectionSort.sort(arr);
    for (int i = 0; i < arr.length - 1; ++i) {
      assert arr[i] > arr[i + 1] : "maa chudi pdi h";
    }
    System.out.println(Arrays.toString(arr));

    String[] stringArray = { "c", "a", "e", "b", "d" };
    selectionSort.sort(stringArray);
    for (int i = 0; i < stringArray.length - 1; ++i) {
      assert arr[i].compareTo(arr[i + 1]) <= 0;
    }
  }
}
