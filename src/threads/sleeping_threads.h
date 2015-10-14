#ifndef SLEEPING_THREADS_H
#define SLEEPING_THREADS_H

#include "hash.h"

/* Hash table for storing sleeping threads */
struct hash sleeping_hash;

hash_hash_func sleeping_hash_func;
hash_less_func sleeping_hash_less_func;

#endif
