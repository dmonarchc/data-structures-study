#include <stdio.h>

// Function to perform linear search
int linear_search(int arr[], int n, int target) {
  for (int i = 0 ; i < n; i++) {
    if (arr[i] == target) {
      return i; // Return de index of the target element
    }
  }
  return -1; // Return -1 if the target is not found
}

int main() {
  //Create an ordered list
  int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 10}; // Example array
  int n = sizeof(array) / sizeof(array[0]); // Numbers of elements in the array
  int target = 40; // Element to search for

  int result = linear_search(array, n, target);
  if(result != -1) {
    printf("Element %d found at index %d.\n", target, result);
  } else {
    printf("Element %d not found in the array.\n", target);
  }

  return 0;
}
