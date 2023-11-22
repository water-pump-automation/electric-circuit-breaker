#ifndef __MONITOR_H__
#define __MONITOR_H__

#include <stdint.h>

typedef char *Address;
typedef char *Route;
typedef char *Action;
typedef uint16_t Port;

typedef struct _ecb_monitor
{
    Address address;
    Port port;
    Route route;
    Action action;
} NetworkMonitor;

#endif