package DSA_Sheet.Arrays;

///////////////////// NOT COMPLETE ////////////////////////
public class merge_without_extra_space {
  public void merge(int arr1[], int arr2[], int n, int m) {

    int index1 = 0;
    int index2 = 0;
    int i = 0;

    int[] result = new int[n + m];

    while (index1 < n && index2 < m) {
      if (arr1[index1] < arr2[index2]) {
        result[i++] = arr1[index1++];
      } else {
        result[i++] = arr2[index2++];
      }
    }

    if (index1 == n) {
      // fill the rest with arr2 , arr1 exhausted
      while (index2 < m) {
        result[i++] = arr2[index2++];
      }

    } else {
      // fill the rest with arr1 , arr1 exhausted
      while (index1 < n) {
        result[i++] = arr1[index1++];
      }
    }

    index1 = 0;
    index2 = 0;
    i = 0;

    // while(index1<n){
    // arr[]
    // }

  }
}
