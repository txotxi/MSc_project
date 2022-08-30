/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3669106215
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   volatile int32_t  f0;
   volatile uint32_t  f1;
   volatile int64_t  f2;
   uint8_t  f3;
   const volatile int32_t  f4;
   volatile uint8_t  f5;
   int8_t  f6;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0xE8F21009L;
static volatile int32_t g_13 = 6L;/* VOLATILE GLOBAL g_13 */
static int32_t g_14 = (-3L);
static int32_t g_15 = 1L;
static volatile uint64_t g_16[1] = {18446744073709551611UL};
static int32_t ** volatile g_21 = (void*)0;/* VOLATILE GLOBAL g_21 */
static int32_t *g_23 = &g_3;
static int32_t ** volatile g_22 = &g_23;/* VOLATILE GLOBAL g_22 */
static struct S1 g_24 = {0x9956A218L,0x0ED69376L,0x22452A2C7A2E4284LL,0x4DL,-1L,1UL,0x73L};/* VOLATILE GLOBAL g_24 */


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_16 g_22 g_24
 * writes: g_16 g_23
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = &g_3;
    int32_t *l_8 = &g_3;
    int32_t *l_9 = &g_3;
    int32_t *l_10 = &g_3;
    int32_t *l_11 = &g_3;
    int32_t *l_12[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_19 = (void*)0;
    int32_t **l_20 = &l_2;
    int i;
    g_16[0]--;
    (*g_22) = ((*l_20) = &g_3);
    return g_24;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_22,sizeof(g_22),"g_22");
    klee_make_symbolic(&g_23,sizeof(g_23),"g_23");
    klee_make_symbolic(&g_21,sizeof(g_21),"g_21");
    klee_make_symbolic(&g_16,sizeof(g_16),"g_16");
    klee_make_symbolic(&g_15,sizeof(g_15),"g_15");
    klee_make_symbolic(&g_14,sizeof(g_14),"g_14");
    klee_make_symbolic(&g_13,sizeof(g_13),"g_13");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_24.f6, "g_24.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 15

XXX times a variable address is taken: 14
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 63

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 4
XXX number of pointers point to scalars: 11
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1.07

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

