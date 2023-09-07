#include <stdio.h>

int
main ()
{
  int A[10], n, i;
  printf ("enter values");
  for (i = 1; i <= 100; i++)
    {
      scanf ("%d", &A[i]);
    }
}

int
function (void)
{
  int A[10], i;
  for (i = 1; i <= 100; i++)
    {
      printf ("%d\n", A[i]);
    }
  int modify (void)
  {
    int A[10], i;
    for (i = 1; i <= 100; i++)
      {
	if (A[i] % 2 == 0)
	  A[i] -= 1;
	else
	  A[i] += 1;
      }

  }
  int function (void)
  {
    int A[10], i;
    for (i = 1; i <= 100; i++)
      {
	printf ("%d\n", A[i]);
      }
  }
