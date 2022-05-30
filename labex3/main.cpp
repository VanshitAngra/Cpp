3//
//  main.cpp
//  labex3
//
//  Created by Vanshit Angra on 28/03/22.
//

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int x) {

  // Going through array sequentially
  for (int i = 0; i < n; i++)
  {
      if (arr[i] == x)
      return i;
  }
  return -1;
}

int main()
{
  int arr[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(arr) / sizeof(arr[0]);

  int result = linearsearch(arr, n, x);

   if (result == -1)
   {
       cout << "Element not found";

   }
    else
 cout << "Element found at index: " << result;

}

//#include <iostream>
//using namespace std;
//
//int binarySearch(int array[], int x, int low, int high) {
//
//    // Repeat until the pointers low and high meet each other
//  while (low <= high) {
//    int mid = low + (high - low) / 2;
//
//    if (array[mid] == x)
//      return mid;
//
//    if (array[mid] < x)
//      low = mid + 1;
//
//    else
//      high = mid - 1;
//  }
//
//  return -1;
//}
//
//int main(void) {
//  int array[] = {3, 4, 5, 6, 7, 8, 9};
//  int x = 4;
//  int n = sizeof(array) / sizeof(array[0]);
//  int result = binarySearch(array, x, 0, n - 1);
//  if (result == -1)
//  {
//    printf("Not found");
//  }
//  else
//  {
//
//  } printf("Element is found at index %d", result);
//
//
//}
