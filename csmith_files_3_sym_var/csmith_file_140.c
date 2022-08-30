/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3184638121
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_2[3] = {0xC5416513L,0xC5416513L,0xC5416513L};
static int32_t g_3 = 0xA0D72276L;
static int16_t g_9 = (-9L);
static uint16_t g_17 = 6UL;
static int32_t g_19 = 0x4C6A37D7L;
static uint32_t g_20 = 8UL;


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_20 g_9
 * writes: g_3 g_9 g_17 g_19 g_20
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { /* block id: 3 */
        int16_t *l_8[8] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
        uint16_t *l_16 = &g_17;
        int32_t *l_18[5];
        int i;
        for (i = 0; i < 5; i++)
            l_18[i] = &g_19;
        g_20 &= (g_19 = (safe_div_func_int16_t_s_s((g_9 = (safe_mod_func_uint8_t_u_u(((g_2[g_3] > (g_2[g_3] || g_2[2])) == 1L), g_2[g_3]))), ((*l_16) = (safe_lshift_func_uint16_t_u_s(g_2[g_3], (0xA7B445ACEE61780ELL < (safe_sub_func_int8_t_s_s((g_2[1] ^ (safe_rshift_func_uint16_t_u_s(g_2[g_3], 5))), 0xE2L)))))))));
    }
    return g_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_9,sizeof(g_9),"g_9");
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    klee_make_symbolic(&g_2,sizeof(g_2),"g_2");
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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

XXX max expression depth: 14
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
   depth: 14, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 11.1
XXX percentage an existing variable is used: 88.9
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

