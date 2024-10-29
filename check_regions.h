#ifndef CHECK_REGIONS_H
#define CHECK_REGIONS_H


#ifdef PROJECT_A
#define __ROM0_BASE     __ROM_BASE_A
#define __ROM0_SIZE     __ROM_SIZE_A
#define __RAM0_BASE     __RAM_BASE_A
#define __RAM0_SIZE     __RAM_SIZE_A
#define __STACK_SIZE    __STACK_SIZE_A
#define __HEAP_SIZE     __HEAP_SIZE_A
#endif

#ifdef PROJECT_B
#define __ROM0_BASE     __ROM_BASE_B
#define __ROM0_SIZE     __ROM_SIZE_B
#define __RAM0_BASE     __RAM_BASE_B
#define __RAM0_SIZE     __RAM_SIZE_B
#define __STACK_SIZE    __STACK_SIZE_B
#define __HEAP_SIZE     __HEAP_SIZE_B
#endif

#endif // CHECK_REGIONS_H
