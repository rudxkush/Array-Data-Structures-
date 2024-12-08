#include <stdio.h>
int* delete_specifiedpos(int arr[], int* size, int position)
{
   for(int i=position; i<*size-1 ; i++)
  {
    arr[i]=arr[i+1];  
  }
  (*size)--;
  return arr;
}
int* insert_specifiedpos(int arr[], int* size, int position, int element)
{
  (*size)++;
  for(int i=*size-1; i>=position ; i--)
  {
    arr[i+1]=arr[i]; 
  }
  arr[position] = element;
  return arr;
}
int main(void)
{
  int a[10], size;
  printf("Enter size:\n");
  scanf("%d",&size);
  
  printf("Enter value:\n");
  for(int i=0; i<size; i++)
  {
    scanf("%d", &a[i]);
  }
   for(int i=0; i<size; i++)
  {
    printf("Element[%d]: %d\n", i, a[i]);
  }
  
  int element;
  printf("Enter element:");
  scanf("%d", &element);
  int* result = insert_specifiedpos(a, &size, 3, element);
  printf("After insertion\n");
  for(int i=0; i<size; i++)
  {
    printf("Element[%d]: %d\n", i, result[i]);
  } 
  
  int position;
  printf("Enter position:");
  scanf("%d", &position);
  int* result1 = delete_specifiedpos(a, &size, position);
  printf("After deletion:\n");
  for(int i=0; i<size; i++)
  {
    printf("Element[%d]: %d\n", i, result1[i]);
  }
  return 0;
}
