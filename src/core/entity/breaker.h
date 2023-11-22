#ifndef __BREAKER_H__
#define __BREAKER_H__

#include <stdint.h>

typedef uint16_t ID;

typedef struct _ecb_breaker
{
    ID circuit_id;
} CircuitBreaker;

#endif