/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#ifndef _ALLOCMAN_MSPACE_H_
#define _ALLOCMAN_MSPACE_H_

#include <stdlib.h>
#include <allocman/properties.h>

struct allocman;

struct mspace_interface {
    void *(*alloc)(struct allocman *alloc, void *cookie, size_t bytes, int *error);
    void (*free)(struct allocman *alloc, void *cookie, void *ptr, size_t bytes);
    struct allocman_properties properties;
    void *mspace;
};

#endif
