/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1022890247
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0x4081C290L;
static int32_t * volatile g_3 = &g_4;/* VOLATILE GLOBAL g_3 */
static int32_t g_13[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
static uint16_t g_23 = 0xD0B1L;
static uint64_t g_25[8] = {0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL,0x851CC0D6813F8C54LL};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t  func_5(uint8_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4 g_23 g_13 g_25
 * writes: g_4 g_23 g_25
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    const uint64_t l_2 = 18446744073709551615UL;
    int32_t l_12 = 0x9D434678L;
    int32_t l_14 = 1L;
    int32_t l_15 = 3L;
    int32_t l_16 = 0x1C760FC5L;
    uint8_t l_17[10] = {1UL,0x44L,0x44L,1UL,0x02L,1UL,0x44L,0x44L,1UL,0x02L};
    uint16_t *l_27 = &g_23;
    int32_t *l_28 = &l_14;
    int i;
lbl_20:
    (*g_3) |= l_2;
    if (func_5(g_4))
    { /* block id: 4 */
        int32_t *l_8 = &g_4;
        int32_t *l_9 = &g_4;
        int32_t *l_10 = (void*)0;
        int32_t *l_11[1][9] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}};
        int i, j;
        l_17[8]--;
    }
    else
    { /* block id: 6 */
        int32_t l_21 = 0xFD52276CL;
        uint16_t *l_22 = &g_23;
        uint64_t *l_24 = &g_25[6];
        int32_t *l_26 = &l_14;
        if (g_4)
            goto lbl_20;
        (*l_26) = (l_12 , ((((*l_22) |= func_5(l_21)) & ((func_5((0x020CL < (l_21 <= func_5(g_13[4])))) || (func_5((((*l_24) ^= l_21) < g_13[4])) == g_13[8])) >= g_13[6])) , 0x798870B3L));
        return g_25[1];
    }
    l_12 = (l_27 != (((*l_28) = (&g_25[0] == &g_25[0])) , &g_23));
    return g_23;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_5(uint8_t  p_6)
{ /* block id: 2 */
    uint8_t l_7 = 0x51L;
    return l_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_13,sizeof(g_13),"g_13");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        //transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
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

XXX max expression depth: 16
breakdown:
   depth: 1, occurrence: 10
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1
   depth: 16, occurrence: 1

XXX total number of pointers: 10

XXX times a variable address is taken: 13
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 1
XXX times a pointer is qualified to be dereferenced: 131

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 14
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 10
XXX average alias set size: 1

XXX times a non-volatile is read: 14
XXX times a non-volatile is write: 11
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 10
XXX percentage of non-volatile access: 96.2

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 9
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 23.8
XXX percentage an existing variable is used: 76.2
********************* end of statistics **********************/

