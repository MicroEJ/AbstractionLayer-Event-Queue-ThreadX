/*
 * C
 *
 * Copyright 2023-2024 MicroEJ Corp. All rights reserved.
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
 * @version 1.0.0
 */


/**
 * Max number of events in the queue.
 */
#define EVENT_QUEUE_SIZE (100)

/**
 * Event function succeeded.
 */
#define EVENT_OK (0)

/**
 * An error was detected during the method execution.
 */
#define EVENT_NOK (-1)

jbyte read_one_byte(void);
jshort read_two_bytes(void);
jint read_four_bytes(void);
jlong read_eight_bytes(void);

#define LLEVENT_ERROR_TRACE printf("[Event] Error, "); printf

#ifdef __cplusplus
}
#endif

#endif // EVENT_CONFIGURATION_H
