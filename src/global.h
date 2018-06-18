//
// Created by Srdan Milakovic on 5/16/18.
//

#ifndef OPENSHMEM_COLLECTIVE_ROUTINES_GLOBAL_H
#define OPENSHMEM_COLLECTIVE_ROUTINES_GLOBAL_H

#include <shmem.h>
#include "util/wraper.h"

#define SHCOLL_BCAST_SYNC_SIZE 2

#define SHCOLL_SYNC_VALUE 0

#define PE_SIZE_LOG (32)

/* TODO chose correct values */
#define SHCOLL_ALLTOALL_SYNC_SIZE 64
#define SHCOLL_ALLTOALLS_SYNC_SIZE SHMEM_ALLTOALLS_SYNC_SIZE
#define SHCOLL_BARRIER_SYNC_SIZE SHMEM_BARRIER_SYNC_SIZE
#define SHCOLL_COLLECT_SYNC_SIZE 68
#define SHCOLL_REDUCE_SYNC_SIZE (PE_SIZE_LOG * 2)
#define SHCOLL_REDUCE_MIN_WRKDATA_SIZE SHMEM_REDUCE_MIN_WRKDATA_SIZE

#endif //OPENSHMEM_COLLECTIVE_ROUTINES_GLOBAL_H
