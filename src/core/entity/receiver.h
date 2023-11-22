#ifndef __RECEIVER_H__
#define __RECEIVER_H__

typedef int Signal;

#define OK 1
#define NOK 0

typedef struct _ecb_receiver {
    char *topic;
    char *accessToken;
} Receiver;

Signal Receive(Receiver *receiver);

#endif