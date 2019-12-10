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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "v:/hipsBuilds/P_hips_v05.0/rst/hips/gtxe1/B_GTXE1_enc.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {28, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {14, 0};
static int ng5[] = {27, 0};
static int ng6[] = {13, 0};
static int ng7[] = {0, 0};
static int ng8[] = {64, 0};
static int ng9[] = {2, 0};
static int ng10[] = {1, 0};



static void Cont_52698_0(char *t0)
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

LAB0:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52698, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8824);
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

static void Always_52717_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52717, ng0);
    t2 = (t0 + 8648);
    *((int *)t2) = 1;
    t3 = (t0 + 6624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52717, ng0);

LAB5:    xsi_set_current_line(52721, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4304);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(52722, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 28);
    goto LAB2;

}

static void NetDecl_52725_2(char *t0)
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

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52725, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 2304U);
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
LAB6:    t36 = (t0 + 8888);
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
    xsi_driver_vfirst_trans_delayed(t36, 0, 0U, 5LL, 0);
    t49 = (t0 + 8664);
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

static void Always_52758_3(char *t0)
{
    char t4[8];
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t20;
    int t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    char *t33;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 7088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52758, ng0);
    t2 = (t0 + 8680);
    *((int *)t2) = 1;
    t3 = (t0 + 7120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52758, ng0);

LAB5:    xsi_set_current_line(52760, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2624U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t4, 28, 1, t5, 1U, t7, 1);
    t6 = (t0 + 4624);
    t10 = (t0 + 4624);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 4624);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 4304);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t8, t9, t12, t15, 2, 1, t18, 5, 2);
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(52761, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2624U);
    t5 = *((char **)t3);
    xsi_vlog_mul_concat(t4, 28, 1, t2, 1U, t5, 1);
    t3 = (t0 + 4784);
    t6 = (t0 + 4784);
    t7 = (t6 + 72U);
    t10 = *((char **)t7);
    t11 = (t0 + 4784);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 4304);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_convert_array_indices(t8, t9, t10, t13, 2, 1, t16, 5, 2);
    t17 = (t8 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (!(t20));
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(52762, ng0);
    t2 = (t0 + 6896);
    xsi_process_wait(t2, 800LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t6, t4, 0, *((unsigned int *)t9), t29);
    goto LAB7;

LAB8:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t9), t29);
    goto LAB9;

LAB10:    xsi_set_current_line(52768, ng0);
    t3 = (t0 + 2784U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t20 = *((unsigned int *)t3);
    t23 = (~(t20));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t23);
    t30 = (t27 != 0);
    if (t30 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(52778, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3824);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memset(t4, 0, 8);
    t11 = (t4 + 4);
    t12 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t23 = (t20 >> 1);
    *((unsigned int *)t4) = t23;
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 1);
    *((unsigned int *)t11) = t27;
    t30 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t30 & 31U);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & 31U);
    memset(t8, 0, 8);
    t13 = (t5 + 4);
    t14 = (t4 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t4);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t14);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB22;

LAB19:    if (t43 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t8) = 1;

LAB22:    t16 = (t8 + 4);
    t46 = *((unsigned int *)t16);
    t47 = (~(t46));
    t48 = *((unsigned int *)t8);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(52779, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4144);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memset(t4, 0, 8);
    t11 = (t4 + 4);
    t12 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t23 = (t20 >> 1);
    *((unsigned int *)t4) = t23;
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 1);
    *((unsigned int *)t11) = t27;
    t30 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t30 & 31U);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & 31U);
    memset(t8, 0, 8);
    t13 = (t5 + 4);
    t14 = (t4 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t4);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t14);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB29;

LAB26:    if (t43 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t8) = 1;

LAB29:    t16 = (t8 + 4);
    t46 = *((unsigned int *)t16);
    t47 = (~(t46));
    t48 = *((unsigned int *)t8);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB11:    xsi_set_current_line(52768, ng0);

LAB14:    xsi_set_current_line(52770, ng0);
    t6 = (t0 + 4464);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t0 + 4624);
    t12 = (t0 + 4624);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 4624);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 4304);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t4, t8, t14, t17, 2, 1, t22, 5, 2);
    t31 = (t4 + 4);
    t32 = *((unsigned int *)t31);
    t21 = (!(t32));
    t33 = (t8 + 4);
    t34 = *((unsigned int *)t33);
    t24 = (!(t34));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(52771, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4784);
    t7 = (t0 + 4784);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 4784);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 4304);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t4, t8, t11, t14, 2, 1, t17, 5, 2);
    t18 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (!(t20));
    t19 = (t8 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB17;

LAB18:    goto LAB13;

LAB15:    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t8);
    t28 = (t35 - t36);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t8), t29);
    goto LAB16;

LAB17:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t8);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t29);
    goto LAB18;

LAB21:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(52778, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 5104);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB25;

LAB28:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(52779, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 5264);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB32;

}

static void Always_52785_4(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52785, ng0);
    t2 = (t0 + 8696);
    *((int *)t2) = 1;
    t3 = (t0 + 7368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52785, ng0);

LAB5:    xsi_set_current_line(52786, ng0);
    t5 = (t0 + 1664U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52788, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52786, ng0);

LAB13:    xsi_set_current_line(52787, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 28, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(52788, ng0);

LAB17:    xsi_set_current_line(52789, ng0);
    t5 = (t0 + 4464);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 28, 50LL);
    goto LAB16;

}

static void NetDecl_52795_5(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
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

LAB0:    t1 = (t0 + 7584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52795, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4624);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4624);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3664);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 31U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 28, t4, t8, t11, 2, 1, t12, 5, 2);
    t24 = (t0 + 8952);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 268435455U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 27U);
    t37 = (t0 + 8712);
    *((int *)t37) = 1;

LAB1:    return;
}

static void NetDecl_52798_6(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
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

LAB0:    t1 = (t0 + 7832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52798, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4784);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4784);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3984);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 31U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 31U);
    xsi_vlog_generic_get_array_select_value(t5, 28, t4, t8, t11, 2, 1, t12, 5, 2);
    t24 = (t0 + 9016);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 268435455U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 27U);
    t37 = (t0 + 8728);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Always_52801_7(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t36[8];
    char t50[8];
    char t64[8];
    char t75[8];
    char t76[8];
    char t77[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
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
    char *t51;
    char *t52;
    char *t53;
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
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    int t85;
    char *t86;
    unsigned int t87;
    int t88;
    int t89;
    char *t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;

LAB0:    t1 = (t0 + 8080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52801, ng0);
    t2 = (t0 + 8744);
    *((int *)t2) = 1;
    t3 = (t0 + 8112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52801, ng0);

LAB5:    xsi_set_current_line(52802, ng0);
    t5 = (t0 + 1664U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52810, ng0);

LAB14:    xsi_set_current_line(52811, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 50LL);
    xsi_set_current_line(52812, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 50LL);
    xsi_set_current_line(52813, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(52814, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(52815, ng0);
    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(52817, ng0);

LAB25:    xsi_set_current_line(52818, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t6) != 0)
        goto LAB28;

LAB29:    t13 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB30;

LAB31:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t21 = *((unsigned int *)t13);
    t22 = (t18 || t21);
    if (t22 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t13) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t31) > 0)
        goto LAB36;

LAB37:    memcpy(t4, t33, 8);

LAB38:    t74 = (t0 + 3504);
    t78 = (t0 + 3504);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng5)));
    t82 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t80)), 2, t81, 32, 1, t82, 32, 1);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t76 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    t89 = (t85 && t88);
    t90 = (t77 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(52827, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t6) != 0)
        goto LAB56;

LAB57:    t13 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB58;

LAB59:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t21 = *((unsigned int *)t13);
    t22 = (t18 || t21);
    if (t22 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t13) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t31) > 0)
        goto LAB64;

LAB65:    memcpy(t4, t33, 8);

LAB66:    t74 = (t0 + 3504);
    t78 = (t0 + 3504);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng6)));
    t82 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t80)), 2, t81, 32, 1, t82, 32, 1);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    t86 = (t76 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    t89 = (t85 && t88);
    t90 = (t77 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB80;

LAB81:
LAB23:    xsi_set_current_line(52837, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52838, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52802, ng0);

LAB13:    xsi_set_current_line(52803, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 50LL);
    xsi_set_current_line(52804, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 50LL);
    xsi_set_current_line(52805, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(52806, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(52807, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 28, 50LL);
    xsi_set_current_line(52808, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52809, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB19;

LAB21:    xsi_set_current_line(52815, ng0);

LAB24:    xsi_set_current_line(52816, ng0);
    t19 = (t0 + 4944);
    t20 = (t19 + 56U);
    t29 = *((char **)t20);
    t30 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 28, 50LL);
    goto LAB23;

LAB26:    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB28:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB30:    t19 = ((char*)((ng4)));
    t20 = (t0 + 2624U);
    t29 = *((char **)t20);
    xsi_vlog_mul_concat(t32, 14, 1, t19, 1U, t29, 1);
    goto LAB31;

LAB32:    t20 = (t0 + 3664);
    t30 = (t20 + 56U);
    t35 = *((char **)t30);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t36) = t25;
    t26 = *((unsigned int *)t38);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    memset(t34, 0, 8);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t39) != 0)
        goto LAB41;

LAB42:    t46 = (t34 + 4);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB43;

LAB44:    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t46) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t34) > 0)
        goto LAB49;

LAB50:    memcpy(t33, t64, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t4, 14, t32, 14, t33, 14);
    goto LAB38;

LAB36:    memcpy(t4, t32, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t34) = 1;
    goto LAB42;

LAB41:    t45 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB42;

LAB43:    t51 = (t0 + 2944U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 14);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 14);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 16383U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 16383U);
    goto LAB44;

LAB45:    t65 = (t0 + 2944U);
    t66 = *((char **)t65);
    memset(t64, 0, 8);
    t65 = (t64 + 4);
    t67 = (t66 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (t68 >> 0);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 0);
    *((unsigned int *)t65) = t71;
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 16383U);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 16383U);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t33, 14, t50, 14, t64, 14);
    goto LAB51;

LAB49:    memcpy(t33, t50, 8);
    goto LAB51;

LAB52:    t94 = *((unsigned int *)t77);
    t95 = (t94 + 0);
    t96 = *((unsigned int *)t75);
    t97 = *((unsigned int *)t76);
    t98 = (t96 - t97);
    t99 = (t98 + 1);
    xsi_vlogvar_wait_assign_value(t74, t4, t95, *((unsigned int *)t76), t99, 50LL);
    goto LAB53;

LAB54:    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB56:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    t19 = ((char*)((ng4)));
    t20 = (t0 + 2624U);
    t29 = *((char **)t20);
    xsi_vlog_mul_concat(t32, 14, 1, t19, 1U, t29, 1);
    goto LAB59;

LAB60:    t20 = (t0 + 3984);
    t30 = (t20 + 56U);
    t35 = *((char **)t30);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t36) = t25;
    t26 = *((unsigned int *)t38);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t37) = t28;
    memset(t34, 0, 8);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t39) != 0)
        goto LAB69;

LAB70:    t46 = (t34 + 4);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB71;

LAB72:    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t46) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t34) > 0)
        goto LAB77;

LAB78:    memcpy(t33, t64, 8);

LAB79:    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t4, 14, t32, 14, t33, 14);
    goto LAB66;

LAB64:    memcpy(t4, t32, 8);
    goto LAB66;

LAB67:    *((unsigned int *)t34) = 1;
    goto LAB70;

LAB69:    t45 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB70;

LAB71:    t51 = (t0 + 3104U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 14);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 14);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 16383U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 16383U);
    goto LAB72;

LAB73:    t65 = (t0 + 3104U);
    t66 = *((char **)t65);
    memset(t64, 0, 8);
    t65 = (t64 + 4);
    t67 = (t66 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (t68 >> 0);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 0);
    *((unsigned int *)t65) = t71;
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 16383U);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 16383U);
    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t33, 14, t50, 14, t64, 14);
    goto LAB79;

LAB77:    memcpy(t33, t50, 8);
    goto LAB79;

LAB80:    t94 = *((unsigned int *)t77);
    t95 = (t94 + 0);
    t96 = *((unsigned int *)t75);
    t97 = *((unsigned int *)t76);
    t98 = (t96 - t97);
    t99 = (t98 + 1);
    xsi_vlogvar_wait_assign_value(t74, t4, t95, *((unsigned int *)t76), t99, 50LL);
    goto LAB81;

}

static void Initial_52848_8(char *t0)
{
    char t6[8];
    char t7[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(52848, ng0);

LAB2:    xsi_set_current_line(52849, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52850, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5264);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52851, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4944);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(52852, ng0);
    xsi_set_current_line(52852, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 5424);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 5424);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t3, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(52856, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3664);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(52857, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3984);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(52858, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(52859, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4144);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(52860, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4304);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(52861, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4464);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(52862, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3504);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);

LAB1:    return;
LAB4:    xsi_set_current_line(52852, ng0);

LAB6:    xsi_set_current_line(52853, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 4624);
    t18 = (t0 + 4624);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 4624);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 5424);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(52854, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4784);
    t3 = (t0 + 4784);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t8 = (t0 + 4784);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t18 = (t0 + 5424);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t6, t7, t5, t15, 2, 1, t20, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t29 = (!(t9));
    t22 = (t7 + 4);
    t10 = *((unsigned int *)t22);
    t32 = (!(t10));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(52852, ng0);
    t1 = (t0 + 5424);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 5424);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

LAB9:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t7), t37);
    goto LAB10;

}


extern void secureip_m_00000000000433649083_2277226574_init()
{
	static char *pe[] = {(void *)Cont_52698_0,(void *)Always_52717_1,(void *)NetDecl_52725_2,(void *)Always_52758_3,(void *)Always_52785_4,(void *)NetDecl_52795_5,(void *)NetDecl_52798_6,(void *)Always_52801_7,(void *)Initial_52848_8};
	xsi_register_didat("secureip_m_00000000000433649083_2277226574", "isim/top_test_bench.exe.sim/secureip/m_00000000000433649083_2277226574.didat");
	xsi_register_executes(pe);
}
