#include <bits/stdc++.h>

int main() {

  int array[] = {1, 12, 23, 34, 45, 56, 67};
  int array_size = sizeof(array)/sizeof(array[0]);
  int first = array[0];
  int second = INT_MIN;
  int third = INT_MIN;

  for (int i = 1; i < array_size; i++)
    if (array[i] > first)
      first = array[i];

  for (int i = 0; i < array_size; i++)
    if (array[i] > second && array[i] < first)
      second = array[i];

  for (int i = 0; i < array_size; i++)
    if (array[i] > third && array[i] < second)
      third = array[i];

  printf("Third largest number is %d", third);
  return 0;
}
