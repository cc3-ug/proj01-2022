#ifndef UTILS_H
#define UTILS_H

#include "types.h"

#define RTYPE_FORMAT "%s\tx%d, x%d, x%d\n"
#define ITYPE_FORMAT "%s\tx%d, x%d, %d\n"
#define JALR_FORMAT "jalr\tx%d, x%d, %d\n"
#define MEM_FORMAT "%s\tx%d, %d(x%d)\n"
#define AUIPC_FORMAT "auipc\tx%d, %d\n"
#define LUI_FORMAT "lui\tx%d, %d\n"
#define JAL_FORMAT "jal\tx%d, %d\n"
#define BRANCH_FORMAT "%s\tx%d, x%d, %d\n"
#define ECALL_FORMAT "ecall\n"

int bitExtender(unsigned, unsigned);
int get_branch_distance(Instruction);
int get_jump_distance(Instruction);
int get_memory_offset(Instruction);
void handle_invalid_instruction(Instruction);
void handle_invalid_read(Address);
void handle_invalid_write(Address);

#endif
