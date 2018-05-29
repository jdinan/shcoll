//
// Created by Srdan Milakovic on 5/23/18.
//

#ifndef OPENSHMEM_COLLECTIVE_ROUTINES_WRAPER_1_3_H
#define OPENSHMEM_COLLECTIVE_ROUTINES_WRAPER_1_3_H

#if SHMEM_MAJOR_VERSION == 1 && SHMEM_MINOR_VERSION == 3

#define shmem_sync_all shmem_barrier_all
#define shmem_long_atomic_inc shmem_long_inc
#define shmem_long_atomic_fetch_add shmem_long_fadd
#define shmem_long_atomic_add shmem_long_add
#define shmem_long_atomic_fetch shmem_long_fetch
#define shmem_size_atomic_set shmem_long_set
#define shmem_size_atomic_add shmem_long_fadd
#define shmem_size_wait_until shmem_long_wait_until
#define shmem_size_put shmem_long_put
#define shmem_size_p shmem_long_p

#include <string.h>

static void *shmem_calloc(size_t count, size_t size) {
    void *mem = shmem_malloc(count * size);
    memset(mem, 0, count * size);
    return mem;
}


#endif

#endif //OPENSHMEM_COLLECTIVE_ROUTINES_WRAPER_1_3_H
