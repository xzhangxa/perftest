/* SPDX-License-Identifier: GPL-2.0 OR BSD-2-Clause */
/*
 * Intel XPU (Level Zero) memory backend for perftest
 */
#ifndef XPU_MEMORY_H
#define XPU_MEMORY_H

#include "memory.h"
#include "config.h"

struct perftest_parameters;

bool xpu_memory_supported();

struct memory_ctx *xpu_memory_create(struct perftest_parameters *params);

#ifndef HAVE_XPU
inline bool xpu_memory_supported() { return false; }
inline struct memory_ctx *xpu_memory_create(struct perftest_parameters *params) { return NULL; }
#endif

#endif /* XPU_MEMORY_H */
