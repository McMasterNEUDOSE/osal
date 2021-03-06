/*
 * 
 *    Copyright (c) 2020, United States government as represented by the
 *    administrator of the National Aeronautics Space Administration.
 *    All rights reserved. This software was created at NASA Goddard
 *    Space Flight Center pursuant to government contracts.
 * 
 *    This is governed by the NASA Open Source Agreement and may be used,
 *    distributed and modified only according to the terms of that agreement.
 * 
 */


/**
 * \file     os-impl-tasks.h
 * \ingroup  vxworks
 * \author   joseph.p.hickey@nasa.gov
 *
 */

#ifndef INCLUDE_OS_IMPL_TASKS_H_
#define INCLUDE_OS_IMPL_TASKS_H_

#include <osconfig.h>
#include <taskLib.h>


/*tasks */
typedef struct
{
    WIND_TCB tcb;           /* Must be first */
    TASK_ID vxid;
    void *heap_block;    /* set non-null if the stack was obtained with malloc() */
    long heap_block_size;
} OS_impl_task_internal_record_t;


/* Tables where the OS object information is stored */
extern OS_impl_task_internal_record_t      OS_impl_task_table          [OS_MAX_TASKS];

#endif  /* INCLUDE_OS_IMPL_TASKS_H_ */

