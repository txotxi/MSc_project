/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      720226990
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_15 = 0x8F4AL;
static int64_t g_19 = 0xABFF5ECCE35A12A2LL;
static int32_t g_20 = 4L;
static int32_t g_22 = 0xE5A82A6FL;
static int32_t g_25 = 0x1B8CE229L;


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_15 g_19 g_25
 * writes: g_19 g_20 g_22 g_25
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_4[1];
    int32_t *l_21 = &g_22;
    int16_t l_23[3][7] = {{(-4L),(-10L),0x6E82L,0x6E82L,(-10L),(-4L),(-10L)},{1L,(-4L),(-4L),1L,(-10L),1L,(-4L)},{3L,3L,(-4L),0x6E82L,(-4L),3L,3L}};
    int32_t *l_24 = &g_25;
    int i, j;
    for (i = 0; i < 1; i++)
        l_4[i] = 0x0DL;
    (*l_24) ^= (safe_mul_func_uint16_t_u_u((l_4[0] , (safe_sub_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(l_4[0], (((-1L) ^ ((*l_21) = (0L <= ((g_20 = (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_15, g_15)), l_4[0])), ((safe_div_func_int16_t_s_s((((252UL || ((g_19 &= (!((((l_4[0] > g_15) , 0xFFAA2324L) >= g_15) ^ l_4[0]))) <= g_15)) & g_15) ^ 0x55F992DBL), 65533UL)) == g_15))) <= g_15) , 1UL)) <= 0xB5L)))) <= g_15))) != g_15) == 4294967292UL), l_23[1][4]))), 0UL));
    return g_19;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_25,sizeof(g_25),"g_25");
    klee_make_symbolic(&g_22,sizeof(g_22),"g_22");
    klee_make_symbolic(&g_20,sizeof(g_20),"g_20");
    klee_make_symbolic(&g_19,sizeof(g_19),"g_19");
    klee_make_symbolic(&g_15,sizeof(g_15),"g_15");
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 29
breakdown:
   depth: 1, occurrence: 2
   depth: 29, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 5

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 17
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 23.8
XXX percentage an existing variable is used: 76.2
********************* end of statistics **********************/

