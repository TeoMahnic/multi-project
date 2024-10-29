#ifndef GLOBAL_REGIONS_H
#define GLOBAL_REGIONS_H

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//------ With VS Code: Open Preview for Configuration Wizard -------------------

// Device ROM0
#define __DEVICE_ROM0_BASE 0x10000000
#define __DEVICE_ROM0_SIZE 0x00200000
// Device RAM0
#define __DEVICE_RAM0_BASE 0x30000000
#define __DEVICE_RAM0_SIZE 0x00020000


// -------------------------------
// <h> Project A
// -------------------------------
#define __STARTUP 1

// <h> ROM configuration (A)
// =======================
// <h> __ROM (A)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x10000000
//   <i> Contains Startup and Vector table
#define __ROM_BASE_A 0x10000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00200000
#define __ROM_SIZE_A 0x00100000
// </h>
// </h>

// <h> RAM Configuration (A)
// =======================
// <h> __RAM (A)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x30000000
//   <i> Contains uninitialized RAM, Stack, and Heap
#define __RAM_BASE_A 0x30000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00020000
#define __RAM_SIZE_A 0x00010000
// </h>
// </h>

// <h> Stack / Heap Configuration (A)
//   <o0> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
//   <o1> Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
#define __STACK_SIZE_A 0x00000200
#define __HEAP_SIZE_A 0x00000C00
// </h>
// </h> Project A

// -------------------------------
// <h> Project B
// -------------------------------
// <h> ROM configuration (B)
// =======================
// <h> __ROM (B)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x10000000
//   <i> Contains Startup and Vector table
#define __ROM_BASE_B 0x10100000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00200000
#define __ROM_SIZE_B 0x00080000
// </h>
// </h>

// <h> RAM Configuration (B)
// =======================
// <h> __RAM (B)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x30000000
//   <i> Contains uninitialized RAM, Stack, and Heap
#define __RAM_BASE_B 0x30010000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00020000
#define __RAM_SIZE_B 0x0000A000
// </h>
// </h>

// <h> Stack / Heap Configuration (B)
//   <o0> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
//   <o1> Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
#define __STACK_SIZE_B 0x00000200
#define __HEAP_SIZE_B 0x00000C00
// </h>
// </h> Project B


#include "check_regions.h" // Will be done by the tool

#endif // GLOBAL_REGIONS_H
