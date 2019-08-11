/*
 * Header file for reservations for dma-buf and ttm
 *
 * Copyright(C) 2011 Linaro Limited. All rights reserved.
 * Copyright (C) 2012-2013 Canonical Ltd
 * Copyright (C) 2012 Texas Instruments
 *
 * Authors:
 * Rob Clark <robdclark@gmail.com>
 * Maarten Lankhorst <maarten.lankhorst@canonical.com>
 * Thomas Hellstrom <thellstrom-at-vmware-dot-com>
 *
 * Based on bo.c which bears the following copyright notice,
 * but is dual licensed:
 *
 * Copyright (c) 2006-2009 VMware, Inc., Palo Alto, CA., USA
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDERS, AUTHORS AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef _LINUX_RESERVATION_H
#define _LINUX_RESERVATION_H

#include <linux/dma-resv.h>

#define reservation_object_list dma_resv_list
#define reservation_object dma_resv
#define reservation_object_held dma_resv_held
#define reservation_object_assert_held dma_resv_assert_held
#define reservation_object_get_excl dma_resv_get_excl
#define reservation_object_get_list dma_resv_get_list
#define reservation_object_fences dma_resv_fences
#define reservation_object_get_excl_rcu dma_resv_get_excl_rcu
#define reservation_object_lock dma_resv_lock
#define reservation_object_lock_interruptible dma_resv_lock_interruptible
#define reservation_object_lock_slow dma_resv_lock_slow
#define reservation_object_lock_slow_interruptible dma_resv_lock_slow_interruptible
#define reservation_object_trylock dma_resv_trylock
#define reservation_object_is_locked dma_resv_is_locked
#define reservation_object_locking_ctx dma_resv_locking_ctx
#define reservation_object_unlock dma_resv_unlock
#define reservation_object_init dma_resv_init
#define reservation_object_fini dma_resv_fini
#define reservation_object_reserve_shared dma_resv_reserve_shared
#define reservation_object_add_shared_fence dma_resv_add_shared_fence
#define reservation_object_add_excl_fence dma_resv_add_excl_fence
#define reservation_object_get_fences_rcu dma_resv_get_fences_rcu
#define reservation_object_copy_fences dma_resv_copy_fences
#define reservation_object_wait_timeout_rcu dma_resv_wait_timeout_rcu
#define reservation_object_test_signaled_rcu dma_resv_test_signaled_rcu

#endif /* _LINUX_RESERVATION_H */
