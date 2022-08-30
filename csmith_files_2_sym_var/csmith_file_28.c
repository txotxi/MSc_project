/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3233002098
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_4[6][7][5] = {{{0x9951EA66L,0xA9C21324L,0L,0x4F88039DL,0x57257EA0L},{0x61D594D0L,(-10L),0xE135E1F6L,0L,(-1L)},{0x0CBEB969L,0xA9C21324L,0x0F0F5EBEL,0x0F0F5EBEL,0xA9C21324L},{0x73FF82FFL,0xE135E1F6L,9L,0L,0x3D4E677BL},{(-1L),1L,0L,0x0CBEB969L,0x4F88039DL},{(-7L),7L,(-1L),(-10L),0x3F0244C3L},{(-1L),1L,0x9951EA66L,1L,(-1L)}},{{0x73FF82FFL,3L,0x3F0244C3L,(-1L),0xE135E1F6L},{0x0CBEB969L,1L,(-1L),1L,1L},{0x61D594D0L,(-7L),3L,7L,0x61D594D0L},{1L,0xB81ECA6CL,0xB81ECA6CL,1L,1L},{0x61D594D0L,0xE135E1F6L,0x3F0244C3L,7L,0x4902314AL},{0L,1L,1L,(-1L),0L},{0x3F0244C3L,0x73FF82FFL,0L,7L,7L}},{{0x57257EA0L,0L,0x57257EA0L,1L,0x4F88039DL},{0x73FF82FFL,9L,3L,7L,0L},{0x9951EA66L,0x0CBEB969L,1L,0xB81ECA6CL,1L},{7L,7L,3L,0L,3L},{1L,1L,0x57257EA0L,1L,(-1L)},{0x4902314AL,(-10L),0L,0L,0x3D4E677BL},{0xAB60E704L,0L,1L,(-1L),0x0F0F5EBEL}},{{(-1L),(-10L),0x3F0244C3L,0x3F0244C3L,(-10L)},{1L,1L,0xB81ECA6CL,0x9951EA66L,0L},{(-7L),7L,3L,(-1L),0L},{1L,0x0CBEB969L,0x0F0F5EBEL,0L,1L},{(-7L),9L,0x4902314AL,9L,(-7L)},{1L,0L,1L,0x0F0F5EBEL,1L},{(-1L),0x73FF82FFL,0L,0xE135E1F6L,0x21EC2184L}},{{0xAB60E704L,1L,0x0FC0272AL,0L,1L},{0x4902314AL,0xE135E1F6L,0xE135E1F6L,0x4902314AL,(-7L)},{1L,0xB81ECA6CL,0x9951EA66L,0L,1L},{7L,(-7L),0x61D594D0L,3L,0L},{0x9951EA66L,0x57257EA0L,0x0CBEB969L,0L,0L},{0x73FF82FFL,7L,0x73FF82FFL,0x4902314AL,(-10L)},{0x57257EA0L,1L,(-1L),0L,0x0F0F5EBEL}},{{0x3F0244C3L,0L,(-7L),0xE135E1F6L,0x3D4E677BL},{0L,0L,(-1L),0x0F0F5EBEL,(-1L)},{0x61D594D0L,0x61D594D0L,0x73FF82FFL,9L,3L},{1L,0x4F88039DL,0x0CBEB969L,0L,1L},{0x21EC2184L,0L,0x61D594D0L,(-1L),0L},{(-1L),0x4F88039DL,0x9951EA66L,0x9951EA66L,0x4F88039DL},{0x3D4E677BL,0x61D594D0L,0xE135E1F6L,0x3F0244C3L,7L}}};
static int32_t * volatile g_3 = &g_4[2][0][4];/* VOLATILE GLOBAL g_3 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4
 * writes: g_4
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_2 = 0x77L;
    (*g_3) ^= l_2;
    return l_2;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    klee_make_symbolic(&g_3,sizeof(g_3),"g_3");
    klee_make_symbolic(&g_4,sizeof(g_4),"g_4");
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 1

XXX times a variable address is taken: 1
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
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

