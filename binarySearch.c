#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) 
{
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int x = 4;
  int ans = binarySearch(array, x, 0, n - 1);
  if(ans==-1)
  {
    printf("Not Found");
  }else{
    printf("Element is found at index %d", result);
  }
    
  return 0;
}
