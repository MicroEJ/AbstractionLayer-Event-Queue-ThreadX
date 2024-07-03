<!--
	Markdown
-->
![SDK](https://shields.microej.com/endpoint?url=https://repository.microej.com/packages/badges/sdk_5.8.json)
![ARCH](https://shields.microej.com/endpoint?url=https://repository.microej.com/packages/badges/arch_7.18.json)

# Overview

Low Level MicroEJ Event Queue API implementation over ThreadX.

This component implements the `LLEVENT` Low Level API for MicroEJ Platforms connected to a Board Support Package based on the [ThreadX RTOS](https://threadx.io/).

See the MicroEJ documentation for a description of the `LLEVENT` functions:
- [LLEVENT: Event Queue](https://docs.microej.com/en/latest/VEEPortingGuide/appendix/llapi.html#llevent-event-queue)
- [Event Queue: Installation](https://docs.microej.com/en/latest/VEEPortingGuide/packEventQueue.html#installation)
- [Event Queue functional architecture](https://docs.microej.com/en/latest/ApplicationDeveloperGuide/eventQueue.html#event-queue)

This implementation has a configuration file, [event_configuration.h](src/main/c/inc/event_configuration.h).

# Usage

1. These sources can be included in the VEE Port with the method you prefer, by using this repository as a submodule or by doing a copy of the sources in the VEE Port repository.

2. The configuration file `event_configuration.h` allows to set the Event Queue size with the macro `EVENT_QUEUE_SIZE`. The value configured by default is 100, adapt the value to your needs.

# Requirements

N/A

# Validation

This Abstraction Layer implementation can be validated in the target Board Support Package using the [MicroEJ Event Queue Validation](https://github.com/MicroEJ/VEEPortQualificationTools/tree/master/tests/event-queue) Platform Qualification Tools project.

Here is a non exhaustive list of tested environments:

- Hardware
  - STMicroelectronics STM32U5G9J-DK2
- Compilers / development environments:
  - IAR Embedded Workbench 9.30.1
  - IAR Embedded Workbench 9.50.1
- ThreadX RTOS versions:
  - 6.1
  - 6.2

# MISRA Compliance

This Abstraction Layer implementation is MISRA-compliant (MISRA C:2012) with some noted exception.
It has been verified with Cppcheck v2.13. Here is the list of deviations from MISRA standard:

| Deviation  | Category  | Justification                                                                                                   |
|:----------:|:---------:|:--------------------------------------------------------------------------------------------------------------- |
|  Rule 8.4  |  Required | A compatible declaration is defined in headers provided by the VEE Port.                                        |
|  Rule 8.7  |  Advisory | API function, external linkage mandatory.                                                                       |
|  Rule 8.9  |  Advisory | Threadx RTOS requires to have the thread structure and thread name in global access, not in the stack.          |
|  Rule 11.3 |  Required | From sni.h with SNI_getArrayLength, cast used by many C framework to factorize code.                            |
|  Rule 11.5 |  Required | Conversion from void* to another pointer type necessary to be configurable.                                     |
|  Rule 11.8 |  Required | The ThreadX API prevents the use of the const keyword for the pointer type cast.                                |
|  Rule 18.4 |  Advisory | From sni.h with SNI_getArrayLength, used for configurable C library.                                            |
|  Rule 19.2 |  Required | The union keyword here is useful to parse the data structure.                                                   |

# Dependencies

- MicroEJ Architecture `7.x` or higher.
- ThreadX RTOS `6.1` or higher.

# Source

N/A

# Restrictions

The current version of this Event Queue port does not support sending events from an interrupt.

---
_Copyright 2024 MicroEJ Corp. All rights reserved._
_Use of this source code is governed by a BSD-style license that can be found with this software._
