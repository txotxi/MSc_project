/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2054300820
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3 = 0x0B4074DDL;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 0x48C66F5AL;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 1L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_3
 * writes: g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2[7];
    int i;
    for (i = 0; i < 7; i++)
        l_2[i] = 0xDAL;
    for (g_5 = 0; (g_5 <= 6); g_5 += 1)
    { /* block id: 3 */
        if (g_3)
            break;
    }
    return l_2[2];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_5,sizeof(g_5),"g_5");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
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

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

