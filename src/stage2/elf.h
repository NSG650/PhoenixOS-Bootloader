#ifndef PHOENIXOS_BOOT_ELF_H
#define PHOENIXOS_BOOT_ELF_H

#include <stdint.h>

typedef struct
{
    uint8_t magic_number[4];
    uint8_t bitness;
    uint8_t endianness;
    uint8_t header_version;
    uint8_t abi;
    uint64_t padding;
    uint16_t type;
    uint16_t instruction_set;
    uint32_t elf_version;
    uint32_t program_entry_position;
    uint32_t program_header_table_position;
    uint32_t section_header_table_position;
    uint32_t flags;
    uint16_t header_size;
    uint16_t program_header_size;
    uint16_t program_header_count;
    uint16_t section_header_size;
    uint16_t section_header_count;
    uint16_t section_names_header_index;
} elf32_header_t;

typedef struct
{
    uint32_t type;
    uint32_t offset;
    uint32_t virtual_address;
    uint32_t physical_address;
    uint32_t file_size;
    uint32_t memory_size;
    uint32_t flags;
    uint32_t alignment;
} elf32_program_header_t;

typedef struct
{
    uint8_t magic_number[4];
    uint8_t bitness;
    uint8_t endianness;
    uint8_t header_version;
    uint8_t abi;
    uint64_t padding;
    uint16_t type;
    uint16_t instruction_set;
    uint32_t elf_version;
    uint64_t program_entry_position;
    uint64_t program_header_table_position;
    uint64_t section_header_table_position;
    uint32_t flags;
    uint16_t header_size;
    uint16_t program_header_size;
    uint16_t program_header_count;
    uint16_t section_header_size;
    uint16_t section_header_count;
    uint16_t section_names_header_index;
} elf64_header_t;

int32_t elf32_load(uint8_t* elf, uintptr_t* entry_point);

#endif // PHOENIXOS_BOOT_ELF_H