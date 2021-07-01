#include <stdio.h>
void swap_max (int arr[], int length, int position)
{
  int max = position;
  int temp = 0;
  for (int i = position; i < length; i++)
    {
      if (arr[i + 1] > arr[max])
	{
	  max = i + 1;
	}
    }
  temp = arr[max];
  arr[max] = arr[position];
  arr[position] = temp;
}

void ssort (int arr[], int l)
{
  for (int i = 0; i < l; i++)
    {
      swap_max (arr, l, i);
    }
    for (int i = 0; i < l; i++){
 	printf("| %i |",arr[i]);
 	} 
  	printf("\n");
  
}
