/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Dma buf container header
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 */

#ifndef _DMA_BUF_CONTAINER_H_
#define _DMA_BUF_CONTAINER_H_

#include <linux/types.h>
#include <linux/compat.h>

#include <uapi/linux/dma-buf.h>


struct dma_buf_mask {
	int	dmabuf_container;
	__u32	reserved;
	__u32	mask[2];
};

#define DMABUF_CONTAINER_BASE        'D'
#define DMABUF_CONTAINER_IOCTL_MERGE	\
	_IOWR(DMABUF_CONTAINER_BASE, 1, struct dma_buf_merge)
#define DMABUF_CONTAINER_IOCTL_SET_MASK	\
	_IOW(DMABUF_CONTAINER_BASE, 3, struct dma_buf_mask)
#define DMABUF_CONTAINER_IOCTL_GET_MASK	\
	_IOR(DMABUF_CONTAINER_BASE, 4, struct dma_buf_mask)

#ifdef CONFIG_COMPAT

struct compat_dma_buf_merge {
	compat_uptr_t dma_bufs;
	__s32 count;
	__s32 dmabuf_container;
	__u32 reserved[2];
};
#define DMABUF_CONTAINER_COMPAT_IOCTL_MERGE \
	_IOWR(DMABUF_CONTAINER_BASE, 1, struct compat_dma_buf_merge)

#endif

#endif /* _DMA_BUF_CONTAINER_H_ */
