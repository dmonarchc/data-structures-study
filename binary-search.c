#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int array[], int size, int target) {
  int low = 0;
  int high = size - 1;
  while (low <= high) {
    int mid = low + (high - low ) / 2; // This prevents overflow
    // Check if target is present at mid
    if(array[mid] == target) {
      return mid; // Target found
    }

    // If target greated, ignore left half
    if(array[mid] < target) {
      low = mid + 1;
    } else { // If target is smaller, ignore right half
      high = mid - 1;
    }
  }
  return -1; // Target not found
}


int main() {
    int array[] = {2, 3, 4, 10, 40};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 10;
    int result = binarySearch(array, n, target);

    if(result == -1) {
      printf("Element is not present in array.");
    } else {
      printf("Element is present at index %d", result);
    }

    return 0;
}
