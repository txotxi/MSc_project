/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2417951
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_5 = 0xAD67A4BEL;/* VOLATILE GLOBAL g_5 */
static volatile int32_t *g_4 = &g_5;
static int32_t g_9[2][1] = {{(-1L)},{(-1L)}};
static int32_t *g_8 = &g_9[1][0];
static int32_t **g_7 = &g_8;
static int32_t ***g_6 = &g_7;
static int32_t ***g_12 = (void*)0;
static int32_t **** volatile g_11 = &g_12;/* VOLATILE GLOBAL g_11 */
static uint32_t g_14 = 18446744073709551608UL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_11 g_7 g_8 g_9 g_5 g_12
 * writes: g_4 g_6 g_12 g_9 g_14
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = (void*)0;
    int32_t **l_2[7][8][3] = {{{(void*)0,&l_3,&l_3},{&l_3,&l_3,&l_3},{(void*)0,(void*)0,(void*)0},{&l_3,(void*)0,&l_3},{&l_3,(void*)0,&l_3},{&l_3,&l_3,&l_3},{(void*)0,(void*)0,&l_3},{&l_3,&l_3,&l_3}},{{(void*)0,(void*)0,&l_3},{&l_3,(void*)0,&l_3},{&l_3,(void*)0,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3}},{{(void*)0,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,(void*)0,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,(void*)0,&l_3}},{{&l_3,&l_3,(void*)0},{(void*)0,&l_3,&l_3},{&l_3,(void*)0,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,&l_3,(void*)0},{&l_3,(void*)0,&l_3}},{{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{&l_3,(void*)0,&l_3},{&l_3,&l_3,&l_3},{(void*)0,&l_3,&l_3},{&l_3,(void*)0,&l_3},{&l_3,&l_3,&l_3}},{{&l_3,(void*)0,&l_3},{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,&l_3,&l_3},{(void*)0,(void*)0,&l_3},{&l_3,&l_3,(void*)0}},{{&l_3,(void*)0,&l_3},{&l_3,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,(void*)0,&l_3},{&l_3,&l_3,&l_3},{(void*)0,&l_3,(void*)0},{&l_3,&l_3,&l_3},{&l_3,(void*)0,&l_3}}};
    int32_t ****l_10 = &g_6;
    uint32_t *l_13 = &g_14;
    int16_t l_15 = (-8L);
    int i, j, k;
    g_4 = (void*)0;
    (*g_11) = ((*l_10) = g_6);
    (**g_7) ^= ((void*)0 != l_10);
    l_15 |= (((*l_13) = (g_5 < g_9[0][0])) , (**g_7));
    return (***g_12);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_11,sizeof(g_11),"g_11");
    klee_make_symbolic(&g_12,sizeof(g_12),"g_12");
    klee_make_symbolic(&g_6,sizeof(g_6),"g_6");
    klee_make_symbolic(&g_7,sizeof(g_7),"g_7");
    klee_make_symbolic(&g_8,sizeof(g_8),"g_8");
    klee_make_symbolic(&g_9,sizeof(g_9),"g_9");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    klee_make_symbolic(&g_5,sizeof(g_5),"g_5");
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 10

XXX times a variable address is taken: 35
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 19

XXX max dereference level: 4
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
   level: 2, occurrence: 5
   level: 3, occurrence: 6
   level: 4, occurrence: 2
XXX number of pointers point to pointers: 6
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 40
XXX average alias set size: 1.2

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 10
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 91.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
********************* end of statistics **********************/

