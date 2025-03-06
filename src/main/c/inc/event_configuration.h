/*
 * C
 *
 * Copyright 2023-2025 MicroEJ Corp. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be found with this software.
 */

#ifndef  EVENT_CONFIGURATION_H
#define  EVENT_CONFIGURATION_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file
 * @brief LLEVENT configuration file for ThreadX implementation.
 * @author MicroEJ Developer Team
 * @version 1.1.1
 */

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------

// If this file does not exist in your VEE Port, create it. Then, define the
// macro with the de default value that does not fit your use case.
#include "veeport_configuration.h"

// ----------------------------------------------------------------------------
// Macros and defines
// ----------------------------------------------------------------------------

/**
 * @brief Sets the Max number of events in the queue. (default is 100)
 */
#if !defined(LLEVENT_QUEUE_SIZE)
#define LLEVENT_QUEUE_SIZE (100)
#endif // LLEVENT_QUEUE_SIZE

/**
 * @brief Sets function used to print LLEVENT error logs. (default is printf)
 */
#if !defined(LLEVENT_ERROR_TRACE)
// cppcheck-suppress [misra-c2012-21.6]: The Standard Library input/output is only used for debug purpose.
#include <stdio.h>
#define LLEVENT_ERROR_TRACE  printf("[Event] Error, "); printf
#endif // LLEVENT_ERROR_TRACE

// ----------------------------------------------------------------------------
// End
// ----------------------------------------------------------------------------

#ifdef __cplusplus
}
#endif

#endif // EVENT_CONFIGURATION_H
