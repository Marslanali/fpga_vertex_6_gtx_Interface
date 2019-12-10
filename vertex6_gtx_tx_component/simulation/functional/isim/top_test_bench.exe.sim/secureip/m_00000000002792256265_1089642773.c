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
static unsigned int ng1[] = {8U, 3U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {6U, 1U};
static unsigned int ng4[] = {4U, 1U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {1047552U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {678550U, 0U};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {31U, 0U};
static unsigned int ng12[] = {15U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {95U, 0U};
static unsigned int ng15[] = {47U, 0U};
static unsigned int ng16[] = {23U, 0U};
static unsigned int ng17[] = {287U, 0U};
static unsigned int ng18[] = {143U, 0U};
static unsigned int ng19[] = {71U, 0U};
static unsigned int ng20[] = {349340U, 0U};
static unsigned int ng21[] = {256341U, 0U};



static void NetDecl_58340_0(char *t0)
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

LAB0:    t1 = (t0 + 13368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58340, ng0);
    t2 = (t0 + 5808U);
    t3 = *((char **)t2);
    t2 = (t0 + 20616);
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
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t16 = (t0 + 20136);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_58344_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 13616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58344, ng0);
    t2 = (t0 + 20152);
    *((int *)t2) = 1;
    t3 = (t0 + 13648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58344, ng0);

LAB5:    xsi_set_current_line(58345, ng0);
    t5 = (t0 + 5488U);
    t6 = *((char **)t5);
    t5 = (t0 + 5328U);
    t7 = *((char **)t5);
    t5 = (t0 + 6128U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 4, 4, 3U, t8, 2, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t5, 4);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(58352, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(58346, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 11008);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB21;

LAB9:    xsi_set_current_line(58347, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB21;

LAB11:    xsi_set_current_line(58348, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB21;

LAB13:    xsi_set_current_line(58349, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB21;

LAB15:    xsi_set_current_line(58350, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB21;

LAB17:    xsi_set_current_line(58351, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB21;

}

static void NetDecl_58357_2(char *t0)
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

LAB0:    t1 = (t0 + 13864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58357, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = (t0 + 20680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
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
    xsi_driver_vfirst_trans(t2, 0, 19U);
    t16 = (t0 + 20168);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_58358_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 14112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58358, ng0);
    t2 = (t0 + 5648U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 20744);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 20184);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void NetDecl_58360_4(char *t0)
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

LAB0:    t1 = (t0 + 14360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58360, ng0);
    t2 = (t0 + 6288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6448U);
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
LAB6:    t36 = (t0 + 20808);
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
    xsi_driver_vfirst_trans(t36, 0, 0U);
    t49 = (t0 + 20200);
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

static void NetDecl_58367_5(char *t0)
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

LAB0:    t1 = (t0 + 14608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58367, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 20872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
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
    xsi_driver_vfirst_trans(t3, 0, 19U);

LAB1:    return;
}

static void Always_58376_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 14856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58376, ng0);
    t2 = (t0 + 20216);
    *((int *)t2) = 1;
    t3 = (t0 + 14888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58376, ng0);

LAB5:    xsi_set_current_line(58377, ng0);
    t4 = (t0 + 3728U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(58381, ng0);

LAB19:    xsi_set_current_line(58381, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 11168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 20, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(58378, ng0);

LAB16:    xsi_set_current_line(58378, ng0);
    t7 = (t0 + 7728U);
    t8 = *((char **)t7);
    t7 = (t0 + 11168);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 20, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(58379, ng0);

LAB17:    xsi_set_current_line(58379, ng0);
    t3 = (t0 + 8208U);
    t4 = *((char **)t3);
    t3 = (t0 + 11168);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(58380, ng0);

LAB18:    xsi_set_current_line(58380, ng0);
    t3 = (t0 + 8368U);
    t4 = *((char **)t3);
    t3 = (t0 + 11168);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    goto LAB15;

}

static void Cont_58385_7(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58385, ng0);
    t2 = (t0 + 11168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 20936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1048575U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 19);
    t18 = (t0 + 20232);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_58396_8(char *t0)
{
    char t13[8];
    char t34[8];
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
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
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 15352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58396, ng0);
    t2 = (t0 + 20248);
    *((int *)t2) = 1;
    t3 = (t0 + 15384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58396, ng0);

LAB5:    xsi_set_current_line(58397, ng0);
    t4 = (t0 + 7888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58400, ng0);

LAB10:    xsi_set_current_line(58401, ng0);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(58402, ng0);
    t2 = (t0 + 4848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(58403, ng0);
    t2 = (t0 + 5008U);
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
LAB19:    xsi_set_current_line(58405, ng0);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4848U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
        goto LAB20;

LAB21:
LAB22:    t32 = (t0 + 5008U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t13 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB23;

LAB24:
LAB25:    t61 = (t0 + 11488);
    xsi_vlogvar_wait_assign_value(t61, t34, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58397, ng0);

LAB9:    xsi_set_current_line(58398, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 11328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(58399, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 11488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(58401, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 11328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(58402, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 11328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB16;

LAB17:    xsi_set_current_line(58403, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 11328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB19;

LAB20:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & t28);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    goto LAB22;

LAB23:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t13 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t13);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB25;

}

static void NetDecl_58409_9(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58409, ng0);
    t2 = (t0 + 11328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 1U);
    t18 = (t0 + 20264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_58410_10(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58410, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0U);
    t18 = (t0 + 20280);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_58423_11(char *t0)
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

LAB0:    t1 = (t0 + 16096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58423, ng0);
    t2 = (t0 + 11808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB7:    t22 = (t0 + 21128);
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
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 20296);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void NetDecl_58424_12(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58424, ng0);
    t2 = (t0 + 8848U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 21192);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 20312);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void NetDecl_58425_13(char *t0)
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

LAB0:    t1 = (t0 + 16592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58425, ng0);
    t2 = (t0 + 11648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB7:    t22 = (t0 + 21256);
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
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 20328);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void NetDecl_58426_14(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 16840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58426, ng0);
    t2 = (t0 + 9168U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 21320);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 20344);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_58444_15(char *t0)
{
    char t14[8];
    char t22[8];
    char t23[8];
    char t34[8];
    char t35[8];
    char t39[8];
    char t66[8];
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
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 17088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58444, ng0);
    t2 = (t0 + 20360);
    *((int *)t2) = 1;
    t3 = (t0 + 17120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58445, ng0);

LAB5:    xsi_set_current_line(58446, ng0);
    t4 = (t0 + 7888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58454, ng0);

LAB10:    xsi_set_current_line(58455, ng0);
    t2 = (t0 + 11968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(58525, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58447, ng0);

LAB9:    xsi_set_current_line(58448, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 11648);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(58449, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(58450, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(58451, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(58456, ng0);

LAB21:    xsi_set_current_line(58457, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 10848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(58458, ng0);
    t2 = (t0 + 8688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(58466, ng0);

LAB52:    xsi_set_current_line(58467, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(58468, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(58469, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB24:    goto LAB20;

LAB14:    xsi_set_current_line(58473, ng0);

LAB53:    xsi_set_current_line(58474, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 10848);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(58475, ng0);
    t2 = (t0 + 9008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(58480, ng0);
    t2 = (t0 + 8528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t26 = (t16 & t20);
    if (t26 != 0)
        goto LAB61;

LAB58:    if (t19 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t14) = 1;

LAB61:    t21 = (t14 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t28);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(58486, ng0);
    t2 = (t0 + 8528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t26 = (t16 & t20);
    if (t26 != 0)
        goto LAB95;

LAB92:    if (t19 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t14) = 1;

LAB95:    t21 = (t14 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t28);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(58492, ng0);
    t2 = (t0 + 8528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t26 = (t16 & t20);
    if (t26 != 0)
        goto LAB129;

LAB126:    if (t19 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t14) = 1;

LAB129:    t21 = (t14 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t28);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB130;

LAB131:
LAB132:
LAB98:
LAB64:
LAB56:    goto LAB20;

LAB16:    xsi_set_current_line(58500, ng0);

LAB160:    xsi_set_current_line(58501, ng0);
    t3 = (t0 + 9008U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(58506, ng0);
    t2 = (t0 + 9328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(58513, ng0);
    t2 = (t0 + 8688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB195;

LAB196:    xsi_set_current_line(58520, ng0);

LAB225:    xsi_set_current_line(58521, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58522, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB197:
LAB167:
LAB163:    goto LAB20;

LAB22:    xsi_set_current_line(58459, ng0);

LAB25:    xsi_set_current_line(58460, ng0);
    t5 = (t0 + 5168U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 15U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 15U);
    t21 = (t0 + 11648);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(58461, ng0);
    t2 = (t0 + 11008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t11 = (t23 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t11) = t15;
    memset(t22, 0, 8);
    t21 = (t23 + 4);
    t16 = *((unsigned int *)t21);
    t17 = (~(t16));
    t18 = *((unsigned int *)t23);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t21) != 0)
        goto LAB28;

LAB29:    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB30;

LAB31:    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t25) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t22) > 0)
        goto LAB36;

LAB37:    memcpy(t14, t34, 8);

LAB38:    t65 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t65, t14, 0, 0, 9, 0LL);
    xsi_set_current_line(58463, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB26:    *((unsigned int *)t22) = 1;
    goto LAB29;

LAB28:    t24 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB29;

LAB30:    t29 = ((char*)((ng11)));
    goto LAB31;

LAB32:    t36 = (t0 + 11008);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t40) = t47;
    memset(t35, 0, 8);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t39);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t48) != 0)
        goto LAB41;

LAB42:    t55 = (t35 + 4);
    t56 = *((unsigned int *)t35);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB43;

LAB44:    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t55) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t35) > 0)
        goto LAB49;

LAB50:    memcpy(t34, t64, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t14, 9, t29, 9, t34, 9);
    goto LAB38;

LAB36:    memcpy(t14, t29, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t35) = 1;
    goto LAB42;

LAB41:    t54 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB42;

LAB43:    t59 = ((char*)((ng12)));
    goto LAB44;

LAB45:    t64 = ((char*)((ng13)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t34, 9, t59, 9, t64, 9);
    goto LAB51;

LAB49:    memcpy(t34, t59, 8);
    goto LAB51;

LAB54:    xsi_set_current_line(58476, ng0);

LAB57:    xsi_set_current_line(58477, ng0);
    t5 = (t0 + 11808);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 9, t12, 9, t21, 9);
    t24 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 9, 0LL);
    xsi_set_current_line(58478, ng0);
    t2 = (t0 + 11968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 2, 0LL);
    goto LAB56;

LAB60:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(58481, ng0);

LAB65:    xsi_set_current_line(58482, ng0);
    t24 = (t0 + 11008);
    t25 = (t24 + 56U);
    t29 = *((char **)t25);
    memset(t34, 0, 8);
    t36 = (t34 + 4);
    t37 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t42 = (t33 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t37);
    t45 = (t44 >> 1);
    t46 = (t45 & 1);
    *((unsigned int *)t36) = t46;
    memset(t23, 0, 8);
    t38 = (t34 + 4);
    t47 = *((unsigned int *)t38);
    t49 = (~(t47));
    t50 = *((unsigned int *)t34);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t38) != 0)
        goto LAB68;

LAB69:    t41 = (t23 + 4);
    t53 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t41);
    t57 = (t53 || t56);
    if (t57 > 0)
        goto LAB70;

LAB71:    t58 = *((unsigned int *)t23);
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t41) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t23) > 0)
        goto LAB76;

LAB77:    memcpy(t22, t35, 8);

LAB78:    t89 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t89, t22, 0, 0, 9, 0LL);
    xsi_set_current_line(58484, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB64;

LAB66:    *((unsigned int *)t23) = 1;
    goto LAB69;

LAB68:    t40 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB69;

LAB70:    t48 = ((char*)((ng14)));
    goto LAB71;

LAB72:    t54 = (t0 + 11008);
    t55 = (t54 + 56U);
    t59 = *((char **)t55);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t65 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t67 = (t63 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t66) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 0);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    memset(t39, 0, 8);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t72) != 0)
        goto LAB81;

LAB82:    t79 = (t39 + 4);
    t80 = *((unsigned int *)t39);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB83;

LAB84:    t84 = *((unsigned int *)t39);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t79) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t39) > 0)
        goto LAB89;

LAB90:    memcpy(t35, t88, 8);

LAB91:    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t22, 9, t48, 9, t35, 9);
    goto LAB78;

LAB76:    memcpy(t22, t48, 8);
    goto LAB78;

LAB79:    *((unsigned int *)t39) = 1;
    goto LAB82;

LAB81:    t78 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB82;

LAB83:    t83 = ((char*)((ng15)));
    goto LAB84;

LAB85:    t88 = ((char*)((ng16)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t35, 9, t83, 9, t88, 9);
    goto LAB91;

LAB89:    memcpy(t35, t83, 8);
    goto LAB91;

LAB94:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(58487, ng0);

LAB99:    xsi_set_current_line(58488, ng0);
    t24 = (t0 + 11008);
    t25 = (t24 + 56U);
    t29 = *((char **)t25);
    memset(t34, 0, 8);
    t36 = (t34 + 4);
    t37 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t42 = (t33 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t37);
    t45 = (t44 >> 1);
    t46 = (t45 & 1);
    *((unsigned int *)t36) = t46;
    memset(t23, 0, 8);
    t38 = (t34 + 4);
    t47 = *((unsigned int *)t38);
    t49 = (~(t47));
    t50 = *((unsigned int *)t34);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t38) != 0)
        goto LAB102;

LAB103:    t41 = (t23 + 4);
    t53 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t41);
    t57 = (t53 || t56);
    if (t57 > 0)
        goto LAB104;

LAB105:    t58 = *((unsigned int *)t23);
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t41) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t23) > 0)
        goto LAB110;

LAB111:    memcpy(t22, t35, 8);

LAB112:    t89 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t89, t22, 0, 0, 9, 0LL);
    xsi_set_current_line(58490, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB98;

LAB100:    *((unsigned int *)t23) = 1;
    goto LAB103;

LAB102:    t40 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB103;

LAB104:    t48 = ((char*)((ng11)));
    goto LAB105;

LAB106:    t54 = (t0 + 11008);
    t55 = (t54 + 56U);
    t59 = *((char **)t55);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t65 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t67 = (t63 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t66) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 0);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    memset(t39, 0, 8);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t72) != 0)
        goto LAB115;

LAB116:    t79 = (t39 + 4);
    t80 = *((unsigned int *)t39);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB117;

LAB118:    t84 = *((unsigned int *)t39);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t79) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t39) > 0)
        goto LAB123;

LAB124:    memcpy(t35, t88, 8);

LAB125:    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t22, 9, t48, 9, t35, 9);
    goto LAB112;

LAB110:    memcpy(t22, t48, 8);
    goto LAB112;

LAB113:    *((unsigned int *)t39) = 1;
    goto LAB116;

LAB115:    t78 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB116;

LAB117:    t83 = ((char*)((ng12)));
    goto LAB118;

LAB119:    t88 = ((char*)((ng13)));
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t35, 9, t83, 9, t88, 9);
    goto LAB125;

LAB123:    memcpy(t35, t83, 8);
    goto LAB125;

LAB128:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(58493, ng0);

LAB133:    xsi_set_current_line(58494, ng0);
    t24 = (t0 + 11008);
    t25 = (t24 + 56U);
    t29 = *((char **)t25);
    memset(t34, 0, 8);
    t36 = (t34 + 4);
    t37 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t42 = (t33 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t44 = *((unsigned int *)t37);
    t45 = (t44 >> 1);
    t46 = (t45 & 1);
    *((unsigned int *)t36) = t46;
    memset(t23, 0, 8);
    t38 = (t34 + 4);
    t47 = *((unsigned int *)t38);
    t49 = (~(t47));
    t50 = *((unsigned int *)t34);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t38) != 0)
        goto LAB136;

LAB137:    t41 = (t23 + 4);
    t53 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t41);
    t57 = (t53 || t56);
    if (t57 > 0)
        goto LAB138;

LAB139:    t58 = *((unsigned int *)t23);
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t41) > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t23) > 0)
        goto LAB144;

LAB145:    memcpy(t22, t35, 8);

LAB146:    t89 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t89, t22, 0, 0, 9, 0LL);
    xsi_set_current_line(58496, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB132;

LAB134:    *((unsigned int *)t23) = 1;
    goto LAB137;

LAB136:    t40 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB137;

LAB138:    t48 = ((char*)((ng17)));
    goto LAB139;

LAB140:    t54 = (t0 + 11008);
    t55 = (t54 + 56U);
    t59 = *((char **)t55);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t65 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t67 = (t63 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t66) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 0);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    memset(t39, 0, 8);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t72) != 0)
        goto LAB149;

LAB150:    t79 = (t39 + 4);
    t80 = *((unsigned int *)t39);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB151;

LAB152:    t84 = *((unsigned int *)t39);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t79) > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t39) > 0)
        goto LAB157;

LAB158:    memcpy(t35, t88, 8);

LAB159:    goto LAB141;

LAB142:    xsi_vlog_unsigned_bit_combine(t22, 9, t48, 9, t35, 9);
    goto LAB146;

LAB144:    memcpy(t22, t48, 8);
    goto LAB146;

LAB147:    *((unsigned int *)t39) = 1;
    goto LAB150;

LAB149:    t78 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB150;

LAB151:    t83 = ((char*)((ng18)));
    goto LAB152;

LAB153:    t88 = ((char*)((ng19)));
    goto LAB154;

LAB155:    xsi_vlog_unsigned_bit_combine(t35, 9, t83, 9, t88, 9);
    goto LAB159;

LAB157:    memcpy(t35, t83, 8);
    goto LAB159;

LAB161:    xsi_set_current_line(58502, ng0);

LAB164:    xsi_set_current_line(58503, ng0);
    t11 = (t0 + 11808);
    t12 = (t11 + 56U);
    t21 = *((char **)t12);
    t24 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 9, t21, 9, t24, 9);
    t25 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t25, t14, 0, 0, 9, 0LL);
    xsi_set_current_line(58504, ng0);
    t2 = (t0 + 11968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 2, 0LL);
    goto LAB163;

LAB165:    xsi_set_current_line(58507, ng0);

LAB168:    xsi_set_current_line(58508, ng0);
    t5 = (t0 + 11648);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 4, t12, 4, t21, 4);
    t24 = (t0 + 11648);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(58509, ng0);
    t2 = (t0 + 11008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t11 = (t23 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t11) = t15;
    memset(t22, 0, 8);
    t21 = (t23 + 4);
    t16 = *((unsigned int *)t21);
    t17 = (~(t16));
    t18 = *((unsigned int *)t23);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t21) != 0)
        goto LAB171;

LAB172:    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB173;

LAB174:    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t25) > 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t22) > 0)
        goto LAB179;

LAB180:    memcpy(t14, t34, 8);

LAB181:    t65 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t65, t14, 0, 0, 9, 0LL);
    xsi_set_current_line(58511, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB167;

LAB169:    *((unsigned int *)t22) = 1;
    goto LAB172;

LAB171:    t24 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB172;

LAB173:    t29 = ((char*)((ng11)));
    goto LAB174;

LAB175:    t36 = (t0 + 11008);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t40) = t47;
    memset(t35, 0, 8);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t39);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t48) != 0)
        goto LAB184;

LAB185:    t55 = (t35 + 4);
    t56 = *((unsigned int *)t35);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB186;

LAB187:    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t55) > 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t35) > 0)
        goto LAB192;

LAB193:    memcpy(t34, t64, 8);

LAB194:    goto LAB176;

LAB177:    xsi_vlog_unsigned_bit_combine(t14, 9, t29, 9, t34, 9);
    goto LAB181;

LAB179:    memcpy(t14, t29, 8);
    goto LAB181;

LAB182:    *((unsigned int *)t35) = 1;
    goto LAB185;

LAB184:    t54 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB185;

LAB186:    t59 = ((char*)((ng12)));
    goto LAB187;

LAB188:    t64 = ((char*)((ng13)));
    goto LAB189;

LAB190:    xsi_vlog_unsigned_bit_combine(t34, 9, t59, 9, t64, 9);
    goto LAB194;

LAB192:    memcpy(t34, t59, 8);
    goto LAB194;

LAB195:    xsi_set_current_line(58514, ng0);

LAB198:    xsi_set_current_line(58515, ng0);
    t5 = (t0 + 11008);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t24);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t21) = t20;
    memset(t22, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t30 = (t28 & t27);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t25) != 0)
        goto LAB201;

LAB202:    t36 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t36);
    t42 = (t32 || t33);
    if (t42 > 0)
        goto LAB203;

LAB204:    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t45 = *((unsigned int *)t36);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB205;

LAB206:    if (*((unsigned int *)t36) > 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t22) > 0)
        goto LAB209;

LAB210:    memcpy(t14, t34, 8);

LAB211:    t78 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t78, t14, 0, 0, 9, 0LL);
    xsi_set_current_line(58517, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB197;

LAB199:    *((unsigned int *)t22) = 1;
    goto LAB202;

LAB201:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB202;

LAB203:    t37 = ((char*)((ng11)));
    goto LAB204;

LAB205:    t38 = (t0 + 11008);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t48 = (t39 + 4);
    t54 = (t41 + 4);
    t47 = *((unsigned int *)t41);
    t49 = (t47 >> 0);
    t50 = (t49 & 1);
    *((unsigned int *)t39) = t50;
    t51 = *((unsigned int *)t54);
    t52 = (t51 >> 0);
    t53 = (t52 & 1);
    *((unsigned int *)t48) = t53;
    memset(t35, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t60 = (t58 & t57);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t55) != 0)
        goto LAB214;

LAB215:    t64 = (t35 + 4);
    t62 = *((unsigned int *)t35);
    t63 = *((unsigned int *)t64);
    t67 = (t62 || t63);
    if (t67 > 0)
        goto LAB216;

LAB217:    t68 = *((unsigned int *)t35);
    t69 = (~(t68));
    t70 = *((unsigned int *)t64);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t64) > 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t35) > 0)
        goto LAB222;

LAB223:    memcpy(t34, t72, 8);

LAB224:    goto LAB206;

LAB207:    xsi_vlog_unsigned_bit_combine(t14, 9, t37, 9, t34, 9);
    goto LAB211;

LAB209:    memcpy(t14, t37, 8);
    goto LAB211;

LAB212:    *((unsigned int *)t35) = 1;
    goto LAB215;

LAB214:    t59 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB215;

LAB216:    t65 = ((char*)((ng12)));
    goto LAB217;

LAB218:    t72 = ((char*)((ng13)));
    goto LAB219;

LAB220:    xsi_vlog_unsigned_bit_combine(t34, 9, t65, 9, t72, 9);
    goto LAB224;

LAB222:    memcpy(t34, t65, 8);
    goto LAB224;

}

static void NetDecl_58532_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t39[8];
    char t40[8];
    char t44[8];
    char t92[8];
    char t93[8];
    char t115[8];
    char t131[8];
    char *t1;
    char *t2;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
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
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t94;
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
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;

LAB0:    t1 = (t0 + 17336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58302, ng0);
    t2 = (t0 + 7408U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t39, 8);

LAB22:    t163 = (t0 + 21384);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    memset(t167, 0, 8);
    t168 = 1U;
    t169 = t168;
    t170 = (t3 + 4);
    t171 = *((unsigned int *)t3);
    t168 = (t168 & t171);
    t172 = *((unsigned int *)t170);
    t169 = (t169 & t172);
    t173 = (t167 + 4);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t174 | t168);
    t175 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t175 | t169);
    xsi_driver_vfirst_trans(t163, 0, 0U);
    t176 = (t0 + 20376);
    *((int *)t176) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = ((char*)((ng5)));
    goto LAB15;

LAB16:    t41 = (t0 + 6608U);
    t42 = *((char **)t41);
    t41 = (t0 + 6768U);
    t43 = *((char **)t41);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t41 = (t42 + 4);
    t48 = (t43 + 4);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB23;

LAB24:
LAB25:    memset(t40, 0, 8);
    t75 = (t44 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t44);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t75) != 0)
        goto LAB28;

LAB29:    t82 = (t40 + 4);
    t83 = *((unsigned int *)t40);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB30;

LAB31:    t88 = *((unsigned int *)t40);
    t89 = (~(t88));
    t90 = *((unsigned int *)t82);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t82) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t40) > 0)
        goto LAB36;

LAB37:    memcpy(t39, t92, 8);

LAB38:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t34, 1, t39, 1);
    goto LAB22;

LAB20:    memcpy(t3, t34, 8);
    goto LAB22;

LAB23:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t44) = (t55 | t56);
    t57 = (t42 + 4);
    t58 = (t43 + 4);
    t59 = *((unsigned int *)t42);
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
    goto LAB25;

LAB26:    *((unsigned int *)t40) = 1;
    goto LAB29;

LAB28:    t81 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB29;

LAB30:    t86 = (t0 + 7248U);
    t87 = *((char **)t86);
    goto LAB31;

LAB32:    t86 = (t0 + 6928U);
    t94 = *((char **)t86);
    memset(t93, 0, 8);
    t86 = (t94 + 4);
    t95 = *((unsigned int *)t86);
    t96 = (~(t95));
    t97 = *((unsigned int *)t94);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t86) != 0)
        goto LAB41;

LAB42:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB43;

LAB44:    t107 = *((unsigned int *)t93);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t101) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t93) > 0)
        goto LAB49;

LAB50:    memcpy(t92, t131, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t39, 1, t87, 1, t92, 1);
    goto LAB38;

LAB36:    memcpy(t39, t87, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t93) = 1;
    goto LAB42;

LAB41:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB42;

LAB43:    t105 = (t0 + 7088U);
    t106 = *((char **)t105);
    goto LAB44;

LAB45:    t105 = (t0 + 3888U);
    t111 = *((char **)t105);
    t105 = (t0 + 11968);
    t112 = (t105 + 56U);
    t113 = *((char **)t112);
    t114 = ((char*)((ng5)));
    memset(t115, 0, 8);
    t116 = (t113 + 4);
    t117 = (t114 + 4);
    t118 = *((unsigned int *)t113);
    t119 = *((unsigned int *)t114);
    t120 = (t118 ^ t119);
    t121 = *((unsigned int *)t116);
    t122 = *((unsigned int *)t117);
    t123 = (t121 ^ t122);
    t124 = (t120 | t123);
    t125 = *((unsigned int *)t116);
    t126 = *((unsigned int *)t117);
    t127 = (t125 | t126);
    t128 = (~(t127));
    t129 = (t124 & t128);
    if (t129 != 0)
        goto LAB53;

LAB52:    if (t127 != 0)
        goto LAB54;

LAB55:    t132 = *((unsigned int *)t111);
    t133 = *((unsigned int *)t115);
    t134 = (t132 & t133);
    *((unsigned int *)t131) = t134;
    t135 = (t111 + 4);
    t136 = (t115 + 4);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t92, 1, t106, 1, t131, 1);
    goto LAB51;

LAB49:    memcpy(t92, t106, 8);
    goto LAB51;

LAB53:    *((unsigned int *)t115) = 1;
    goto LAB55;

LAB54:    t130 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB55;

LAB56:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t111 + 4);
    t146 = (t115 + 4);
    t147 = *((unsigned int *)t111);
    t148 = (~(t147));
    t149 = *((unsigned int *)t145);
    t150 = (~(t149));
    t151 = *((unsigned int *)t115);
    t152 = (~(t151));
    t153 = *((unsigned int *)t146);
    t154 = (~(t153));
    t155 = (t148 & t150);
    t156 = (t152 & t154);
    t157 = (~(t155));
    t158 = (~(t156));
    t159 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t159 & t157);
    t160 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t160 & t158);
    t161 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t161 & t157);
    t162 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t162 & t158);
    goto LAB58;

}

static void Cont_58550_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
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
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 17584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58550, ng0);
    t2 = (t0 + 11808);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t16) != 0)
        goto LAB6;

LAB7:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t33 = (t0 + 21448);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 1048575U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 19);
    t46 = (t0 + 20392);
    *((int *)t46) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t27 = ((char*)((ng20)));
    goto LAB9;

LAB10:    t32 = ((char*)((ng21)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 20, t27, 20, t32, 20);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void NetDecl_58556_18(char *t0)
{
    char t3[8];
    char t5[8];
    char t15[8];
    char t25[8];
    char t35[8];
    char t45[8];
    char t55[8];
    char t65[8];
    char t75[8];
    char t85[8];
    char t95[8];
    char t105[8];
    char t115[8];
    char t125[8];
    char t135[8];
    char t145[8];
    char t155[8];
    char t165[8];
    char t175[8];
    char t185[8];
    char t195[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;

LAB0:    t1 = (t0 + 17832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58556, ng0);
    t2 = (t0 + 9488U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 19);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 19);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 9488U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 18);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 18);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    t23 = (t0 + 9488U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 17);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 17);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    t33 = (t0 + 9488U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 16);
    t39 = (t38 & 1);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 16);
    t42 = (t41 & 1);
    *((unsigned int *)t33) = t42;
    t43 = (t0 + 9488U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 15);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    t53 = (t0 + 9488U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 14);
    t59 = (t58 & 1);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 14);
    t62 = (t61 & 1);
    *((unsigned int *)t53) = t62;
    t63 = (t0 + 9488U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t63 = (t65 + 4);
    t66 = (t64 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 13);
    t69 = (t68 & 1);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 13);
    t72 = (t71 & 1);
    *((unsigned int *)t63) = t72;
    t73 = (t0 + 9488U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t75 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 12);
    t79 = (t78 & 1);
    *((unsigned int *)t75) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 12);
    t82 = (t81 & 1);
    *((unsigned int *)t73) = t82;
    t83 = (t0 + 9488U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t83 = (t85 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 11);
    t89 = (t88 & 1);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 11);
    t92 = (t91 & 1);
    *((unsigned int *)t83) = t92;
    t93 = (t0 + 9488U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t93 = (t95 + 4);
    t96 = (t94 + 4);
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 10);
    t99 = (t98 & 1);
    *((unsigned int *)t95) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 10);
    t102 = (t101 & 1);
    *((unsigned int *)t93) = t102;
    t103 = (t0 + 9488U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t103 = (t105 + 4);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 9);
    t109 = (t108 & 1);
    *((unsigned int *)t105) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 >> 9);
    t112 = (t111 & 1);
    *((unsigned int *)t103) = t112;
    t113 = (t0 + 9488U);
    t114 = *((char **)t113);
    memset(t115, 0, 8);
    t113 = (t115 + 4);
    t116 = (t114 + 4);
    t117 = *((unsigned int *)t114);
    t118 = (t117 >> 8);
    t119 = (t118 & 1);
    *((unsigned int *)t115) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 >> 8);
    t122 = (t121 & 1);
    *((unsigned int *)t113) = t122;
    t123 = (t0 + 9488U);
    t124 = *((char **)t123);
    memset(t125, 0, 8);
    t123 = (t125 + 4);
    t126 = (t124 + 4);
    t127 = *((unsigned int *)t124);
    t128 = (t127 >> 7);
    t129 = (t128 & 1);
    *((unsigned int *)t125) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 >> 7);
    t132 = (t131 & 1);
    *((unsigned int *)t123) = t132;
    t133 = (t0 + 9488U);
    t134 = *((char **)t133);
    memset(t135, 0, 8);
    t133 = (t135 + 4);
    t136 = (t134 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (t137 >> 6);
    t139 = (t138 & 1);
    *((unsigned int *)t135) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 >> 6);
    t142 = (t141 & 1);
    *((unsigned int *)t133) = t142;
    t143 = (t0 + 9488U);
    t144 = *((char **)t143);
    memset(t145, 0, 8);
    t143 = (t145 + 4);
    t146 = (t144 + 4);
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 5);
    t149 = (t148 & 1);
    *((unsigned int *)t145) = t149;
    t150 = *((unsigned int *)t146);
    t151 = (t150 >> 5);
    t152 = (t151 & 1);
    *((unsigned int *)t143) = t152;
    t153 = (t0 + 9488U);
    t154 = *((char **)t153);
    memset(t155, 0, 8);
    t153 = (t155 + 4);
    t156 = (t154 + 4);
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 4);
    t159 = (t158 & 1);
    *((unsigned int *)t155) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 >> 4);
    t162 = (t161 & 1);
    *((unsigned int *)t153) = t162;
    t163 = (t0 + 9488U);
    t164 = *((char **)t163);
    memset(t165, 0, 8);
    t163 = (t165 + 4);
    t166 = (t164 + 4);
    t167 = *((unsigned int *)t164);
    t168 = (t167 >> 3);
    t169 = (t168 & 1);
    *((unsigned int *)t165) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 >> 3);
    t172 = (t171 & 1);
    *((unsigned int *)t163) = t172;
    t173 = (t0 + 9488U);
    t174 = *((char **)t173);
    memset(t175, 0, 8);
    t173 = (t175 + 4);
    t176 = (t174 + 4);
    t177 = *((unsigned int *)t174);
    t178 = (t177 >> 2);
    t179 = (t178 & 1);
    *((unsigned int *)t175) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 >> 2);
    t182 = (t181 & 1);
    *((unsigned int *)t173) = t182;
    t183 = (t0 + 9488U);
    t184 = *((char **)t183);
    memset(t185, 0, 8);
    t183 = (t185 + 4);
    t186 = (t184 + 4);
    t187 = *((unsigned int *)t184);
    t188 = (t187 >> 1);
    t189 = (t188 & 1);
    *((unsigned int *)t185) = t189;
    t190 = *((unsigned int *)t186);
    t191 = (t190 >> 1);
    t192 = (t191 & 1);
    *((unsigned int *)t183) = t192;
    t193 = (t0 + 9488U);
    t194 = *((char **)t193);
    memset(t195, 0, 8);
    t193 = (t195 + 4);
    t196 = (t194 + 4);
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 0);
    t199 = (t198 & 1);
    *((unsigned int *)t195) = t199;
    t200 = *((unsigned int *)t196);
    t201 = (t200 >> 0);
    t202 = (t201 & 1);
    *((unsigned int *)t193) = t202;
    xsi_vlogtype_concat(t3, 20, 20, 20U, t195, 1, t185, 1, t175, 1, t165, 1, t155, 1, t145, 1, t135, 1, t125, 1, t115, 1, t105, 1, t95, 1, t85, 1, t75, 1, t65, 1, t55, 1, t45, 1, t35, 1, t25, 1, t15, 1, t5, 1);
    t203 = (t0 + 21512);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    t206 = (t205 + 56U);
    t207 = *((char **)t206);
    memset(t207, 0, 8);
    t208 = 1048575U;
    t209 = t208;
    t210 = (t3 + 4);
    t211 = *((unsigned int *)t3);
    t208 = (t208 & t211);
    t212 = *((unsigned int *)t210);
    t209 = (t209 & t212);
    t213 = (t207 + 4);
    t214 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t214 | t208);
    t215 = *((unsigned int *)t213);
    *((unsigned int *)t213) = (t215 | t209);
    xsi_driver_vfirst_trans(t203, 0, 19U);
    t216 = (t0 + 20408);
    *((int *)t216) = 1;

LAB1:    return;
}

static void Cont_58561_19(char *t0)
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

LAB0:    t1 = (t0 + 18080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58561, ng0);
    t2 = (t0 + 9648U);
    t3 = *((char **)t2);
    t2 = (t0 + 21576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1048575U;
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
    xsi_driver_vfirst_trans(t2, 0, 19);
    t16 = (t0 + 20424);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_58578_20(char *t0)
{
    char t3[8];
    char t6[8];
    char t35[8];
    char t44[8];
    char *t1;
    char *t2;
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
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 18328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58578, ng0);
    t2 = (t0 + 12128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 12128);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t35);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t3 + 4);
    t49 = (t35 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 21640);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0U);
    t89 = (t0 + 20440);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t3 + 4);
    t59 = (t35 + 4);
    t60 = *((unsigned int *)t3);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}

static void NetDecl_58580_21(char *t0)
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

LAB0:    t1 = (t0 + 18576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58580, ng0);
    t2 = (t0 + 12288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB7:    t22 = (t0 + 21704);
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
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 20456);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void NetDecl_58581_22(char *t0)
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

LAB0:    t1 = (t0 + 18824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58581, ng0);
    t2 = (t0 + 12288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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

LAB7:    t22 = (t0 + 21768);
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
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 20472);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_58587_23(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t16;

LAB0:    t1 = (t0 + 19072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58587, ng0);
    t2 = (t0 + 20488);
    *((int *)t2) = 1;
    t3 = (t0 + 19104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58587, ng0);

LAB5:    xsi_set_current_line(58588, ng0);
    t4 = (t0 + 7888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58590, ng0);

LAB10:    xsi_set_current_line(58591, ng0);
    t2 = (t0 + 12448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t12, 1, t14, 1);
    t16 = (t0 + 12448);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58588, ng0);

LAB9:    xsi_set_current_line(58589, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 12448);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 50LL);
    goto LAB8;

}

static void NetDecl_58594_24(char *t0)
{
    char t5[8];
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 19320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58594, ng0);
    t2 = (t0 + 12448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 21832);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0U);
    t27 = (t0 + 20504);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_58596_25(char *t0)
{
    char t13[8];
    char t14[8];
    char t23[8];
    char t24[8];
    char t43[8];
    char t44[8];
    char t64[8];
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
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;

LAB0:    t1 = (t0 + 19568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58596, ng0);
    t2 = (t0 + 20520);
    *((int *)t2) = 1;
    t3 = (t0 + 19600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58597, ng0);

LAB5:    xsi_set_current_line(58598, ng0);
    t4 = (t0 + 8048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58602, ng0);

LAB10:    xsi_set_current_line(58603, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t0 + 12128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 3U);
    xsi_vlogtype_concat(t13, 3, 3, 2U, t14, 2, t3, 1);
    t16 = (t0 + 12128);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(58604, ng0);
    t2 = (t0 + 10288U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t15 || t17);
    if (t18 > 0)
        goto LAB15;

LAB16:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t14) > 0)
        goto LAB21;

LAB22:    memcpy(t13, t23, 8);

LAB23:    t65 = (t0 + 12288);
    xsi_vlogvar_wait_assign_value(t65, t13, 0, 0, 11, 0LL);
    xsi_set_current_line(58606, ng0);
    t2 = (t0 + 10128U);
    t3 = *((char **)t2);
    t2 = (t0 + 10688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58598, ng0);

LAB9:    xsi_set_current_line(58599, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 12128);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(58600, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(58601, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = ((char*)((ng2)));
    goto LAB16;

LAB17:    t12 = (t0 + 9808U);
    t16 = *((char **)t12);
    memset(t24, 0, 8);
    t12 = (t16 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB27:    t31 = (t24 + 4);
    t32 = *((unsigned int *)t24);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB28;

LAB29:    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t31) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t24) > 0)
        goto LAB34;

LAB35:    memcpy(t23, t64, 8);

LAB36:    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t13, 11, t11, 11, t23, 11);
    goto LAB23;

LAB21:    memcpy(t13, t11, 8);
    goto LAB23;

LAB24:    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB26:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB27;

LAB28:    t35 = (t0 + 4368U);
    t36 = *((char **)t35);
    goto LAB29;

LAB30:    t35 = (t0 + 12288);
    t41 = (t35 + 56U);
    t42 = *((char **)t41);
    t45 = (t0 + 9968U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t46 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t46);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t45) == 0)
        goto LAB37;

LAB39:    t52 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t52) = 1;

LAB40:    t53 = (t44 + 4);
    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = (~(t55));
    *((unsigned int *)t44) = t56;
    *((unsigned int *)t53) = 0;
    if (*((unsigned int *)t54) != 0)
        goto LAB42;

LAB41:    t61 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t61 & 1U);
    t62 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t62 & 1U);
    t63 = ((char*)((ng2)));
    xsi_vlogtype_concat(t43, 11, 11, 2U, t63, 10, t44, 1);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 11, t42, 11, t43, 11);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t23, 11, t36, 11, t64, 11);
    goto LAB36;

LAB34:    memcpy(t23, t36, 8);
    goto LAB36;

LAB37:    *((unsigned int *)t44) = 1;
    goto LAB40;

LAB42:    t57 = *((unsigned int *)t44);
    t58 = *((unsigned int *)t54);
    *((unsigned int *)t44) = (t57 | t58);
    t59 = *((unsigned int *)t53);
    t60 = *((unsigned int *)t54);
    *((unsigned int *)t53) = (t59 | t60);
    goto LAB41;

}

static void NetDecl_58610_26(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 19816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58305, ng0);
    t2 = (t0 + 9968U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t34, 8);

LAB22:    t40 = (t0 + 21896);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 7U;
    t46 = t45;
    t47 = (t3 + 4);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 2U);
    t53 = (t0 + 20536);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 4528U);
    t35 = *((char **)t34);
    goto LAB15;

LAB16:    t34 = ((char*)((ng2)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 3, t35, 3, t34, 3);
    goto LAB22;

LAB20:    memcpy(t3, t35, 8);
    goto LAB22;

}


extern void secureip_m_00000000002792256265_1089642773_init()
{
	static char *pe[] = {(void *)NetDecl_58340_0,(void *)Always_58344_1,(void *)NetDecl_58357_2,(void *)NetDecl_58358_3,(void *)NetDecl_58360_4,(void *)NetDecl_58367_5,(void *)Always_58376_6,(void *)Cont_58385_7,(void *)Always_58396_8,(void *)NetDecl_58409_9,(void *)NetDecl_58410_10,(void *)NetDecl_58423_11,(void *)NetDecl_58424_12,(void *)NetDecl_58425_13,(void *)NetDecl_58426_14,(void *)Always_58444_15,(void *)NetDecl_58532_16,(void *)Cont_58550_17,(void *)NetDecl_58556_18,(void *)Cont_58561_19,(void *)NetDecl_58578_20,(void *)NetDecl_58580_21,(void *)NetDecl_58581_22,(void *)Always_58587_23,(void *)NetDecl_58594_24,(void *)Always_58596_25,(void *)NetDecl_58610_26};
	xsi_register_didat("secureip_m_00000000002792256265_1089642773", "isim/top_test_bench.exe.sim/secureip/m_00000000002792256265_1089642773.didat");
	xsi_register_executes(pe);
}
