/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1737979968
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t * volatile g_3 = (void*)0;/* VOLATILE GLOBAL g_3 */
static int32_t g_5 = 1L;
static int32_t * volatile g_4 = &g_5;/* VOLATILE GLOBAL g_4 */
static int8_t g_14 = 0x80L;
static int32_t * volatile g_16 = &g_5;/* VOLATILE GLOBAL g_16 */
static int32_t g_19 = 0x79041289L;
static int16_t g_20 = 0x40C3L;
static uint16_t g_21 = 65534UL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int8_t * func_6(int64_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_16 g_21 g_20
 * writes: g_5 g_21 g_20
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_2 = 0L;
    int8_t *l_13 = &g_14;
    int8_t **l_12 = &l_13;
    int8_t * const l_15 = (void*)0;
    int32_t *l_17 = &g_5;
    int32_t *l_18[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_29 = 1UL;
    int i;
    (*g_4) = l_2;
lbl_27:
    if (l_2)
        goto lbl_24;
    (*g_16) = (l_2 , (((*l_12) = func_6(l_2)) != l_15));
lbl_24:
    ++g_21;
    for (g_20 = 0; (g_20 == 4); g_20++)
    { /* block id: 11 */
        uint32_t l_28 = 0x7E65FBC0L;
        if (g_21)
            goto lbl_27;
        if (l_28)
            break;
    }
    return l_29;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int8_t * func_6(int64_t  p_7)
{ /* block id: 2 */
    uint32_t l_8 = 0xFE64FD9EL;
    int32_t *l_10 = &g_5;
    int32_t **l_9 = &l_10;
    int8_t *l_11 = (void*)0;
    (*l_9) = (l_8 , (void*)0);
    return l_11;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_16,sizeof(g_16),"g_16");
    klee_make_symbolic(&g_14,sizeof(g_14),"g_14");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    klee_make_symbolic(&g_5,sizeof(g_5),"g_5");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    //transparent_crc(g_5, "g_5", print_hash_value);
    //transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 5, occurrence: 1

XXX total number of pointers: 12

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 94

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 58.3
XXX average alias set size: 1.17

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 90.5

XXX forward jumps: 1
XXX backward jumps: 1

XXX stmts: 10
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 32.1
XXX percentage an existing variable is used: 67.9
********************* end of statistics **********************/

