/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4091115450
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_10 = 254UL;
static uint32_t g_12 = 4294967295UL;
static int32_t g_16 = (-3L);


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_12 g_16
 * writes: g_12 g_16
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint32_t *l_11 = &g_12;
    int32_t *l_15 = &g_16;
    (*l_15) ^= (safe_add_func_uint64_t_u_u(1UL, (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_10, (g_10 != g_10))), (--(*l_11)))), g_10))));
    return g_10;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_12,sizeof(g_12),"g_12");
    klee_make_symbolic(&g_10,sizeof(g_10),"g_10");
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
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

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 2
   depth: 7, occurrence: 1

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
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
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

XXX percentage a fresh-made variable is used: 20
XXX percentage an existing variable is used: 80
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

