/**
 * @file dr_macrometer.h
 * @author Mario Fernando Aguilar Montoya (fernandoaguilar731010@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MACROMETER_WT
#define MACROMETER_WT

#ifdef __cplusplus
extern "C"{
#endif

/*Includes------------------------------------------------------------------*/
#include<stdio.h>
#include<stdint.h>



typedef struct 
{
    uint32_t pulse_n;
    uint32_t l_pulse;   
}macrometer_ctx_t;

int32_t macrometer_wt_int(macrometer_ctx_t * self, uint8_t val);
int32_t macrometer_reset_values(macrometer_ctx_t * self);
int32_t macrometer_wt_get_caudal(macrometer_ctx_t * self, uint8_t * val);

#ifdef __cplusplus
}

#endif
#endif
