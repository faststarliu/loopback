/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *PROC_COMMON_V3_00_A_P_2444876401;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *PROC_COMMON_V3_00_A_P_1541446978;
char *PROC_COMMON_V3_00_A_P_4147123038;
char *IEEE_P_1242562249;
char *IEEE_P_0017514958;
char *SYNOPSYS_P_3308480207;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_03609373904439264904_0519109469_init();
    work_m_12884380412608287112_1823053714_init();
    work_m_03131316089330326538_0765429715_init();
    work_m_02858827518971604916_4074603411_init();
    work_m_09923225178543385813_1949178628_init();
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    proc_common_v3_00_a_p_2444876401_init();
    proc_common_v3_00_a_p_1541446978_init();
    ieee_p_1242562249_init();
    synopsys_p_3308480207_init();
    ieee_p_0017514958_init();
    proc_common_v3_00_a_p_4147123038_init();
    axi_lite_ipif_v1_01_a_a_3744965942_3306564128_init();
    axi_lite_ipif_v1_01_a_a_1097472162_3306564128_init();
    axi_lite_ipif_v1_01_a_a_0950711865_3306564128_init();
    work_a_3283278744_3306564128_init();


    xsi_register_tops("work_m_09923225178543385813_1949178628");

    PROC_COMMON_V3_00_A_P_2444876401 = xsi_get_engine_memory("proc_common_v3_00_a_p_2444876401");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    PROC_COMMON_V3_00_A_P_1541446978 = xsi_get_engine_memory("proc_common_v3_00_a_p_1541446978");
    PROC_COMMON_V3_00_A_P_4147123038 = xsi_get_engine_memory("proc_common_v3_00_a_p_4147123038");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_0017514958 = xsi_get_engine_memory("ieee_p_0017514958");
    SYNOPSYS_P_3308480207 = xsi_get_engine_memory("synopsys_p_3308480207");

    return xsi_run_simulation(argc, argv);

}
