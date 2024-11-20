#ifndef STM32F1_MUTEX_H
#define STM32F1_MUTEX_H

#include <stdint.h>


typedef struct Mutex_struct *Mutex_Handle;

Mutex_Handle mutex_creat(void);
void mutex_delete(Mutex_Handle mutex);
uint8_t mutex_lock(Mutex_Handle mutex,uint32_t Ticks);
uint8_t mutex_unlock( Mutex_Handle mutex);


#endif //STM32F1_MUTEX_H
