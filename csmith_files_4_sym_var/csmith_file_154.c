/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2185504499
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_9 = (-1L);
static int32_t *g_8 = &g_9;
static uint32_t g_26[4][3] = {{0xA80278EEL,0xA80278EEL,0xA80278EEL},{0xDB88DCFDL,0x4E401D93L,0xDB88DCFDL},{0xA80278EEL,0xA80278EEL,0xA80278EEL},{0xDB88DCFDL,0x4E401D93L,0xDB88DCFDL}};
static int32_t ** volatile g_28 = &g_8;/* VOLATILE GLOBAL g_28 */


/* --- FORWARD DECLARATIONS --- */
static const int32_t  func_1(void);
static int32_t * func_2(int32_t * p_3, uint64_t  p_4, uint32_t  p_5, const uint8_t  p_6, int32_t * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_9 g_28 g_26
 * writes: g_26 g_8 g_9
 */
static const int32_t  func_1(void)
{ /* block id: 0 */
    const uint16_t l_12[10][2][1] = {{{0x1E4FL},{0x8A11L}},{{1UL},{0x1E4FL}},{{3UL},{3UL}},{{0x1E4FL},{1UL}},{{0x8A11L},{0x1E4FL}},{{0x8A11L},{1UL}},{{0x1E4FL},{3UL}},{{3UL},{0x1E4FL}},{{1UL},{0x8A11L}},{{0x1E4FL},{0x8A11L}}};
    uint32_t *l_24 = (void*)0;
    uint32_t *l_25 = &g_26[0][0];
    int32_t *l_27[10][1] = {{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9}};
    int i, j, k;
    (*g_28) = func_2(g_8, (g_9 & (g_9 && ((*l_25) = ((g_9 == ((safe_mod_func_int32_t_s_s(l_12[7][1][0], (*g_8))) , (((*g_8) , (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((g_9 < (+(safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_9, 3)), 0x4BF7L)))) , l_12[3][0][0]), g_9)), 0x7806AA1CL)), 3))) , l_12[7][1][0]))) > l_12[7][1][0])))), l_12[6][0][0], l_12[3][1][0], l_27[3][0]);
    for (g_9 = 17; (g_9 == (-26)); g_9 = safe_sub_func_int8_t_s_s(g_9, 3))
    { /* block id: 8 */
        return g_26[1][1];
    }
    return g_26[0][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_8
 */
static int32_t * func_2(int32_t * p_3, uint64_t  p_4, uint32_t  p_5, const uint8_t  p_6, int32_t * p_7)
{ /* block id: 2 */
    g_8 = &g_9;
    return &g_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_28,sizeof(g_28),"g_28");
    klee_make_symbolic(&g_26,sizeof(g_26),"g_26");
    klee_make_symbolic(&g_8,sizeof(g_8),"g_8");
    klee_make_symbolic(&g_9,sizeof(g_9),"g_9");
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_26[i][j], "g_26[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 22
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 22, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 10
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 8

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 12.5
XXX average alias set size: 1

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 96.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 13.6
XXX percentage an existing variable is used: 86.4
********************* end of statistics **********************/

