#include "src/dr_macrometer.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




macrometer_ctx_t config_macrometer;



void test_init_driver(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((macrometer_wt_int(&config_macrometer,1000))), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((0)), (UNITY_INT)(UNITY_UINT32)((config_macrometer.pulse_n)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_UINT32);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((100)), (UNITY_INT)(UNITY_UINT32)((config_macrometer.l_pulse)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_UINT32);

}



void test_macrometer_wt_get_caudal(void)

{

    uint8_t var;

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((macrometer_wt_get_caudal(&config_macrometer,&var))), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);





}
