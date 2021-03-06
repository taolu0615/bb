/**
 ****************************************************************************************
 *
 * @file boot.h
 *
 * @brief This file contains the declarations of the boot related variables.
 *
 * Copyright (C) RivieraWaves 2009-2015
 *
 *
 ****************************************************************************************
 */

#ifndef _BOOT_H_
#define _BOOT_H_

/// Length of the code
extern const unsigned int Image$$EXEC_RAM_TEXT$$Length[];
#define CODE_LENGTH        ((uint32_t)Image$$EXEC_RAM_TEXT$$Length)

/// Length of the RW data
extern const unsigned int Image$$RAM_DATA$$Length[];
#define DATA_LENGTH        ((uint32_t)Image$$RAM_DATA$$Length)

/// Unloaded RAM area base address
extern const unsigned int Image$$RAM_UNLOADED$$Base[];
#define RAM_UNLOADED_BASE   ((uint32_t)Image$$RAM_UNLOADED$$Base)

/// Stack base address
extern const unsigned int Image$$RAM_STACK_UNUSED$$Base[];
#define STACK_BASE_UNUSED   ((uint32_t)Image$$RAM_STACK_UNUSED$$Base)
extern const unsigned int Image$$RAM_STACK_UNUSED$$ZI$$Length[];
#define STACK_LEN_UNUSED   ((uint32_t)Image$$RAM_STACK_UNUSED$$ZI$$Length)

extern const unsigned int Image$$RAM_STACK_SVC$$Base[] ;
#define STACK_BASE_SVC   ((uint32_t)Image$$RAM_STACK_SVC$$Base)
extern const unsigned int Image$$RAM_STACK_SVC$$ZI$$Length[];
#define STACK_LEN_SVC  ((uint32_t)Image$$RAM_STACK_SVC$$ZI$$Length)

extern const unsigned int Image$$RAM_STACK_IRQ$$Base[];
#define STACK_BASE_IRQ  ((uint32_t)Image$$RAM_STACK_IRQ$$Base)
extern const unsigned int Image$$RAM_STACK_IRQ$$ZI$$Length[];
#define STACK_LEN_IRQ   ((uint32_t)Image$$RAM_STACK_IRQ$$ZI$$Length)

extern const unsigned int Image$$RAM_STACK_FIQ$$Base[];
#define STACK_BASE_FIQ   ((uint32_t)Image$$RAM_STACK_FIQ$$Base)
extern const unsigned int Image$$RAM_STACK_FIQ$$ZI$$Length[];
#define STACK_LEN_FIQ   ((uint32_t)Image$$RAM_STACK_FIQ$$ZI$$Length)

#define BOOT_PATTERN_UNUSED   0xAA      // Pattern to fill UNUSED stack
#define BOOT_PATTERN_SVC      0xBB      // Pattern to fill SVC stack
#define BOOT_PATTERN_IRQ      0xCC      // Pattern to fill IRQ stack
#define BOOT_PATTERN_FIQ      0xDD      // Pattern to fill FIQ stack

#endif // _BOOT_H_
