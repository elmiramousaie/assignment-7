#include <stdio.h>

int main()
{
int a[10],n,c,d,s;

  printf("Enter number of list\n");
  scanf("%d", &n);

  printf("Enter %d number\n", n);

  for (c = 0; c < n; c++)
  {
     scanf("%d", &a[c]);
  }
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1])
      {
        s = a[d];
        a[d] = a[d+1];
        a[d+1] = s;
      }
    }
  }

  printf("Sorted list is:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", a[c]);
}
