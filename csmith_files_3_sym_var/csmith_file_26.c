/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1744910178
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_6 = 1L;
static int32_t * volatile g_5[4][9] = {{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}};
static int32_t * volatile g_7 = &g_6;/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_6
 * writes: g_6
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = (void*)0;
    (*g_7) = (safe_lshift_func_uint8_t_u_u(0xADL, 3));
    return g_6;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_7,sizeof(g_7),"g_7");
    klee_make_symbolic(&g_5,sizeof(g_5),"g_5");
    klee_make_symbolic(&g_6,sizeof(g_6),"g_6");
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 13
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 66.7
XXX average alias set size: 1.33

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

