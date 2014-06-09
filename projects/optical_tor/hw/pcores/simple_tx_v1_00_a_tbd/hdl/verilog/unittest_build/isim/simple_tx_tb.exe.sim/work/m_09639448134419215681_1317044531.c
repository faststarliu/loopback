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
static const char *ng0 = "/local/scratch-1/nm525/workbench/ppon/wb/tor_copy/projects/optical_tor/hw/pcores/simple_tx_v1_00_a_workingfine/hdl/verilog/axi4_lite_regs.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_111_0(char *t0)
{
    char t14[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 11280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 12344);
    *((int *)t2) = 1;
    t3 = (t0 + 11312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 9088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 9248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 9408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 10048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 9088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(121, ng0);

LAB14:    xsi_set_current_line(122, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 10208);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB13;

LAB9:    xsi_set_current_line(129, ng0);

LAB19:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 10048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t6, 3, t7, 32);
    t15 = (t0 + 10208);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 10048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2376);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB13;

LAB11:    xsi_set_current_line(136, ng0);

LAB27:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 9408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 3U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t15 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t23 = (t14 + 4);
    t24 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t24);
    t22 = (t20 ^ t21);
    t25 = (t19 | t22);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t33 = (t25 & t29);
    if (t33 != 0)
        goto LAB31;

LAB28:    if (t28 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t32) = 1;

LAB31:    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 9408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 3U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t15 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t23 = (t14 + 4);
    t24 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t24);
    t22 = (t20 ^ t21);
    t25 = (t19 | t22);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t33 = (t25 & t29);
    if (t33 != 0)
        goto LAB39;

LAB36:    if (t28 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t32) = 1;

LAB39:    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 9408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 3U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t15 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t23 = (t14 + 4);
    t24 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t24);
    t22 = (t20 ^ t21);
    t25 = (t19 | t22);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t33 = (t25 & t29);
    if (t33 != 0)
        goto LAB47;

LAB44:    if (t28 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t32) = 1;

LAB47:    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(149, ng0);

LAB52:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB50:
LAB42:
LAB34:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB13;

LAB15:    xsi_set_current_line(123, ng0);

LAB18:    xsi_set_current_line(124, ng0);
    t5 = (t0 + 4368U);
    t6 = *((char **)t5);
    t5 = (t0 + 9568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 9248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB17;

LAB22:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(133, ng0);
    t30 = (t0 + 1560);
    t31 = *((char **)t30);
    t30 = (t0 + 9248);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 2);
    goto LAB26;

LAB30:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(140, ng0);

LAB35:    xsi_set_current_line(141, ng0);
    t39 = (t0 + 7168);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 6528);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 32);
    goto LAB34;

LAB38:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(143, ng0);

LAB43:    xsi_set_current_line(144, ng0);
    t39 = (t0 + 7488);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 6528);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 32);
    goto LAB42;

LAB46:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(146, ng0);

LAB51:    xsi_set_current_line(147, ng0);
    t39 = (t0 + 7808);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 6528);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 32);
    goto LAB50;

LAB53:    xsi_set_current_line(152, ng0);

LAB56:    xsi_set_current_line(153, ng0);
    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    t5 = (t0 + 9248);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 2);
    goto LAB55;

}

static void Always_159_1(char *t0)
{
    char t14[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 11528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 12360);
    *((int *)t2) = 1;
    t3 = (t0 + 11560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);

LAB5:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 8768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 8928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 9728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 8288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 8768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(169, ng0);

LAB14:    xsi_set_current_line(170, ng0);
    t5 = (t0 + 3408U);
    t7 = *((char **)t5);
    t5 = (t0 + 9888);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB13;

LAB9:    xsi_set_current_line(175, ng0);

LAB19:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB13;

LAB11:    xsi_set_current_line(189, ng0);

LAB33:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5728);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB13;

LAB15:    xsi_set_current_line(171, ng0);

LAB18:    xsi_set_current_line(172, ng0);
    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    t5 = (t0 + 8928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 2);
    goto LAB17;

LAB20:    xsi_set_current_line(178, ng0);

LAB23:    xsi_set_current_line(179, ng0);
    t5 = (t0 + 9728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 3U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = ((char*)((ng6)));
    memset(t24, 0, 8);
    t25 = (t14 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB27;

LAB24:    if (t36 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t24) = 1;

LAB27:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(183, ng0);

LAB32:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB30:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 8928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB22;

LAB26:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(179, ng0);

LAB31:    xsi_set_current_line(180, ng0);
    t46 = (t0 + 3728U);
    t47 = *((char **)t46);
    t46 = (t0 + 8128);
    xsi_vlogvar_assign_value(t46, t47, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB30;

LAB34:    xsi_set_current_line(192, ng0);

LAB37:    xsi_set_current_line(193, ng0);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t5 = (t0 + 8928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 2);
    goto LAB36;

}

static void Always_199_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 11776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 12376);
    *((int *)t2) = 1;
    t3 = (t0 + 11808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);
    t5 = (t0 + 3248U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(208, ng0);

LAB16:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 9248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9088);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 9568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9408);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 9888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 10368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB14:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 7648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7488);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 7328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 7968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7808);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 8288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 5008U);
    t3 = *((char **)t2);
    t2 = (t0 + 7648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 4848U);
    t3 = *((char **)t2);
    t2 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 5168U);
    t3 = *((char **)t2);
    t2 = (t0 + 7968);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 10208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10048);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(200, ng0);

LAB15:    xsi_set_current_line(201, ng0);
    t29 = (t0 + 1016);
    t30 = *((char **)t29);
    t29 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 9088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_229_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 12024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 12392);
    *((int *)t2) = 1;
    t3 = (t0 + 12056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(229, ng0);

LAB5:    xsi_set_current_line(230, ng0);
    t4 = (t0 + 8448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 8608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}


extern void work_m_09639448134419215681_1317044531_init()
{
	static char *pe[] = {(void *)Always_111_0,(void *)Always_159_1,(void *)Always_199_2,(void *)Always_229_3};
	xsi_register_didat("work_m_09639448134419215681_1317044531", "isim/simple_tx_tb.exe.sim/work/m_09639448134419215681_1317044531.didat");
	xsi_register_executes(pe);
}
