/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2073521663
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_16 = 0x07C7L;
static int8_t g_23 = 0xB4L;
static int32_t g_24 = 0L;
static uint16_t g_26[9] = {0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L,0x0DD6L};
static int8_t g_27 = 0xE7L;
static uint32_t g_29 = 0UL;
static int32_t g_32 = 0x4939E63AL;
static int32_t * volatile g_31 = &g_32;/* VOLATILE GLOBAL g_31 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_23 g_27 g_29 g_31
 * writes: g_16 g_24 g_26 g_27 g_29 g_32
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_8 = 0UL;
    int64_t l_9 = 0L;
    int16_t *l_15 = &g_16;
    uint8_t l_19[10] = {0UL,0xCFL,0UL,0UL,0xCFL,0UL,0UL,0xCFL,0UL,0UL};
    uint16_t *l_25 = &g_26[6];
    uint32_t *l_28 = &g_29;
    int32_t *l_30 = (void*)0;
    int32_t l_33 = 0x089CED66L;
    int i;
    (*g_31) = (safe_div_func_uint32_t_u_u(((*l_28) &= (((safe_div_func_int64_t_s_s(((-3L) <= (-2L)), l_8)) | l_9) | ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_9, (1UL != (g_27 ^= (!(((*l_15) = l_8) | ((*l_25) = (safe_div_func_uint8_t_u_u(l_19[0], (~(g_24 = (safe_div_func_int16_t_s_s(g_23, g_23))))))))))))), g_23)) < l_8))), (-6L)));
    return l_33;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_31,sizeof(g_31),"g_31");
    klee_make_symbolic(&g_32,sizeof(g_32),"g_32");
    klee_make_symbolic(&g_29,sizeof(g_29),"g_29");
    klee_make_symbolic(&g_27,sizeof(g_27),"g_27");
    klee_make_symbolic(&g_26,sizeof(g_26),"g_26");
    klee_make_symbolic(&g_24,sizeof(g_24),"g_24");
    klee_make_symbolic(&g_23,sizeof(g_23),"g_23");
    klee_make_symbolic(&g_16,sizeof(g_16),"g_16");
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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

XXX max expression depth: 18
breakdown:
   depth: 1, occurrence: 2
   depth: 18, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 95

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 53.8
XXX percentage an existing variable is used: 46.2
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

