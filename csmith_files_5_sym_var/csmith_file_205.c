/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3732241066
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S2 {
   const unsigned f0 : 27;
   int64_t  f1;
   volatile unsigned f2 : 22;
   signed f3 : 21;
   signed f4 : 22;
   unsigned f5 : 4;
   volatile signed f6 : 7;
   const volatile signed f7 : 2;
   const unsigned : 0;
   volatile signed f8 : 10;
};

struct S4 {
   uint32_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static struct S2 g_3 = {3595,-6L,494,-135,2016,3,-9,0,15};/* VOLATILE GLOBAL g_3 */
static struct S2 * volatile g_2 = &g_3;/* VOLATILE GLOBAL g_2 */
static struct S2 * volatile * volatile g_4 = (void*)0;/* VOLATILE GLOBAL g_4 */
static struct S2 * volatile * volatile g_6 = &g_2;/* VOLATILE GLOBAL g_6 */
static struct S4 g_7 = {0x5D580090L};


/* --- FORWARD DECLARATIONS --- */
static struct S4  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_7
 * writes: g_2
 */
static struct S4  func_1(void)
{ /* block id: 0 */
    struct S2 * volatile *l_5 = (void*)0;
    (*g_6) = g_2;
    return g_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_7,sizeof(g_7),"g_7");
    klee_make_symbolic(&g_6,sizeof(g_6),"g_6");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    klee_make_symbolic(&g_2,sizeof(g_2),"g_2");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc(g_3.f4, "g_3.f4", print_hash_value);
    transparent_crc(g_3.f5, "g_3.f5", print_hash_value);
    transparent_crc(g_3.f6, "g_3.f6", print_hash_value);
    transparent_crc(g_3.f7, "g_3.f7", print_hash_value);
    transparent_crc(g_3.f8, "g_3.f8", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 9
XXX zero bitfields defined in structs: 1
XXX const bitfields defined in structs: 3
XXX volatile bitfields defined in structs: 4
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 4

XXX times a variable address is taken: 2
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
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 25

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

