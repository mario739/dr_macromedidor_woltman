#include "dr_macrometer.h"

/**
 * @brief 
 * 
 * @param self 
 * @return int32_t 
 */
int32_t macrometer_wt_int(macrometer_ctx_t * self, uint8_t val)
{
    int32_t ret=0;

    self->pulse_n=0;
    self->l_pulse=val;
    return ret;
}

/**
 * @brief 
 * 
 * @param self 
 * @param val 
 * @return int32_t 
 */
int32_t macrometer_wt_get_caudal(macrometer_ctx_t * self, uint8_t * val)
{
    int32_t ret=0;
    
    val=self->pulse_n*100;

    return ret;
}
/**
 * @brief 
 * 
 * @param self 
 * @return int32_t 
 */

int32_t macrometer_reset_values(macrometer_ctx_t * self)
{
    int32_t ret=0;
    self->l_pulse=0;
    
    return ret;

}


/**
 * @}
 * 
 */