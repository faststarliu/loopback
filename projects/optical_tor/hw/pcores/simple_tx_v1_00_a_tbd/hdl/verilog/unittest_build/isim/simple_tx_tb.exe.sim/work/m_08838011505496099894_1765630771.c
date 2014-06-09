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
static const char *ng0 = "/local/scratch-1/nm525/workbench/ppon/wb/tor_copy/projects/optical_tor/hw/pcores/simple_tx_v1_00_a_workingfine/hdl/verilog/simple_tx.v";
static unsigned int ng1[] = {3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U, 3405692655U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {255U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {2U, 0U};



static void Cont_140_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 12984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 256);
    xsi_driver_vfirst_trans(t3, 0, 255);

LAB1:    return;
}

static void Cont_142_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 13232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 11432);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 32, t7, 32);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB4:    if (t22 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t10) = 1;

LAB7:    memset(t4, 0, 8);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t26) != 0)
        goto LAB10;

LAB11:    t33 = (t4 + 4);
    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t33) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 14472);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 14296);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB11;

LAB12:    t37 = ((char*)((ng3)));
    goto LAB13;

LAB14:    t42 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t42, 1);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Always_148_2(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t56[16];
    char t57[16];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t59;

LAB0:    t1 = (t0 + 13480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 14312);
    *((int *)t2) = 1;
    t3 = (t0 + 13512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 4472U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(159, ng0);

LAB14:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB75;

LAB72:    if (t18 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t6) = 1;

LAB75:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB76;

LAB77:
LAB78:
LAB46:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(151, ng0);

LAB13:    xsi_set_current_line(152, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(161, ng0);

LAB22:    xsi_set_current_line(162, ng0);
    t28 = ((char*)((ng5)));
    t29 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4632U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB21;

LAB25:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(165, ng0);

LAB30:    xsi_set_current_line(166, ng0);
    t21 = (t0 + 11432);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1288);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t30, 32, t29, 32);
    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB34;

LAB31:    if (t44 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t32) = 1;

LAB34:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(174, ng0);

LAB39:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 11912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t57, 63, t4, 63, 1);
    t5 = (t0 + 11912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t22);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t21) = t14;
    xsi_vlogtype_concat(t56, 64, 64, 2U, t6, 1, t57, 63);
    t28 = (t0 + 11912);
    xsi_vlogvar_wait_assign_value(t28, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 11912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t57, 63, t4, 63, 1);
    t5 = (t0 + 11912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t22);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t21) = t14;
    xsi_vlogtype_concat(t56, 64, 64, 2U, t6, 1, t57, 63);
    t28 = (t0 + 9992);
    xsi_vlogvar_wait_assign_value(t28, t56, 0, 0, 64, 0LL);

LAB37:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 11432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t4, 16, t5, 16);
    t7 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 16, 0LL);
    goto LAB29;

LAB33:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(167, ng0);

LAB38:    xsi_set_current_line(168, ng0);
    t54 = ((char*)((ng4)));
    t55 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 8, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 10632);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB37;

LAB42:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(182, ng0);

LAB47:    xsi_set_current_line(183, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 4632U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB46;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(186, ng0);

LAB55:    xsi_set_current_line(187, ng0);
    t21 = (t0 + 11432);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 16, t28, 16, t29, 16);
    t30 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 11432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t7 = *((char **)t5);
    t5 = (t0 + 1560);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t7, 32, t8, 32);
    t5 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t6, 32, t5, 32);
    memset(t32, 0, 8);
    t21 = (t4 + 4);
    t22 = (t31 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t32) = 1;

LAB59:    t29 = (t32 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB54;

LAB58:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(189, ng0);

LAB63:    xsi_set_current_line(190, ng0);
    t30 = (t0 + 9432U);
    t33 = *((char **)t30);
    t30 = ((char*)((ng3)));
    memset(t58, 0, 8);
    t34 = (t33 + 4);
    t47 = (t30 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t30);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t47);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t47);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB67;

LAB64:    if (t44 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t58) = 1;

LAB67:    t54 = (t58 + 4);
    t49 = *((unsigned int *)t54);
    t50 = (~(t49));
    t51 = *((unsigned int *)t58);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB70:    goto LAB62;

LAB66:    t48 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(191, ng0);

LAB71:    xsi_set_current_line(192, ng0);
    t55 = ((char*)((ng3)));
    t59 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t59, t55, 0, 0, 2, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB70;

LAB74:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(201, ng0);

LAB79:    xsi_set_current_line(202, ng0);
    t28 = ((char*)((ng5)));
    t29 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 9592U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t56, 64, t3, 63, 0);
    t2 = (t0 + 9992);
    xsi_vlogvar_wait_assign_value(t2, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 9592U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t56, 64, t3, 63, 0);
    t2 = (t0 + 11912);
    xsi_vlogvar_wait_assign_value(t2, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB78;

}

static void Cont_212_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14536);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_216_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[16];
    char t55[16];
    char t60[8];
    char t70[8];
    char t80[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 13976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 14328);
    *((int *)t2) = 1;
    t3 = (t0 + 14008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(217, ng0);

LAB5:    xsi_set_current_line(218, ng0);
    t4 = (t0 + 4472U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(227, ng0);

LAB14:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 11272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 11272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 11272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;

LAB68:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 11272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB83;

LAB80:    if (t18 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t6) = 1;

LAB83:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB84;

LAB85:
LAB86:
LAB71:
LAB37:
LAB21:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 9432U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB116;

LAB113:    if (t18 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t6) = 1;

LAB116:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB117;

LAB118:
LAB119:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(219, ng0);

LAB13:    xsi_set_current_line(220, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(229, ng0);

LAB22:    xsi_set_current_line(230, ng0);
    t28 = (t0 + 5432U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB26;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t30) = 1;

LAB26:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB21;

LAB25:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(231, ng0);

LAB30:    xsi_set_current_line(232, ng0);
    t52 = ((char*)((ng3)));
    t53 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 4952U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t55, 63, t3, 63, 1);
    t2 = (t0 + 4952U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t54, 64, 64, 2U, t6, 1, t55, 63);
    t7 = (t0 + 12072);
    xsi_vlogvar_wait_assign_value(t7, t54, 0, 0, 64, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB29;

LAB33:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(239, ng0);

LAB38:    xsi_set_current_line(240, ng0);
    t28 = (t0 + 5432U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB42;

LAB39:    if (t42 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t30) = 1;

LAB42:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB37;

LAB41:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(241, ng0);

LAB46:    xsi_set_current_line(242, ng0);
    t52 = (t0 + 12072);
    t53 = (t52 + 56U);
    t56 = *((char **)t53);
    xsi_vlog_get_part_select_value(t55, 63, t56, 63, 1);
    t57 = (t0 + 12072);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 0);
    t65 = (t64 & 1);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t61) = t68;
    xsi_vlogtype_concat(t54, 64, 64, 2U, t60, 1, t55, 63);
    t69 = (t0 + 12072);
    xsi_vlogvar_wait_assign_value(t69, t54, 0, 0, 64, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 11592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t4, 16, t5, 16);
    t7 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4952U);
    t3 = *((char **)t2);
    t2 = (t0 + 12072);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_equal(t54, 64, t3, 64, t5, 64);
    t7 = (t54 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t54);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB49:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 11592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t30) = 1;

LAB53:    t28 = (t30 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB47:    xsi_set_current_line(245, ng0);
    t8 = ((char*)((ng3)));
    t21 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 1, 0LL);
    goto LAB49;

LAB52:    t22 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(249, ng0);
    t29 = (t0 + 5752U);
    t31 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t60, 0, 8);
    t32 = (t31 + 4);
    t45 = (t29 + 4);
    t33 = *((unsigned int *)t31);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t45);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t45);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB60;

LAB57:    if (t42 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t60) = 1;

LAB60:    t52 = (t60 + 4);
    t47 = *((unsigned int *)t52);
    t48 = (~(t47));
    t49 = *((unsigned int *)t60);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(252, ng0);

LAB64:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB63:    goto LAB56;

LAB59:    t46 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(250, ng0);
    t53 = ((char*)((ng3)));
    t56 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t56, t53, 0, 0, 2, 0LL);
    goto LAB63;

LAB67:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(259, ng0);

LAB72:    xsi_set_current_line(260, ng0);
    t28 = (t0 + 11752);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t45 = (t31 + 4);
    t46 = (t32 + 4);
    t33 = *((unsigned int *)t31);
    t34 = *((unsigned int *)t32);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t45);
    t37 = *((unsigned int *)t46);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t45);
    t41 = *((unsigned int *)t46);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB76;

LAB73:    if (t42 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t30) = 1;

LAB76:    t53 = (t30 + 4);
    t47 = *((unsigned int *)t53);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 10952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);

LAB79:    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB71;

LAB75:    t52 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(261, ng0);
    t56 = (t0 + 10792);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t58, 32, t59, 32);
    t61 = (t0 + 10792);
    xsi_vlogvar_wait_assign_value(t61, t60, 0, 0, 32, 0LL);
    goto LAB79;

LAB82:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(268, ng0);

LAB87:    xsi_set_current_line(269, ng0);
    t28 = (t0 + 5752U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB91;

LAB88:    if (t42 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t30) = 1;

LAB91:    memset(t60, 0, 8);
    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t46) != 0)
        goto LAB94;

LAB95:    t53 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t53);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB96;

LAB97:    memcpy(t86, t60, 8);

LAB98:    t118 = (t86 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t86);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB110;

LAB111:
LAB112:    goto LAB86;

LAB90:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t60) = 1;
    goto LAB95;

LAB94:    t52 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB95;

LAB96:    t56 = (t0 + 5432U);
    t57 = *((char **)t56);
    t56 = ((char*)((ng3)));
    memset(t70, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t56);
    t68 = (t66 ^ t67);
    t71 = *((unsigned int *)t58);
    t72 = *((unsigned int *)t59);
    t73 = (t71 ^ t72);
    t74 = (t68 | t73);
    t75 = *((unsigned int *)t58);
    t76 = *((unsigned int *)t59);
    t77 = (t75 | t76);
    t78 = (~(t77));
    t79 = (t74 & t78);
    if (t79 != 0)
        goto LAB102;

LAB99:    if (t77 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t70) = 1;

LAB102:    memset(t80, 0, 8);
    t62 = (t70 + 4);
    t81 = *((unsigned int *)t62);
    t82 = (~(t81));
    t83 = *((unsigned int *)t70);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t62) != 0)
        goto LAB105;

LAB106:    t87 = *((unsigned int *)t60);
    t88 = *((unsigned int *)t80);
    t89 = (t87 & t88);
    *((unsigned int *)t86) = t89;
    t90 = (t60 + 4);
    t91 = (t80 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB98;

LAB101:    t61 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t80) = 1;
    goto LAB106;

LAB105:    t69 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB106;

LAB107:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t60 + 4);
    t101 = (t80 + 4);
    t102 = *((unsigned int *)t60);
    t103 = (~(t102));
    t104 = *((unsigned int *)t100);
    t105 = (~(t104));
    t106 = *((unsigned int *)t80);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t114 & t112);
    t115 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t115 & t113);
    t116 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t116 & t112);
    t117 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t117 & t113);
    goto LAB109;

LAB110:    xsi_set_current_line(270, ng0);
    t124 = ((char*)((ng3)));
    t125 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 2, 0LL);
    goto LAB112;

LAB115:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(274, ng0);

LAB120:    xsi_set_current_line(275, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 10792);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB119;

}


extern void work_m_08838011505496099894_1765630771_init()
{
	static char *pe[] = {(void *)Cont_140_0,(void *)Cont_142_1,(void *)Always_148_2,(void *)Cont_212_3,(void *)Always_216_4};
	xsi_register_didat("work_m_08838011505496099894_1765630771", "isim/simple_tx_tb.exe.sim/work/m_08838011505496099894_1765630771.didat");
	xsi_register_executes(pe);
}
