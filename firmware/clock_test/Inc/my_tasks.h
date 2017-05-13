#ifndef __MY_TASKS_H
#define __MY_TASKS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f0xx_hal.h"
#include "cmsis_os.h"
#include "main.h"
#include "shared.h"
#include "helpers.h"
 
void setup_task(void);
void animation_task_start(void const * argument);
void test_task_start(void const * argument);


#ifdef __cplusplus
}
#endif

#endif
