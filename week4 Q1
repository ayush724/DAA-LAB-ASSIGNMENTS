
#include <stdio.h>
#include <stdlib.h>
#define max 50
int comp;
int inv1;
int merge(int arr[], int p, int q, int r) {

  int count=0;
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                , M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
        comp++;
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
        count = count + q - i + 1;
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
        arr[k] = M[j];
    j++;
    k++;
  }
  return count;
}

int mergeSort(int arr[], int l, int r) {
    int inv=0;
  if (l < r) {
    int m ;
    m=(l+r)/2;
    inv += mergeSort(arr, l, m);
    inv += mergeSort(arr, m + 1, r);
    inv += merge(arr, l, m, r);
  }
  return inv;
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[50];
  int size,t;
  scanf("%d",&t);
  for(int i1=0;i1<t;i1++)
  {
      comp=0;
  printf("enter the size:");
  scanf("%d",&size);
  for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

  inv1 = mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
  printf("comparison = %d\n",comp);
  printf("inversion = %d\n",inv1);
  }
}
