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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/root/Documents/ya240/V5NF10/projects/rt_phyrecovery/smartxplorer/loopback/projects/rt_modular_glob/hw/pcores/simple_tx_v1_00_a/hdl/verilog/simple_tx_tb.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static unsigned int ng6[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng7[] = {1U, 0U, 0U, 0U};



static void Initial_177_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 10360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(177, ng0);

LAB4:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 14928);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 14928);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);

LAB15:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 10168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(180, ng0);
    t10 = (t0 + 10168);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(180, ng0);
    t12 = (t0 + 6088);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 6088);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 14928);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

LAB16:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 6088);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t16 = (t6 & t5);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t11 + 4);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB21:    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t15 = (t0 + 6088);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    goto LAB15;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t20 | t24);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB21;

LAB23:    goto LAB1;

}

static void Initial_185_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 10608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(185, ng0);

LAB4:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 4000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 8488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 8808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 9128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 9128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 8968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 9288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 9288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 10416);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8648);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_238_2(char *t0)
{
    char t4[8];
    char t34[128];
    char t35[16];
    char t36[64];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 10856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 11424);
    *((int *)t2) = 1;
    t3 = (t0 + 10888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(238, ng0);

LAB5:    xsi_set_current_line(239, ng0);
    t5 = (t0 + 6248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(246, ng0);

LAB16:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t34, 512, 512, 2U, t7, 256, t5, 256);
    t6 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t6, t34, 0, 0, 256, 0LL);
    t8 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t8, t34, 256, 0, 256, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t35, 64, 64, 2U, t7, 32, t5, 32);
    t6 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t6, t35, 0, 0, 32, 0LL);
    t8 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t8, t35, 32, 0, 32, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 7208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t36, 256, 256, 2U, t7, 128, t5, 128);
    t6 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t6, t36, 0, 0, 128, 0LL);
    t8 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t8, t36, 128, 0, 128, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = (t0 + 7528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t5, 1);
    t6 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 1, 0LL);
    t8 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t8, t4, 1, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2328U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t5, 1);
    t6 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 1, 0LL);
    t8 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t8, t4, 1, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 8168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t5, 1);
    t6 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 1, 0LL);
    t8 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t8, t4, 1, 0, 1, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(239, ng0);

LAB15:    xsi_set_current_line(240, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 256, 0LL);
    t33 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t33, t31, 256, 0, 256, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t2, 32, 0, 32, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 128, 0LL);
    t5 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t5, t2, 128, 0, 128, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 1, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t5 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t5, t2, 1, 0, 1, 0LL);
    goto LAB14;

}

static void Always_256_3(char *t0)
{
    char t4[8];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 11104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 11440);
    *((int *)t2) = 1;
    t3 = (t0 + 11136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(256, ng0);

LAB5:    xsi_set_current_line(257, ng0);
    t5 = (t0 + 6248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 9448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    xsi_vlog_unsigned_add(t33, 64, t5, 64, t6, 64);
    t7 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t7, t33, 0, 0, 64, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(257, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 64, 0LL);
    goto LAB14;

}


extern void work_m_09923225178543379279_1949178628_init()
{
	static char *pe[] = {(void *)Initial_177_0,(void *)Initial_185_1,(void *)Always_238_2,(void *)Always_256_3};
	xsi_register_didat("work_m_09923225178543379279_1949178628", "isim/simple_tx_tb.exe.sim/work/m_09923225178543379279_1949178628.didat");
	xsi_register_executes(pe);
}
