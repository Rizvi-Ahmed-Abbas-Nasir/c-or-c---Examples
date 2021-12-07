#include<stdio.h>


int Binary_Search(int array[], int Start,int End,int element);

int main()
{
  int array[] = {1,4,6,7,8,9};
  int  n = 6 ,element = 8;
  int found_index = Binary_Search(array ,0,n-1,element);
  if (found_index == -1)
  {
      printf("Element not Found in the array");
  }
  else{
      printf(" %d Element Found At Index %d ",element,found_index);

  }
  

return 0;
}

int Binary_Search(int array[], int start,int End,int element)
{
    int mid;
    while (start <= End)
    {
        mid = start + (End - start)/2;
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid] < element)
        {
            start = mid + 1;
        }
        else{
            End = mid -1;
        }
    
    }
return -1;   
}