/**
 * @file test_dr_macrometer_wt.c
 * @author Mario Aguilar Montoya (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "unity.h"
#include "dr_macrometer.h"


macrometer_ctx_t config_macrometer;

void test_init_driver(void)
{
    TEST_ASSERT_EQUAL(0,macrometer_wt_int(&config_macrometer,1000));
    TEST_ASSERT_EQUAL_UINT32(0,config_macrometer.pulse_n);
    TEST_ASSERT_EQUAL_UINT32(100,config_macrometer.l_pulse);
}

void test_macrometer_wt_get_caudal(void)
{
    uint8_t var;
    TEST_ASSERT_EQUAL(0,macrometer_wt_get_caudal(&config_macrometer,&var));

    //TEST_ASSERT_EQUAL_UINT8(var,);
}
