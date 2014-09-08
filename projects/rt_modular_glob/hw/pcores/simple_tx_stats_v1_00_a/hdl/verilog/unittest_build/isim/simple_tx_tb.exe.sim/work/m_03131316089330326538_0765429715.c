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
static const char *ng0 = "/root/Documents/ya240/V5NF10/projects/rt_phyrecovery/smartxplorer/loopback/projects/rt_modular_glob/hw/pcores/simple_tx_stats_v1_00_a/hdl/verilog/simple_tx_stats.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {16383U, 0U};
static unsigned int ng8[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng9[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng10[] = {83951680U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng11[] = {4294967295U, 0U};
static unsigned int ng12[] = {2863311530U, 0U, 3149638314U, 0U, 3149642683U, 0U, 33556616U, 0U, 0U, 0U, 393217U, 0U, 589824U, 0U, 7U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 50115U, 0U};
static unsigned int ng16[] = {3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U, 3284386755U, 0U};
static unsigned int ng17[] = {0U, 0U, 0U, 0U};
static unsigned int ng18[] = {51966U, 0U};
static unsigned int ng19[] = {3405695742U, 0U};
static unsigned int ng20[] = {48879U, 0U};
static unsigned int ng21[] = {41943840U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng22[] = {3722304989U, 0U, 3435978205U, 0U, 3435973836U, 0U, 33554440U, 0U, 0U, 0U, 393217U, 0U, 589824U, 0U, 7U, 0U};



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
    xsi_set_current_line(116, ng0);

LAB2:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 28136);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(118, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 28136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 28296);
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
LAB4:    xsi_set_current_line(118, ng0);

LAB6:    xsi_set_current_line(119, ng0);
    t18 = (t1 + 28136);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 28136);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Always_408_0(char *t0)
{
    char t6[8];
    char t33[32];
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

LAB0:    t1 = (t0 + 29208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 35728);
    *((int *)t2) = 1;
    t3 = (t0 + 29240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(408, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 29016);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(409, ng0);
    t7 = (t0 + 9336U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    t15 = (t6 + 4);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    *((unsigned int *)t6) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB12:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(418, ng0);

LAB18:    xsi_set_current_line(419, ng0);
    t2 = (t0 + 13656U);
    t3 = *((char **)t2);
    t2 = (t0 + 25416);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 13496U);
    t3 = *((char **)t2);
    t2 = (t0 + 25256);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(423, ng0);
    t2 = (t0 + 16376U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t33, 128, t3, 127, 0);
    t2 = (t0 + 23976);
    xsi_vlogvar_wait_assign_value(t2, t33, 0, 0, 32, 0LL);
    t4 = (t0 + 24456);
    xsi_vlogvar_wait_assign_value(t4, t33, 32, 0, 32, 0LL);
    t5 = (t0 + 24936);
    xsi_vlogvar_wait_assign_value(t5, t33, 64, 0, 32, 0LL);
    t7 = (t0 + 25096);
    xsi_vlogvar_wait_assign_value(t7, t33, 96, 0, 32, 0LL);

LAB16:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 29016);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB13:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB12;

LAB14:    xsi_set_current_line(409, ng0);

LAB17:    xsi_set_current_line(410, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 25416);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 25256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(413, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 23976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(414, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(415, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 24936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 25096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB16;

}

static void Cont_430_1(char *t0)
{
    char t5[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t1 = (t0 + 29456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(430, ng0);
    t2 = (t0 + 25256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 9336U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t5 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t5) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t5 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    t52 = (t0 + 36176);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 1U;
    t58 = t57;
    t59 = (t24 + 4);
    t60 = *((unsigned int *)t24);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 0);
    t65 = (t0 + 35744);
    *((int *)t65) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t5) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t41);
    t44 = *((unsigned int *)t39);
    t45 = (~(t44));
    t46 = *((unsigned int *)t5);
    t47 = (t46 & t45);
    t48 = (~(t43));
    t49 = (~(t47));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB12;

}

static void Cont_447_2(char *t0)
{
    char t6[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 29704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(447, ng0);
    t2 = (t0 + 25096);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 36240);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 35760);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_450_3(char *t0)
{
    char t6[8];
    char t26[8];
    char t44[8];
    char t75[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
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
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(450, ng0);
    t2 = (t0 + 24616);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 24616);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng5)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t42 = (t0 + 16856U);
    t43 = *((char **)t42);
    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t43);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t42 = (t26 + 4);
    t48 = (t43 + 4);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB12;

LAB13:
LAB14:    t76 = *((unsigned int *)t6);
    t77 = *((unsigned int *)t44);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = (t6 + 4);
    t80 = (t44 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB15;

LAB16:
LAB17:    t103 = (t0 + 36304);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 1U;
    t109 = t108;
    t110 = (t75 + 4);
    t111 = *((unsigned int *)t75);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 0);
    t116 = (t0 + 35776);
    *((int *)t116) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t44) = (t55 | t56);
    t57 = (t26 + 4);
    t58 = (t43 + 4);
    t59 = *((unsigned int *)t26);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t73 & t69);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    goto LAB14;

LAB15:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    t89 = (t6 + 4);
    t90 = (t44 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (~(t91));
    t93 = *((unsigned int *)t6);
    t94 = (t93 & t92);
    t95 = *((unsigned int *)t90);
    t96 = (~(t95));
    t97 = *((unsigned int *)t44);
    t98 = (t97 & t96);
    t99 = (~(t94));
    t100 = (~(t98));
    t101 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t101 & t99);
    t102 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t102 & t100);
    goto LAB17;

}

static void Always_453_4(char *t0)
{
    char t18[8];
    char t25[8];
    char t34[8];
    char t46[64];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 30200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(453, ng0);
    t2 = (t0 + 35792);
    *((int *)t2) = 1;
    t3 = (t0 + 30232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(453, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 30008);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(454, ng0);
    t6 = (t0 + 21256);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 21416);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(455, ng0);
    t2 = (t0 + 23656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(456, ng0);
    t2 = (t0 + 24136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(457, ng0);
    t2 = (t0 + 24616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24776);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(459, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 19976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(460, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 19656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);
    xsi_set_current_line(461, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(462, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 20136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(463, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 20296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(465, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 21736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(467, ng0);
    t2 = (t0 + 21256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB8:    t5 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(527, ng0);

LAB89:    xsi_set_current_line(528, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 21416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB19:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 30008);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(468, ng0);

LAB20:    xsi_set_current_line(469, ng0);
    t6 = (t0 + 25416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB19;

LAB11:    xsi_set_current_line(475, ng0);

LAB25:    xsi_set_current_line(476, ng0);
    t3 = (t0 + 23656);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t6, 32, t7, 32);
    t8 = (t0 + 23816);
    xsi_vlogvar_assign_value(t8, t18, 0, 0, 32);
    xsi_set_current_line(477, ng0);
    t2 = (t0 + 23656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t6) == 0)
        goto LAB26;

LAB28:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;

LAB29:    t8 = (t18 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB19;

LAB13:    xsi_set_current_line(484, ng0);

LAB41:    xsi_set_current_line(486, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 20136);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(487, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 19976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(488, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 19816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(490, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 19656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);
    xsi_set_current_line(492, ng0);
    t2 = (t0 + 12216U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB19;

LAB15:    xsi_set_current_line(497, ng0);

LAB46:    xsi_set_current_line(498, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 20136);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(500, ng0);
    t2 = (t0 + 12216U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(523, ng0);
    t2 = (t0 + 21576);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t18, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB85;

LAB82:    if (t23 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t18) = 1;

LAB85:    t16 = (t18 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(525, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 19656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB88:    goto LAB19;

LAB21:    xsi_set_current_line(469, ng0);

LAB24:    xsi_set_current_line(470, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 21416);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 2);
    xsi_set_current_line(471, ng0);
    t2 = (t0 + 24456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24296);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(472, ng0);
    t2 = (t0 + 24936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24776);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB23;

LAB26:    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(477, ng0);

LAB33:    xsi_set_current_line(478, ng0);
    t9 = (t0 + 23976);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t17, 32, t24, 32);
    t26 = (t0 + 23816);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 32);
    xsi_set_current_line(480, ng0);
    t2 = (t0 + 24136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB37;

LAB34:    if (t23 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t18) = 1;

LAB37:    t16 = (t18 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(481, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 21416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB40:    goto LAB32;

LAB36:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(480, ng0);
    t17 = ((char*)((ng4)));
    t24 = (t0 + 21416);
    xsi_vlogvar_assign_value(t24, t17, 0, 0, 2);
    goto LAB40;

LAB42:    xsi_set_current_line(492, ng0);

LAB45:    xsi_set_current_line(493, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 21416);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    xsi_set_current_line(494, ng0);
    t2 = (t0 + 24616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t5, 32, t6, 32);
    t7 = (t0 + 24776);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 32);
    goto LAB44;

LAB47:    xsi_set_current_line(500, ng0);

LAB50:    xsi_set_current_line(501, ng0);
    t5 = (t0 + 17016U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t6);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(514, ng0);

LAB81:    xsi_set_current_line(516, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 21416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(517, ng0);
    t2 = (t0 + 24616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t5, 32, t6, 32);
    t7 = (t0 + 24776);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 32);
    xsi_set_current_line(518, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 19816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB53:    goto LAB49;

LAB51:    xsi_set_current_line(501, ng0);

LAB54:    xsi_set_current_line(502, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 21736);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(503, ng0);
    t2 = (t0 + 24936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24776);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(504, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 20296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(505, ng0);
    t2 = (t0 + 24616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB58;

LAB55:    if (t23 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t34) = 1;

LAB58:    memset(t25, 0, 8);
    t16 = (t34 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t16) != 0)
        goto LAB61;

LAB62:    t24 = (t25 + 4);
    t35 = *((unsigned int *)t25);
    t36 = *((unsigned int *)t24);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB63;

LAB64:    t40 = *((unsigned int *)t25);
    t41 = (~(t40));
    t42 = *((unsigned int *)t24);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t24) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t25) > 0)
        goto LAB69;

LAB70:    memcpy(t18, t44, 8);

LAB71:    t45 = (t0 + 19816);
    xsi_vlogvar_assign_value(t45, t18, 0, 0, 32);
    xsi_set_current_line(507, ng0);
    t2 = (t0 + 24136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB75;

LAB72:    if (t23 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t18) = 1;

LAB75:    t16 = (t18 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(510, ng0);

LAB80:    xsi_set_current_line(511, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(512, ng0);
    t2 = (t0 + 24136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t5, 32, t6, 32);
    t7 = (t0 + 24296);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 32);

LAB78:    goto LAB53;

LAB57:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t25) = 1;
    goto LAB62;

LAB61:    t17 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB63:    t26 = (t0 + 25096);
    t38 = (t26 + 56U);
    t39 = *((char **)t38);
    goto LAB64;

LAB65:    t44 = ((char*)((ng11)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t18, 32, t39, 32, t44, 32);
    goto LAB71;

LAB69:    memcpy(t18, t39, 8);
    goto LAB71;

LAB74:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(507, ng0);

LAB79:    xsi_set_current_line(508, ng0);
    t17 = ((char*)((ng4)));
    t24 = (t0 + 21416);
    xsi_vlogvar_assign_value(t24, t17, 0, 0, 2);
    xsi_set_current_line(509, ng0);
    t2 = (t0 + 24456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 24296);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB78;

LAB84:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(524, ng0);
    t17 = ((char*)((ng14)));
    t24 = (t0 + 16696U);
    t26 = *((char **)t24);
    t24 = (t0 + 17816U);
    t38 = *((char **)t24);
    t24 = ((char*)((ng15)));
    xsi_vlogtype_concat(t46, 256, 256, 4U, t24, 144, t38, 64, t26, 32, t17, 16);
    t39 = (t0 + 19656);
    xsi_vlogvar_assign_value(t39, t46, 0, 0, 256);
    goto LAB88;

}

static void Always_534_5(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 30448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(534, ng0);
    t2 = (t0 + 35808);
    *((int *)t2) = 1;
    t3 = (t0 + 30480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(534, ng0);

LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 30256);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(535, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(541, ng0);

LAB12:    xsi_set_current_line(542, ng0);
    t2 = (t0 + 21416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21256);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(543, ng0);
    t2 = (t0 + 21256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(544, ng0);
    t2 = (t0 + 24776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(545, ng0);
    t2 = (t0 + 23816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(546, ng0);
    t2 = (t0 + 24296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB10:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 30256);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(535, ng0);

LAB11:    xsi_set_current_line(536, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 21256);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(537, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 21576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(538, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 24616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(539, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 23656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(540, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB10;

}

static void Always_551_6(char *t0)
{
    char t13[8];
    char t14[8];
    char t22[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 30696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(551, ng0);
    t2 = (t0 + 35824);
    *((int *)t2) = 1;
    t3 = (t0 + 30728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(551, ng0);

LAB5:    xsi_set_current_line(552, ng0);
    t4 = (t0 + 17656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(553, ng0);
    t2 = (t0 + 21736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t5) != 0)
        goto LAB11;

LAB12:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB13;

LAB14:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t12);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t12) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t14) > 0)
        goto LAB19;

LAB20:    memcpy(t13, t29, 8);

LAB21:    t30 = (t0 + 21896);
    xsi_vlogvar_wait_assign_value(t30, t13, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(552, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 21896);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    t18 = (t0 + 21896);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 32, t21, 32);
    goto LAB14;

LAB15:    t27 = (t0 + 21896);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t13, 32, t22, 32, t29, 32);
    goto LAB21;

LAB19:    memcpy(t13, t22, 8);
    goto LAB21;

}

static void Cont_556_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 30944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(556, ng0);
    t2 = (t0 + 21896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 36368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 35840);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_563_8(char *t0)
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

LAB0:    t1 = (t0 + 31192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(563, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 36432);
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

static void Cont_569_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 31440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(569, ng0);
    t2 = (t0 + 12856U);
    t3 = *((char **)t2);
    t2 = (t0 + 13016U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 36496);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 1U;
    t42 = t41;
    t43 = (t5 + 4);
    t44 = *((unsigned int *)t5);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t49 = (t0 + 35856);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Cont_570_10(char *t0)
{
    char t5[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    char *t37;
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
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 31688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(570, ng0);
    t2 = (t0 + 12856U);
    t3 = *((char **)t2);
    t2 = (t0 + 13016U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 13176U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t37);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t36 = (t5 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 36560);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t38 + 4);
    t77 = *((unsigned int *)t38);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t82 = (t0 + 35872);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t5 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t5);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t63);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    goto LAB9;

}

static void Always_572_11(char *t0)
{
    char t16[8];
    char t24[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 31936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(572, ng0);
    t2 = (t0 + 35888);
    *((int *)t2) = 1;
    t3 = (t0 + 31968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(572, ng0);

LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 31744);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(573, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(584, ng0);

LAB12:    xsi_set_current_line(585, ng0);
    t2 = (t0 + 22376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22376);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(586, ng0);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(587, ng0);
    t2 = (t0 + 25576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(588, ng0);
    t2 = (t0 + 25736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(589, ng0);
    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22216);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(590, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(591, ng0);
    t2 = (t0 + 22696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(594, ng0);
    t2 = (t0 + 22056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(617, ng0);

LAB37:    xsi_set_current_line(618, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB22:
LAB10:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 31744);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(573, ng0);

LAB11:    xsi_set_current_line(574, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(576, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 25576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(577, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 25736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(578, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(579, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22376);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(580, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(581, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(582, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB10;

LAB14:    xsi_set_current_line(595, ng0);

LAB23:    xsi_set_current_line(596, ng0);
    t6 = (t0 + 17336U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(597, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB26:    goto LAB22;

LAB16:    xsi_set_current_line(599, ng0);

LAB27:    xsi_set_current_line(600, ng0);
    t3 = (t0 + 17336U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(609, ng0);

LAB32:    xsi_set_current_line(610, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB30:    goto LAB22;

LAB18:    xsi_set_current_line(613, ng0);

LAB33:    xsi_set_current_line(614, ng0);
    t3 = (t0 + 17496U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(615, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB36:    goto LAB22;

LAB24:    xsi_set_current_line(596, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(600, ng0);

LAB31:    xsi_set_current_line(601, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(602, ng0);
    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 32, t6, 32);
    t7 = (t0 + 22216);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 32, 0LL);
    xsi_set_current_line(603, ng0);
    t2 = (t0 + 12376U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t6 = (t3 + 8);
    t7 = (t3 + 12);
    t12 = *((unsigned int *)t6);
    t17 = (t12 << 16);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t17);
    t19 = *((unsigned int *)t7);
    t20 = (t19 << 16);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 | t20);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 4294967295U);
    t13 = (t0 + 22376);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 32, 0LL);
    xsi_set_current_line(604, ng0);
    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 22536);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(605, ng0);
    t2 = (t0 + 12376U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t24, 64, t3, 111, 48);
    t2 = (t0 + 25576);
    xsi_vlogvar_wait_assign_value(t2, t24, 0, 0, 64, 0LL);
    xsi_set_current_line(606, ng0);
    t2 = (t0 + 17816U);
    t3 = *((char **)t2);
    t2 = (t0 + 25736);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(607, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 22696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB34:    xsi_set_current_line(614, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    goto LAB36;

}

static void Cont_625_12(char *t0)
{
    char t8[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 32184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(625, ng0);
    t2 = (t0 + 22696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t22 = (t0 + 22696);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t8 + 4);
    t30 = (t24 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB7;

LAB8:
LAB9:    t57 = (t0 + 36624);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 1U;
    t63 = t62;
    t64 = (t25 + 4);
    t65 = *((unsigned int *)t25);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 35904);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    goto LAB6;

LAB7:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t8 + 4);
    t40 = (t24 + 4);
    t41 = *((unsigned int *)t8);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t24);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB9;

}

static void Always_628_13(char *t0)
{
    char t15[16];
    char t16[8];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 32432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(628, ng0);
    t2 = (t0 + 35920);
    *((int *)t2) = 1;
    t3 = (t0 + 32464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(628, ng0);

LAB5:    t4 = (t0 + 1464);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 32240);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(629, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(642, ng0);

LAB12:    xsi_set_current_line(643, ng0);
    t2 = (t0 + 13816U);
    t3 = *((char **)t2);
    t2 = (t0 + 23016);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(644, ng0);
    t2 = (t0 + 13976U);
    t3 = *((char **)t2);
    t2 = (t0 + 23176);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(645, ng0);
    t2 = (t0 + 14136U);
    t3 = *((char **)t2);
    t2 = (t0 + 23336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(646, ng0);
    t2 = (t0 + 14296U);
    t3 = *((char **)t2);
    t2 = (t0 + 23496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(648, ng0);
    t2 = (t0 + 13816U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB16:    t5 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB17;

LAB18:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t5) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t16) > 0)
        goto LAB23;

LAB24:    memcpy(t15, t14, 16);

LAB25:    t25 = (t0 + 25896);
    xsi_vlogvar_wait_assign_value(t25, t15, 0, 0, 56, 0LL);
    xsi_set_current_line(649, ng0);
    t2 = (t0 + 13976U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t2) != 0)
        goto LAB28;

LAB29:    t5 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB30;

LAB31:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t16) > 0)
        goto LAB36;

LAB37:    memcpy(t15, t14, 16);

LAB38:    t25 = (t0 + 26056);
    xsi_vlogvar_wait_assign_value(t25, t15, 0, 0, 56, 0LL);
    xsi_set_current_line(650, ng0);
    t2 = (t0 + 14136U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t2) != 0)
        goto LAB41;

LAB42:    t5 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB43;

LAB44:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t5) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t16) > 0)
        goto LAB49;

LAB50:    memcpy(t15, t14, 16);

LAB51:    t25 = (t0 + 26216);
    xsi_vlogvar_wait_assign_value(t25, t15, 0, 0, 56, 0LL);
    xsi_set_current_line(651, ng0);
    t2 = (t0 + 14296U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t2) != 0)
        goto LAB54;

LAB55:    t5 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB56;

LAB57:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t5) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t16) > 0)
        goto LAB62;

LAB63:    memcpy(t15, t14, 16);

LAB64:    t25 = (t0 + 26376);
    xsi_vlogvar_wait_assign_value(t25, t15, 0, 0, 56, 0LL);

LAB10:    t2 = (t0 + 1464);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 32240);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(629, ng0);

LAB11:    xsi_set_current_line(631, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 23016);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(632, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(633, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(634, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(637, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 25896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(638, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 26056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(639, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 26216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(640, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 26376);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    goto LAB10;

LAB13:    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB15:    t4 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    t6 = (t0 + 17816U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t20, 56, t7, 55, 0);
    goto LAB18;

LAB19:    t6 = (t0 + 25896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t15, 56, t20, 56, t14, 56);
    goto LAB25;

LAB23:    memcpy(t15, t20, 16);
    goto LAB25;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB28:    t4 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    t6 = (t0 + 17816U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t20, 56, t7, 55, 0);
    goto LAB31;

LAB32:    t6 = (t0 + 26056);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t15, 56, t20, 56, t14, 56);
    goto LAB38;

LAB36:    memcpy(t15, t20, 16);
    goto LAB38;

LAB39:    *((unsigned int *)t16) = 1;
    goto LAB42;

LAB41:    t4 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB42;

LAB43:    t6 = (t0 + 17816U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t20, 56, t7, 55, 0);
    goto LAB44;

LAB45:    t6 = (t0 + 26216);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t15, 56, t20, 56, t14, 56);
    goto LAB51;

LAB49:    memcpy(t15, t20, 16);
    goto LAB51;

LAB52:    *((unsigned int *)t16) = 1;
    goto LAB55;

LAB54:    t4 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB55;

LAB56:    t6 = (t0 + 17816U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t20, 56, t7, 55, 0);
    goto LAB57;

LAB58:    t6 = (t0 + 26376);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t15, 56, t20, 56, t14, 56);
    goto LAB64;

LAB62:    memcpy(t15, t20, 16);
    goto LAB64;

}

static void Cont_663_14(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 32680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(663, ng0);
    t2 = (t0 + 17176U);
    t3 = *((char **)t2);
    t2 = (t0 + 36688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 35936);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_666_15(char *t0)
{
    char t8[8];
    char t39[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;

LAB0:    t1 = (t0 + 32928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(666, ng0);
    t2 = (t0 + 23016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 23336);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = *((unsigned int *)t8);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t8 + 4);
    t44 = (t38 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB7;

LAB8:
LAB9:    t67 = (t0 + 23496);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t71 = *((unsigned int *)t39);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = (t39 + 4);
    t75 = (t69 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB10;

LAB11:
LAB12:    t98 = (t0 + 36752);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memset(t102, 0, 8);
    t103 = 1U;
    t104 = t103;
    t105 = (t70 + 4);
    t106 = *((unsigned int *)t70);
    t103 = (t103 & t106);
    t107 = *((unsigned int *)t105);
    t104 = (t104 & t107);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t109 | t103);
    t110 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t110 | t104);
    xsi_driver_vfirst_trans(t98, 0, 0);
    t111 = (t0 + 35952);
    *((int *)t111) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB6;

LAB7:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t8 + 4);
    t54 = (t38 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t8);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t38);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB9;

LAB10:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t39 + 4);
    t85 = (t69 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (~(t86));
    t88 = *((unsigned int *)t39);
    t89 = (t88 & t87);
    t90 = *((unsigned int *)t85);
    t91 = (~(t90));
    t92 = *((unsigned int *)t69);
    t93 = (t92 & t91);
    t94 = (~(t89));
    t95 = (~(t93));
    t96 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t96 & t94);
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    goto LAB12;

}

static void Always_670_16(char *t0)
{
    char t16[8];
    char t25[64];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 33176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(670, ng0);
    t2 = (t0 + 35968);
    *((int *)t2) = 1;
    t3 = (t0 + 33208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(670, ng0);

LAB5:    t4 = (t0 + 1760);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 32984);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(671, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(675, ng0);

LAB12:    xsi_set_current_line(676, ng0);
    t2 = (t0 + 27016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 1);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t15 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(702, ng0);

LAB44:    xsi_set_current_line(703, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(704, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 256, 0LL);
    xsi_set_current_line(705, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:
LAB10:    t2 = (t0 + 1760);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 32984);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(671, ng0);

LAB11:    xsi_set_current_line(672, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(673, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 256, 0LL);
    xsi_set_current_line(674, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB10;

LAB14:    xsi_set_current_line(677, ng0);

LAB21:    xsi_set_current_line(679, ng0);
    t6 = (t0 + 18616U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(685, ng0);
    t2 = (t0 + 18776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(691, ng0);

LAB42:    xsi_set_current_line(692, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(693, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(694, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 256, 0LL);

LAB34:
LAB24:    goto LAB20;

LAB16:    xsi_set_current_line(697, ng0);

LAB43:    xsi_set_current_line(698, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(699, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(700, ng0);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 256, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(679, ng0);

LAB25:    xsi_set_current_line(680, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(681, ng0);
    t2 = (t0 + 18456U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t2) == 0)
        goto LAB26;

LAB28:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;

LAB29:    t6 = (t16 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB31;

LAB30:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t13 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(682, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 22536);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 22376);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t26 = (t0 + 25736);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 25576);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng19)));
    t33 = (t0 + 19096U);
    t34 = *((char **)t33);
    memset(t16, 0, 8);
    t33 = (t16 + 4);
    t35 = (t34 + 4);
    t8 = *((unsigned int *)t34);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t35);
    t11 = (t10 >> 0);
    *((unsigned int *)t33) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 65535U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 65535U);
    xsi_vlogtype_concat(t25, 256, 256, 7U, t16, 16, t32, 32, t31, 64, t28, 64, t14, 32, t6, 32, t2, 16);
    t36 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t36, t25, 0, 0, 256, 0LL);
    goto LAB24;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    goto LAB30;

LAB32:    xsi_set_current_line(685, ng0);

LAB35:    xsi_set_current_line(686, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(687, ng0);
    t2 = (t0 + 18456U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t2) == 0)
        goto LAB36;

LAB38:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;

LAB39:    t6 = (t16 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB41;

LAB40:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t13 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(688, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 26376);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 26056);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t26 = (t0 + 26216);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 25896);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 19096U);
    t33 = *((char **)t32);
    memset(t16, 0, 8);
    t32 = (t16 + 4);
    t34 = (t33 + 4);
    t8 = *((unsigned int *)t33);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t34);
    t11 = (t10 >> 0);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 65535U);
    t17 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t17 & 65535U);
    xsi_vlogtype_concat(t25, 256, 256, 6U, t16, 16, t31, 56, t28, 56, t14, 56, t6, 56, t2, 16);
    t35 = (t0 + 26536);
    xsi_vlogvar_wait_assign_value(t35, t25, 0, 0, 256, 0LL);
    goto LAB34;

LAB36:    *((unsigned int *)t16) = 1;
    goto LAB39;

LAB41:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    goto LAB40;

}

static void Always_722_17(char *t0)
{
    char t16[8];
    char t27[8];
    char t28[8];
    char t47[64];
    char t48[64];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 33424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(722, ng0);
    t2 = (t0 + 35984);
    *((int *)t2) = 1;
    t3 = (t0 + 33456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(722, ng0);

LAB5:    t4 = (t0 + 2056);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 33232);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(723, ng0);
    t6 = (t0 + 27176);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 27336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(724, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 20776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(725, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 20456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);
    xsi_set_current_line(726, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 20616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(727, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 20936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(728, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 21096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(729, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(730, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 26856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(732, ng0);
    t2 = (t0 + 27176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB8:    t5 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(776, ng0);

LAB74:    xsi_set_current_line(777, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB17:    t2 = (t0 + 2056);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 33232);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(733, ng0);

LAB18:    xsi_set_current_line(735, ng0);
    t6 = (t0 + 18296U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB17;

LAB11:    xsi_set_current_line(739, ng0);

LAB22:    xsi_set_current_line(741, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 20936);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(743, ng0);
    t2 = (t0 + 13336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(748, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 20776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 128);
    xsi_set_current_line(749, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 20616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(751, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 20456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);
    goto LAB17;

LAB13:    xsi_set_current_line(753, ng0);

LAB27:    xsi_set_current_line(754, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 20936);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(756, ng0);
    t2 = (t0 + 13336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(769, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 20616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(771, ng0);
    t2 = (t0 + 27496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB70;

LAB67:    if (t21 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t16) = 1;

LAB70:    t29 = (t16 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t30 = (t26 & t25);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(773, ng0);
    t2 = (t0 + 17976U);
    t3 = *((char **)t2);
    t2 = (t0 + 20456);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 256);

LAB73:    goto LAB17;

LAB19:    xsi_set_current_line(736, ng0);
    t8 = ((char*)((ng5)));
    t9 = (t0 + 27336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB21;

LAB23:    xsi_set_current_line(743, ng0);

LAB26:    xsi_set_current_line(744, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 27336);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    xsi_set_current_line(745, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 27656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB28:    xsi_set_current_line(756, ng0);

LAB31:    xsi_set_current_line(757, ng0);
    t5 = (t0 + 18136U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t6 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t6);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t5) == 0)
        goto LAB32;

LAB34:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;

LAB35:    t8 = (t16 + 4);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(762, ng0);

LAB66:    xsi_set_current_line(763, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(764, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 26856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(765, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 27656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(766, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB38:    goto LAB30;

LAB32:    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(757, ng0);

LAB39:    xsi_set_current_line(758, ng0);
    t9 = (t0 + 18936U);
    t29 = *((char **)t9);
    memset(t28, 0, 8);
    t9 = (t29 + 4);
    t30 = *((unsigned int *)t9);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t9) != 0)
        goto LAB42;

LAB43:    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB44;

LAB45:    t41 = *((unsigned int *)t28);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t36) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t28) > 0)
        goto LAB50;

LAB51:    memcpy(t27, t45, 8);

LAB52:    t46 = (t0 + 27336);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 2);
    xsi_set_current_line(759, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 26856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(760, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 27656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(761, ng0);
    t2 = (t0 + 18936U);
    t3 = *((char **)t2);
    memset(t27, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t2) != 0)
        goto LAB55;

LAB56:    t6 = (t27 + 4);
    t17 = *((unsigned int *)t27);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB57;

LAB58:    t20 = *((unsigned int *)t27);
    t21 = (~(t20));
    t22 = *((unsigned int *)t6);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t6) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t27) > 0)
        goto LAB63;

LAB64:    memcpy(t16, t8, 8);

LAB65:    t9 = (t0 + 21096);
    xsi_vlogvar_assign_value(t9, t16, 0, 0, 1);
    goto LAB38;

LAB40:    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB42:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB43;

LAB44:    t40 = ((char*)((ng4)));
    goto LAB45;

LAB46:    t45 = ((char*)((ng6)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t27, 2, t40, 2, t45, 2);
    goto LAB52;

LAB50:    memcpy(t27, t40, 8);
    goto LAB52;

LAB53:    *((unsigned int *)t27) = 1;
    goto LAB56;

LAB55:    t5 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB56;

LAB57:    t7 = ((char*)((ng5)));
    goto LAB58;

LAB59:    t8 = ((char*)((ng4)));
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t16, 1, t7, 1, t8, 1);
    goto LAB65;

LAB63:    memcpy(t16, t7, 8);
    goto LAB65;

LAB69:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(772, ng0);
    t35 = ((char*)((ng14)));
    t36 = (t0 + 17976U);
    t40 = *((char **)t36);
    xsi_vlog_get_part_select_value(t48, 240, t40, 255, 16);
    xsi_vlogtype_concat(t47, 256, 256, 2U, t48, 240, t35, 16);
    t36 = (t0 + 20456);
    xsi_vlogvar_assign_value(t36, t47, 0, 0, 256);
    goto LAB73;

}

static void Always_783_18(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 33672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(783, ng0);
    t2 = (t0 + 36000);
    *((int *)t2) = 1;
    t3 = (t0 + 33704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(783, ng0);

LAB5:    t4 = (t0 + 2352);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 33480);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(784, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(787, ng0);

LAB12:    xsi_set_current_line(788, ng0);
    t2 = (t0 + 27336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(789, ng0);
    t2 = (t0 + 27176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB10:    t2 = (t0 + 2352);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 33480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(784, ng0);

LAB11:    xsi_set_current_line(785, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 27176);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(786, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB10;

}

static void Cont_799_19(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 33920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(799, ng0);
    t2 = (t0 + 27816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7488);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = (t0 + 36816);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 36016);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

}

static void Always_802_20(char *t0)
{
    char t15[8];
    char t16[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 34168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(802, ng0);
    t2 = (t0 + 36032);
    *((int *)t2) = 1;
    t3 = (t0 + 34200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(802, ng0);

LAB5:    t4 = (t0 + 2648);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 33976);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(803, ng0);
    t6 = (t0 + 17656U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(804, ng0);
    t2 = (t0 + 18936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(805, ng0);
    t2 = (t0 + 27656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB17:    t7 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t7);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB18;

LAB19:    t23 = *((unsigned int *)t16);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t7) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t16) > 0)
        goto LAB24;

LAB25:    memcpy(t15, t29, 8);

LAB26:    t30 = (t0 + 27816);
    xsi_vlogvar_wait_assign_value(t30, t15, 0, 0, 5, 0LL);

LAB13:
LAB10:    t2 = (t0 + 2648);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 33976);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(803, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 27816);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 5, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(804, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 27816);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB13;

LAB14:    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB16:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    t13 = (t0 + 27816);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 5, t20, 5, t21, 5);
    goto LAB19;

LAB20:    t27 = (t0 + 27816);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t15, 5, t22, 5, t29, 5);
    goto LAB26;

LAB24:    memcpy(t15, t22, 8);
    goto LAB26;

}

static void Cont_810_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 34416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(810, ng0);
    t2 = (t0 + 14456U);
    t3 = *((char **)t2);
    t2 = (t0 + 36880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t8 = (t0 + 36048);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_813_22(char *t0)
{
    char t8[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 34664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(813, ng0);
    t2 = (t0 + 20936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t40 = (t0 + 13336U);
    t41 = *((char **)t40);
    t43 = *((unsigned int *)t8);
    t44 = *((unsigned int *)t41);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t40 = (t8 + 4);
    t46 = (t41 + 4);
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t73 = (t0 + 36944);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t42 + 4);
    t81 = *((unsigned int *)t42);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 0);
    t86 = (t0 + 36064);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t42);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t42) = (t53 | t54);
    t55 = (t8 + 4);
    t56 = (t41 + 4);
    t57 = *((unsigned int *)t8);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t67);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    goto LAB9;

}

static void Always_816_23(char *t0)
{
    char t13[8];
    char t14[8];
    char t20[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 34912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(816, ng0);
    t2 = (t0 + 36080);
    *((int *)t2) = 1;
    t3 = (t0 + 34944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(816, ng0);

LAB5:    xsi_set_current_line(817, ng0);
    t4 = (t0 + 17656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(818, ng0);
    t2 = (t0 + 19256U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t2) != 0)
        goto LAB11;

LAB12:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB13;

LAB14:    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t5) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t14) > 0)
        goto LAB19;

LAB20:    memcpy(t13, t27, 8);

LAB21:    t28 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(817, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB13:    t11 = (t0 + 27976);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 32, t19, 32);
    goto LAB14;

LAB15:    t25 = (t0 + 27976);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t13, 32, t20, 32, t27, 32);
    goto LAB21;

LAB19:    memcpy(t13, t20, 8);
    goto LAB21;

}

static void Cont_821_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 35160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(821, ng0);
    t2 = (t0 + 4768);
    t3 = *((char **)t2);
    t2 = (t0 + 37008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);

LAB1:    return;
}

static void Cont_823_25(char *t0)
{
    char t3[80];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 35408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(823, ng0);
    t2 = (t0 + 17816U);
    t4 = *((char **)t2);
    t2 = (t0 + 27976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 26376);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 26056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 26216);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 25896);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogtype_concat(t3, 320, 320, 6U, t18, 56, t15, 56, t12, 56, t9, 56, t6, 32, t4, 64);
    t19 = (t0 + 37072);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_bit_copy(t23, 0, t3, 0, 320);
    xsi_driver_vfirst_trans(t19, 0, 319);
    t24 = (t0 + 36096);
    *((int *)t24) = 1;

LAB1:    return;
}


extern void work_m_03131316089330326538_0765429715_init()
{
	static char *pe[] = {(void *)Always_408_0,(void *)Cont_430_1,(void *)Cont_447_2,(void *)Cont_450_3,(void *)Always_453_4,(void *)Always_534_5,(void *)Always_551_6,(void *)Cont_556_7,(void *)Cont_563_8,(void *)Cont_569_9,(void *)Cont_570_10,(void *)Always_572_11,(void *)Cont_625_12,(void *)Always_628_13,(void *)Cont_663_14,(void *)Cont_666_15,(void *)Always_670_16,(void *)Always_722_17,(void *)Always_783_18,(void *)Cont_799_19,(void *)Always_802_20,(void *)Cont_810_21,(void *)Cont_813_22,(void *)Always_816_23,(void *)Cont_821_24,(void *)Cont_823_25};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("work_m_03131316089330326538_0765429715", "isim/simple_tx_tb.exe.sim/work/m_03131316089330326538_0765429715.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
