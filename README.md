# Overview
This repository contains a multi-project solution mock-up using a central regions header file to demonstrate how memory layout can be defined on a solution level.

## Details
### [global_regions.h](./global_regions.h)
Contains a description of device available ROM and RAM, which is then partitioned for each project.
### [check_regions.h](./check_regions.h)
Contains the glue logic for extracting the correct region information for each project.
### [Project_A](Project_A/Project_A.cproject.yml)
Contains a reference to the global regions file and a project specific define.
#### [Project_A/RTE/Device/SSE-300-MPS3/ac6_linker_script.sct.src](Project_A/RTE/Device/SSE-300-MPS3/ac6_linker_script.sct.src)
Linker script template based on the one provided by CMSIS-Toolbox. It includes additional guards for startup, stack, heap, ...
### [Project_B](Project_B/Project_B.cproject.yml)
Contains a reference to the global regions file and a project specific define.
#### [Project_B/RTE/Device/SSE-300-MPS3/ac6_linker_script.sct.src](Project_B/RTE/Device/SSE-300-MPS3/ac6_linker_script.sct.src)
Linker script template based on the one provided by CMSIS-Toolbox. It includes additional guards for startup, stack, heap, ...
