/* { dg-do run } */

#include <stdlib.h>
#include <openacc.h>

int
main (int argc, char **argv)
{
  const int N = 256;
  unsigned char *h;
  void *d;

  h = (unsigned char *) malloc (N);

  d = acc_create (h, N);
  if (!d)
    abort ();

  acc_delete (h, N - 2);

  free (h);

  return 0;
}

/* { dg-shouldfail "libgomp: \[\h+,256\] surrounds2 \[\h+,\+254\]" } */
