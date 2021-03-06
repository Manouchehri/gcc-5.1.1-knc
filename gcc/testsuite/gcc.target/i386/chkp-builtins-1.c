/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fdump-tree-chkp" } */
/* { dg-final { scan-tree-dump-not "bnd_init_ptr_bounds" "chkp" } } */
/* { dg-final { cleanup-tree-dump "chkp" } } */

void *
chkp_test (void *p)
{
  return __builtin___bnd_init_ptr_bounds (p);
}
