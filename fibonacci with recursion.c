#include <stdio.h>
int fibo (int);
int
main ()
{
  int x, f;

  f = fibo (x);

  return 0;
}

int
fibo (int a)
{
  int i, t;

  int t1 = 0, t2 = 1;


  int nxtTrm = t1 + t2;


  printf ("Enter the number of terms: ");
  scanf ("%d", &t);


  printf (" %d,", t2);


  for (i = 3; i <= t; ++i)
    {

      printf ("%d, ", nxtTrm);
      t1 = t2;
      t2 = nxtTrm;
      nxtTrm = t1 + t2;

    }
  return (t);
}