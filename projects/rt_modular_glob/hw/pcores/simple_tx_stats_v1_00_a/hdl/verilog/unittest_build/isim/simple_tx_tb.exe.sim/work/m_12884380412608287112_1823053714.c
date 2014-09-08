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
static const char *ng0 = "/root/Documents/ya240/V5NF10/projects/rt_phyrecovery/smartxplorer/loopback/projects/rt_modular_glob/hw/pcores/simple_tx_stats_v1_00_a/hdl/verilog/simple_synch_fifo.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t0 = 1;
    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5280);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(58, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 5440);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t7, 32, t10, 32);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(58, ng0);

LAB6:    xsi_set_current_line(59, ng0);
    t18 = (t1 + 5280);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 5280);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Cont_88_0(char *t0)
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

LAB0:    t1 = (t0 + 6352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4480);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 744);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
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

LAB20:    t43 = (t0 + 7808);
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
    t56 = (t0 + 7664);
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

LAB12:    t37 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t42 = ((char*)((ng5)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t42, 1);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Cont_89_1(char *t0)
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

LAB0:    t1 = (t0 + 6600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4640);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 744);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
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

LAB20:    t43 = (t0 + 7872);
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
    t56 = (t0 + 7680);
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

LAB12:    t37 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t42 = ((char*)((ng5)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t42, 1);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Always_93_2(char *t0)
{
    char t13[8];
    char t51[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;

LAB0:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7696);
    *((int *)t2) = 1;
    t3 = (t0 + 6880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(99, ng0);

LAB10:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB11;

LAB12:
LAB13:    t36 = (t13 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t2) == 0)
        goto LAB37;

LAB39:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB40:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB42;

LAB41:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t12 = (t0 + 2640U);
    t19 = *((char **)t12);
    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t19);
    t25 = (t23 & t24);
    *((unsigned int *)t51) = t25;
    t12 = (t13 + 4);
    t36 = (t19 + 4);
    t42 = (t51 + 4);
    t26 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t36);
    t30 = (t26 | t27);
    *((unsigned int *)t42) = t30;
    t31 = *((unsigned int *)t42);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB43;

LAB44:
LAB45:    t50 = (t51 + 4);
    t58 = *((unsigned int *)t50);
    t59 = (~(t58));
    t60 = *((unsigned int *)t51);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t2) == 0)
        goto LAB79;

LAB81:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB82:    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB84;

LAB83:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t51) = t25;
    t19 = (t3 + 4);
    t36 = (t13 + 4);
    t42 = (t51 + 4);
    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t36);
    t30 = (t26 | t27);
    *((unsigned int *)t42) = t30;
    t31 = *((unsigned int *)t42);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB85;

LAB86:
LAB87:    t50 = (t51 + 4);
    t58 = *((unsigned int *)t50);
    t59 = (~(t58));
    t60 = *((unsigned int *)t51);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(124, ng0);

LAB121:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);

LAB90:
LAB48:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(94, ng0);

LAB9:    xsi_set_current_line(95, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB8;

LAB11:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB13;

LAB14:    xsi_set_current_line(100, ng0);

LAB17:    xsi_set_current_line(101, ng0);
    t42 = (t0 + 3120U);
    t43 = *((char **)t42);
    t42 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 5, t4, 5, t5, 5);
    t11 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 5, 0LL);

LAB20:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t51, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB27:    t12 = (t51 + 4);
    t14 = *((unsigned int *)t51);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB28;

LAB29:    t17 = *((unsigned int *)t51);
    t18 = (~(t17));
    t20 = *((unsigned int *)t12);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t51) > 0)
        goto LAB34;

LAB35:    memcpy(t13, t53, 8);

LAB36:    t54 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, 0, 5, 0LL);

LAB23:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(101, ng0);
    t49 = ((char*)((ng5)));
    t50 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 5, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB23;

LAB24:    *((unsigned int *)t51) = 1;
    goto LAB27;

LAB26:    t11 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB27;

LAB28:    t19 = (t0 + 4480);
    t36 = (t19 + 56U);
    t42 = *((char **)t36);
    goto LAB29;

LAB30:    t43 = (t0 + 4480);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 5, t50, 5, t52, 5);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t13, 5, t42, 5, t53, 5);
    goto LAB36;

LAB34:    memcpy(t13, t42, 8);
    goto LAB36;

LAB37:    *((unsigned int *)t13) = 1;
    goto LAB40;

LAB42:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t20);
    goto LAB41;

LAB43:    t33 = *((unsigned int *)t51);
    t34 = *((unsigned int *)t42);
    *((unsigned int *)t51) = (t33 | t34);
    t43 = (t13 + 4);
    t49 = (t19 + 4);
    t35 = *((unsigned int *)t13);
    t37 = (~(t35));
    t38 = *((unsigned int *)t43);
    t39 = (~(t38));
    t40 = *((unsigned int *)t19);
    t41 = (~(t40));
    t44 = *((unsigned int *)t49);
    t45 = (~(t44));
    t28 = (t37 & t39);
    t29 = (t41 & t45);
    t46 = (~(t28));
    t47 = (~(t29));
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t48 & t46);
    t55 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t55 & t47);
    t56 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t56 & t46);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t57 & t47);
    goto LAB45;

LAB46:    xsi_set_current_line(109, ng0);

LAB49:    xsi_set_current_line(110, ng0);
    t52 = (t0 + 3120U);
    t54 = *((char **)t52);
    t52 = (t54 + 4);
    t63 = *((unsigned int *)t52);
    t64 = (~(t63));
    t65 = *((unsigned int *)t54);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t51, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t5) != 0)
        goto LAB55;

LAB56:    t12 = (t51 + 4);
    t14 = *((unsigned int *)t51);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB57;

LAB58:    t17 = *((unsigned int *)t51);
    t18 = (~(t17));
    t20 = *((unsigned int *)t12);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t12) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t51) > 0)
        goto LAB63;

LAB64:    memcpy(t13, t53, 8);

LAB65:    t54 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, 0, 5, 0LL);

LAB52:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t51, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB69:    t12 = (t51 + 4);
    t14 = *((unsigned int *)t51);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB70;

LAB71:    t17 = *((unsigned int *)t51);
    t18 = (~(t17));
    t20 = *((unsigned int *)t12);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t12) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t51) > 0)
        goto LAB76;

LAB77:    memcpy(t13, t53, 8);

LAB78:    t54 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, 0, 6, 0LL);
    goto LAB48;

LAB50:    xsi_set_current_line(110, ng0);
    t68 = ((char*)((ng5)));
    t69 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 5, 0LL);
    goto LAB52;

LAB53:    *((unsigned int *)t51) = 1;
    goto LAB56;

LAB55:    t11 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB56;

LAB57:    t19 = (t0 + 4640);
    t36 = (t19 + 56U);
    t42 = *((char **)t36);
    goto LAB58;

LAB59:    t43 = (t0 + 4640);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 5, t50, 5, t52, 5);
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t13, 5, t42, 5, t53, 5);
    goto LAB65;

LAB63:    memcpy(t13, t42, 8);
    goto LAB65;

LAB66:    *((unsigned int *)t51) = 1;
    goto LAB69;

LAB68:    t11 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB70:    t19 = (t0 + 4800);
    t36 = (t19 + 56U);
    t42 = *((char **)t36);
    goto LAB71;

LAB72:    t43 = (t0 + 4800);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 6, t50, 6, t52, 6);
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t13, 6, t42, 6, t53, 6);
    goto LAB78;

LAB76:    memcpy(t13, t42, 8);
    goto LAB78;

LAB79:    *((unsigned int *)t13) = 1;
    goto LAB82;

LAB84:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t18 | t20);
    goto LAB83;

LAB85:    t33 = *((unsigned int *)t51);
    t34 = *((unsigned int *)t42);
    *((unsigned int *)t51) = (t33 | t34);
    t43 = (t3 + 4);
    t49 = (t13 + 4);
    t35 = *((unsigned int *)t3);
    t37 = (~(t35));
    t38 = *((unsigned int *)t43);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t44 = *((unsigned int *)t49);
    t45 = (~(t44));
    t28 = (t37 & t39);
    t29 = (t41 & t45);
    t46 = (~(t28));
    t47 = (~(t29));
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t48 & t46);
    t55 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t55 & t47);
    t56 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t56 & t46);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t57 & t47);
    goto LAB87;

LAB88:    xsi_set_current_line(116, ng0);

LAB91:    xsi_set_current_line(117, ng0);
    t52 = (t0 + 4640);
    t54 = (t52 + 56U);
    t68 = *((char **)t54);
    t69 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 5, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t51, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t5) != 0)
        goto LAB97;

LAB98:    t12 = (t51 + 4);
    t14 = *((unsigned int *)t51);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB99;

LAB100:    t17 = *((unsigned int *)t51);
    t18 = (~(t17));
    t20 = *((unsigned int *)t12);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t12) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t51) > 0)
        goto LAB105;

LAB106:    memcpy(t13, t53, 8);

LAB107:    t54 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, 0, 5, 0LL);

LAB94:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t51, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t5) != 0)
        goto LAB110;

LAB111:    t12 = (t51 + 4);
    t14 = *((unsigned int *)t51);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB112;

LAB113:    t17 = *((unsigned int *)t51);
    t18 = (~(t17));
    t20 = *((unsigned int *)t12);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t12) > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t51) > 0)
        goto LAB118;

LAB119:    memcpy(t13, t53, 8);

LAB120:    t54 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, 0, 6, 0LL);
    goto LAB90;

LAB92:    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB94;

LAB95:    *((unsigned int *)t51) = 1;
    goto LAB98;

LAB97:    t11 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB99:    t19 = (t0 + 4480);
    t36 = (t19 + 56U);
    t42 = *((char **)t36);
    goto LAB100;

LAB101:    t43 = (t0 + 4480);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 5, t50, 5, t52, 5);
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t13, 5, t42, 5, t53, 5);
    goto LAB107;

LAB105:    memcpy(t13, t42, 8);
    goto LAB107;

LAB108:    *((unsigned int *)t51) = 1;
    goto LAB111;

LAB110:    t11 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB111;

LAB112:    t19 = (t0 + 4800);
    t36 = (t19 + 56U);
    t42 = *((char **)t36);
    goto LAB113;

LAB114:    t43 = (t0 + 4800);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 6, t50, 6, t52, 6);
    goto LAB115;

LAB116:    xsi_vlog_unsigned_bit_combine(t13, 6, t42, 6, t53, 6);
    goto LAB120;

LAB118:    memcpy(t13, t42, 8);
    goto LAB120;

}

static void Always_134_3(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7712);
    *((int *)t2) = 1;
    t3 = (t0 + 7128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);

LAB5:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(143, ng0);

LAB10:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB17:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t13) = 1;

LAB21:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB24:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB25:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;

LAB28:    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB32:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB36:    t22 = (t0 + 3840);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;

LAB40:    t22 = (t0 + 4000);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(135, ng0);

LAB9:    xsi_set_current_line(137, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 3680);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(144, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 3680);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB17;

LAB20:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(147, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4320);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB24;

LAB26:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(150, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4160);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB32;

LAB35:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB39:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB40;

}

static void Always_165_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t17[8];
    char t18[8];
    char t72[64];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7728);
    *((int *)t2) = 1;
    t3 = (t0 + 7376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(165, ng0);

LAB5:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(171, ng0);

LAB16:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t11) == 0)
        goto LAB22;

LAB24:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB25:    t15 = (t13 + 4);
    t16 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t32 = (~(t29));
    *((unsigned int *)t13) = t32;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB27;

LAB26:    t41 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t41 & 1U);
    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & 1U);
    t43 = *((unsigned int *)t3);
    t44 = *((unsigned int *)t13);
    t45 = (t43 & t44);
    *((unsigned int *)t14) = t45;
    t19 = (t3 + 4);
    t20 = (t13 + 4);
    t21 = (t14 + 4);
    t46 = *((unsigned int *)t19);
    t47 = *((unsigned int *)t20);
    t48 = (t46 | t47);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t21);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB28;

LAB29:
LAB30:    t24 = (t14 + 4);
    t67 = *((unsigned int *)t24);
    t68 = (~(t67));
    t69 = *((unsigned int *)t14);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(166, ng0);

LAB9:    xsi_set_current_line(167, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 256, 0LL);
    xsi_set_current_line(168, ng0);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_leq(t14, 32, t4, 32, t13, 32);
    t12 = (t14 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(168, ng0);

LAB13:    xsi_set_current_line(169, ng0);
    t15 = ((char*)((ng6)));
    t16 = (t0 + 4960);
    t19 = (t0 + 4960);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 4960);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 5120);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 5120);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(172, ng0);
    t4 = (t0 + 2480U);
    t5 = *((char **)t4);
    t4 = (t0 + 4960);
    t11 = (t0 + 4960);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 4960);
    t19 = (t16 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 4640);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t13, t14, t15, t20, 2, 1, t23, 5, 2);
    t24 = (t13 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (!(t29));
    t25 = (t14 + 4);
    t32 = *((unsigned int *)t25);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t14);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t14), t38, 0LL);
    goto LAB21;

LAB22:    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB27:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t13) = (t35 | t36);
    t39 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t39 | t40);
    goto LAB26;

LAB28:    t51 = *((unsigned int *)t14);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t51 | t52);
    t22 = (t3 + 4);
    t23 = (t13 + 4);
    t53 = *((unsigned int *)t3);
    t54 = (~(t53));
    t55 = *((unsigned int *)t22);
    t56 = (~(t55));
    t57 = *((unsigned int *)t13);
    t58 = (~(t57));
    t59 = *((unsigned int *)t23);
    t60 = (~(t59));
    t30 = (t54 & t56);
    t33 = (t58 & t60);
    t61 = (~(t30));
    t62 = (~(t33));
    t63 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t63 & t61);
    t64 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t64 & t62);
    t65 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t65 & t61);
    t66 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t66 & t62);
    goto LAB30;

LAB31:    xsi_set_current_line(173, ng0);
    t25 = (t0 + 4960);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 4960);
    t31 = (t28 + 72U);
    t73 = *((char **)t31);
    t74 = (t0 + 4960);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 4480);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    xsi_vlog_generic_get_array_select_value(t72, 256, t27, t73, t76, 2, 1, t79, 5, 2);
    t80 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t80, t72, 0, 0, 256, 0LL);
    goto LAB33;

}


extern void work_m_12884380412608287112_1823053714_init()
{
	static char *pe[] = {(void *)Cont_88_0,(void *)Cont_89_1,(void *)Always_93_2,(void *)Always_134_3,(void *)Always_165_4};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("work_m_12884380412608287112_1823053714", "isim/simple_tx_tb.exe.sim/work/m_12884380412608287112_1823053714.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
