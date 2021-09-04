package DSA_Sheet.Arrays;

public class cyclic_rotation_of_array {

  public void rotate(int arr[], int n) {
    int x = arr[n - 1];
    for (int i = n - 1; i >= 1; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = x;
  }

  public void rotateBy(int arr[], int n, int k) {

    int[] newArr = new int[n];
    for (int i = 0; i < n; i++) {
      newArr[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
      arr[i] = newArr[i];
    }
  }
}
