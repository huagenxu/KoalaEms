/******************************************************************************
*                                                                             *
* modulnames.h                                                                *
*                                                                             *
* ULTRIX, OSF1                                                                *
*                                                                             *
* created: 10.02.94                                                           *
* last changed: 26.10.94                                                      *
*                                                                             *
* PW                                                                          *
*                                                                             *
******************************************************************************/

#ifndef _modulnames_h_
#define _modulnames_h_
#include <cdefs.h>

/*****************************************************************************/

__BEGIN_DECLS
char *modulname(int id, int no_known);
char *modulname_e(int id, int no_known);
__END_DECLS

#endif

/*****************************************************************************/
/*****************************************************************************/