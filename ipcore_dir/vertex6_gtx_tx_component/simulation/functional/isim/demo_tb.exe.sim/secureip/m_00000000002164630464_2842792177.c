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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {256682U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {699050U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {1047552U, 0U};
static unsigned int ng11[] = {1044480U, 0U};



static void NetDecl_55534_0(char *t0)
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

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55534, ng0);
    t2 = (t0 + 2008U);
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
    t21 = (t0 + 11032);
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
    t34 = (t0 + 10728);
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

static void NetDecl_55542_1(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55542, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 11096);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 10744);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_55543_2(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55543, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 11160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 10760);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_55544_3(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55544, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 11224);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 10776);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_55545_4(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55545, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 11288);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 10792);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_55577_5(char *t0)
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

LAB0:    t1 = (t0 + 7928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55577, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 11352);
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

static void Always_55583_6(char *t0)
{
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

LAB0:    t1 = (t0 + 8176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55583, ng0);
    t2 = (t0 + 10808);
    *((int *)t2) = 1;
    t3 = (t0 + 8208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55583, ng0);

LAB5:    xsi_set_current_line(55584, ng0);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55586, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(55588, ng0);

LAB14:    xsi_set_current_line(55589, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55584, ng0);

LAB9:    xsi_set_current_line(55585, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 50LL);
    goto LAB8;

LAB10:    xsi_set_current_line(55586, ng0);

LAB13:    xsi_set_current_line(55587, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 50LL);
    goto LAB12;

}

static void Cont_55593_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t24[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 8424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55593, ng0);
    t2 = (t0 + 5288);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t35 = (t0 + 11416);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 1048575U;
    t41 = t40;
    t42 = (t3 + 4);
    t43 = *((unsigned int *)t3);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans_delayed(t35, 0, 19, 50LL, 0);
    t48 = (t0 + 10824);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4248U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 4248U);
    t25 = *((char **)t18);
    memset(t24, 0, 8);
    t18 = (t24 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    *((unsigned int *)t24) = t28;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB18;

LAB17:    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1048575U);
    t34 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t34 & 1048575U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 20, t19, 20, t24, 20);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

LAB18:    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t24) = (t29 | t30);
    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t18) = (t31 | t32);
    goto LAB17;

}

static void Always_55598_8(char *t0)
{
    char t14[8];
    char t15[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55598, ng0);
    t2 = (t0 + 10840);
    *((int *)t2) = 1;
    t3 = (t0 + 8704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55598, ng0);

LAB5:    xsi_set_current_line(55599, ng0);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55601, ng0);

LAB10:    xsi_set_current_line(55602, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(55609, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t11 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t11);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB31;

LAB32:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t11) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t15) > 0)
        goto LAB37;

LAB38:    memcpy(t14, t23, 8);

LAB39:    t24 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 20, 50LL);

LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55599, ng0);

LAB9:    xsi_set_current_line(55600, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 20, 50LL);
    goto LAB8;

LAB12:    xsi_set_current_line(55603, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 50LL);
    goto LAB26;

LAB14:    xsi_set_current_line(55604, ng0);
    t4 = (t0 + 2968U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 50LL);
    goto LAB26;

LAB16:    xsi_set_current_line(55605, ng0);
    t4 = (t0 + 3128U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 50LL);
    goto LAB26;

LAB18:    xsi_set_current_line(55606, ng0);
    t4 = (t0 + 3288U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 50LL);
    goto LAB26;

LAB20:    xsi_set_current_line(55607, ng0);
    t4 = (t0 + 3448U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 50LL);
    goto LAB26;

LAB22:    xsi_set_current_line(55608, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 20, 50LL);
    goto LAB26;

LAB27:    *((unsigned int *)t15) = 1;
    goto LAB30;

LAB29:    t5 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB30;

LAB31:    t12 = ((char*)((ng10)));
    goto LAB32;

LAB33:    t23 = ((char*)((ng11)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t14, 20, t12, 20, t23, 20);
    goto LAB39;

LAB37:    memcpy(t14, t12, 8);
    goto LAB39;

}

static void NetDecl_55626_9(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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

LAB0:    t1 = (t0 + 8920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55626, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 11480);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0U, 50LL, 0);
    t35 = (t0 + 10856);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2488U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1848U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Always_55632_10(char *t0)
{
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

LAB0:    t1 = (t0 + 9168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55632, ng0);
    t2 = (t0 + 10872);
    *((int *)t2) = 1;
    t3 = (t0 + 9200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55632, ng0);

LAB5:    xsi_set_current_line(55633, ng0);
    t4 = (t0 + 4408U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55635, ng0);

LAB10:    xsi_set_current_line(55636, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55633, ng0);

LAB9:    xsi_set_current_line(55634, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 50LL);
    goto LAB8;

}

static void Always_55664_11(char *t0)
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
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 9416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55664, ng0);
    t2 = (t0 + 10888);
    *((int *)t2) = 1;
    t3 = (t0 + 9448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55664, ng0);

LAB5:    xsi_set_current_line(55665, ng0);
    t4 = (t0 + 2648U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55667, ng0);

LAB10:    xsi_set_current_line(55668, ng0);
    t2 = (t0 + 5768);
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
    t12 = (t0 + 5608);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t17, 1, t14, 1);
    t18 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 2, 50LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55665, ng0);

LAB9:    xsi_set_current_line(55666, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 50LL);
    goto LAB8;

}

static void NetDecl_55673_12(char *t0)
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

LAB0:    t1 = (t0 + 9664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55673, ng0);
    t2 = (t0 + 5768);
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
    t14 = (t0 + 11544);
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
    xsi_driver_vfirst_trans_delayed(t14, 0, 0U, 50LL, 0);
    t27 = (t0 + 10904);
    *((int *)t27) = 1;

LAB1:    return;
}

static void NetDecl_55675_13(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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

LAB0:    t1 = (t0 + 9912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55675, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 11608);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0U, 50LL, 0);
    t35 = (t0 + 10920);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4568U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1688U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void NetDecl_55689_14(char *t0)
{
    char t3[8];
    char t6[8];
    char t18[8];
    char t30[8];
    char t42[8];
    char t54[8];
    char t66[8];
    char t77[8];
    char t93[8];
    char t105[8];
    char t117[8];
    char t129[8];
    char t141[8];
    char t153[8];
    char t165[8];
    char t177[8];
    char t189[8];
    char t201[8];
    char t213[8];
    char t225[8];
    char t237[8];
    char t249[8];
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
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
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
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;
    char *t188;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    char *t200;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t224;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    char *t236;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    char *t247;
    char *t248;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    char *t260;
    char *t261;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;

LAB0:    t1 = (t0 + 10160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55689, ng0);
    t2 = (t0 + 5448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 19);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 19);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t0 + 5448);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 18);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 18);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    t27 = (t0 + 5448);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 17);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 17);
    t38 = (t37 & 1);
    *((unsigned int *)t31) = t38;
    t39 = (t0 + 5448);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 16);
    t47 = (t46 & 1);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 16);
    t50 = (t49 & 1);
    *((unsigned int *)t43) = t50;
    t51 = (t0 + 5448);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t55 = (t54 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 15);
    t59 = (t58 & 1);
    *((unsigned int *)t54) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 15);
    t62 = (t61 & 1);
    *((unsigned int *)t55) = t62;
    t63 = (t0 + 5448);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 14);
    t71 = (t70 & 1);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 14);
    t74 = (t73 & 1);
    *((unsigned int *)t67) = t74;
    t75 = (t0 + 4728U);
    t76 = *((char **)t75);
    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t76);
    t80 = (t78 ^ t79);
    *((unsigned int *)t77) = t80;
    t75 = (t66 + 4);
    t81 = (t76 + 4);
    t82 = (t77 + 4);
    t83 = *((unsigned int *)t75);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB4;

LAB5:
LAB6:    t90 = (t0 + 5448);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memset(t93, 0, 8);
    t94 = (t93 + 4);
    t95 = (t92 + 4);
    t96 = *((unsigned int *)t92);
    t97 = (t96 >> 13);
    t98 = (t97 & 1);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 >> 13);
    t101 = (t100 & 1);
    *((unsigned int *)t94) = t101;
    t102 = (t0 + 5448);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t104);
    t109 = (t108 >> 12);
    t110 = (t109 & 1);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 12);
    t113 = (t112 & 1);
    *((unsigned int *)t106) = t113;
    t114 = (t0 + 5448);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    memset(t117, 0, 8);
    t118 = (t117 + 4);
    t119 = (t116 + 4);
    t120 = *((unsigned int *)t116);
    t121 = (t120 >> 11);
    t122 = (t121 & 1);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 >> 11);
    t125 = (t124 & 1);
    *((unsigned int *)t118) = t125;
    t126 = (t0 + 5448);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t131 = (t128 + 4);
    t132 = *((unsigned int *)t128);
    t133 = (t132 >> 10);
    t134 = (t133 & 1);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t131);
    t136 = (t135 >> 10);
    t137 = (t136 & 1);
    *((unsigned int *)t130) = t137;
    t138 = (t0 + 5448);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    memset(t141, 0, 8);
    t142 = (t141 + 4);
    t143 = (t140 + 4);
    t144 = *((unsigned int *)t140);
    t145 = (t144 >> 9);
    t146 = (t145 & 1);
    *((unsigned int *)t141) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 >> 9);
    t149 = (t148 & 1);
    *((unsigned int *)t142) = t149;
    t150 = (t0 + 5448);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    memset(t153, 0, 8);
    t154 = (t153 + 4);
    t155 = (t152 + 4);
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 8);
    t158 = (t157 & 1);
    *((unsigned int *)t153) = t158;
    t159 = *((unsigned int *)t155);
    t160 = (t159 >> 8);
    t161 = (t160 & 1);
    *((unsigned int *)t154) = t161;
    t162 = (t0 + 5448);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    memset(t165, 0, 8);
    t166 = (t165 + 4);
    t167 = (t164 + 4);
    t168 = *((unsigned int *)t164);
    t169 = (t168 >> 7);
    t170 = (t169 & 1);
    *((unsigned int *)t165) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 >> 7);
    t173 = (t172 & 1);
    *((unsigned int *)t166) = t173;
    t174 = (t0 + 5448);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    memset(t177, 0, 8);
    t178 = (t177 + 4);
    t179 = (t176 + 4);
    t180 = *((unsigned int *)t176);
    t181 = (t180 >> 6);
    t182 = (t181 & 1);
    *((unsigned int *)t177) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 >> 6);
    t185 = (t184 & 1);
    *((unsigned int *)t178) = t185;
    t186 = (t0 + 5448);
    t187 = (t186 + 56U);
    t188 = *((char **)t187);
    memset(t189, 0, 8);
    t190 = (t189 + 4);
    t191 = (t188 + 4);
    t192 = *((unsigned int *)t188);
    t193 = (t192 >> 5);
    t194 = (t193 & 1);
    *((unsigned int *)t189) = t194;
    t195 = *((unsigned int *)t191);
    t196 = (t195 >> 5);
    t197 = (t196 & 1);
    *((unsigned int *)t190) = t197;
    t198 = (t0 + 5448);
    t199 = (t198 + 56U);
    t200 = *((char **)t199);
    memset(t201, 0, 8);
    t202 = (t201 + 4);
    t203 = (t200 + 4);
    t204 = *((unsigned int *)t200);
    t205 = (t204 >> 4);
    t206 = (t205 & 1);
    *((unsigned int *)t201) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 >> 4);
    t209 = (t208 & 1);
    *((unsigned int *)t202) = t209;
    t210 = (t0 + 5448);
    t211 = (t210 + 56U);
    t212 = *((char **)t211);
    memset(t213, 0, 8);
    t214 = (t213 + 4);
    t215 = (t212 + 4);
    t216 = *((unsigned int *)t212);
    t217 = (t216 >> 3);
    t218 = (t217 & 1);
    *((unsigned int *)t213) = t218;
    t219 = *((unsigned int *)t215);
    t220 = (t219 >> 3);
    t221 = (t220 & 1);
    *((unsigned int *)t214) = t221;
    t222 = (t0 + 5448);
    t223 = (t222 + 56U);
    t224 = *((char **)t223);
    memset(t225, 0, 8);
    t226 = (t225 + 4);
    t227 = (t224 + 4);
    t228 = *((unsigned int *)t224);
    t229 = (t228 >> 2);
    t230 = (t229 & 1);
    *((unsigned int *)t225) = t230;
    t231 = *((unsigned int *)t227);
    t232 = (t231 >> 2);
    t233 = (t232 & 1);
    *((unsigned int *)t226) = t233;
    t234 = (t0 + 5448);
    t235 = (t234 + 56U);
    t236 = *((char **)t235);
    memset(t237, 0, 8);
    t238 = (t237 + 4);
    t239 = (t236 + 4);
    t240 = *((unsigned int *)t236);
    t241 = (t240 >> 1);
    t242 = (t241 & 1);
    *((unsigned int *)t237) = t242;
    t243 = *((unsigned int *)t239);
    t244 = (t243 >> 1);
    t245 = (t244 & 1);
    *((unsigned int *)t238) = t245;
    t246 = (t0 + 5448);
    t247 = (t246 + 56U);
    t248 = *((char **)t247);
    memset(t249, 0, 8);
    t250 = (t249 + 4);
    t251 = (t248 + 4);
    t252 = *((unsigned int *)t248);
    t253 = (t252 >> 0);
    t254 = (t253 & 1);
    *((unsigned int *)t249) = t254;
    t255 = *((unsigned int *)t251);
    t256 = (t255 >> 0);
    t257 = (t256 & 1);
    *((unsigned int *)t250) = t257;
    xsi_vlogtype_concat(t3, 20, 20, 20U, t249, 1, t237, 1, t225, 1, t213, 1, t201, 1, t189, 1, t177, 1, t165, 1, t153, 1, t141, 1, t129, 1, t117, 1, t105, 1, t93, 1, t77, 1, t54, 1, t42, 1, t30, 1, t18, 1, t6, 1);
    t258 = (t0 + 11672);
    t259 = (t258 + 56U);
    t260 = *((char **)t259);
    t261 = (t260 + 56U);
    t262 = *((char **)t261);
    memset(t262, 0, 8);
    t263 = 1048575U;
    t264 = t263;
    t265 = (t3 + 4);
    t266 = *((unsigned int *)t3);
    t263 = (t263 & t266);
    t267 = *((unsigned int *)t265);
    t264 = (t264 & t267);
    t268 = (t262 + 4);
    t269 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t269 | t263);
    t270 = *((unsigned int *)t268);
    *((unsigned int *)t268) = (t270 | t264);
    xsi_driver_vfirst_trans(t258, 0, 19U);
    t271 = (t0 + 10936);
    *((int *)t271) = 1;

LAB1:    return;
LAB4:    t88 = *((unsigned int *)t77);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t77) = (t88 | t89);
    goto LAB6;

}

static void Cont_55714_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t14[8];
    char t27[8];
    char t41[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t15;
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t1 = (t0 + 10408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55714, ng0);
    t2 = (t0 + 4888U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 1023U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 1023U);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    memcpy(t13, t41, 8);

LAB16:    t52 = (t0 + 4888U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t51 + 4);
    t54 = (t53 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (t55 >> 18);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 18);
    *((unsigned int *)t52) = t58;
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 3U);
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 3U);
    xsi_vlogtype_concat(t3, 20, 20, 3U, t51, 2, t13, 8, t4, 10);
    t61 = (t0 + 11736);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t65, 0, 8);
    t66 = 1048575U;
    t67 = t66;
    t68 = (t3 + 4);
    t69 = *((unsigned int *)t3);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 | t66);
    t73 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t73 | t67);
    xsi_driver_vfirst_trans_delayed(t61, 0, 19, 50LL, 0);
    t74 = (t0 + 10952);
    *((int *)t74) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB6:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t28 = (t0 + 4888U);
    t29 = *((char **)t28);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t30 = (t29 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (t31 >> 10);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 10);
    *((unsigned int *)t28) = t34;
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 255U);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    goto LAB9;

LAB10:    t42 = (t0 + 4888U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 8);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 8);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 255U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t13, 8, t27, 8, t41, 8);
    goto LAB16;

LAB14:    memcpy(t13, t27, 8);
    goto LAB16;

}


extern void secureip_m_00000000002164630464_2842792177_init()
{
	static char *pe[] = {(void *)NetDecl_55534_0,(void *)NetDecl_55542_1,(void *)NetDecl_55543_2,(void *)NetDecl_55544_3,(void *)NetDecl_55545_4,(void *)NetDecl_55577_5,(void *)Always_55583_6,(void *)Cont_55593_7,(void *)Always_55598_8,(void *)NetDecl_55626_9,(void *)Always_55632_10,(void *)Always_55664_11,(void *)NetDecl_55673_12,(void *)NetDecl_55675_13,(void *)NetDecl_55689_14,(void *)Cont_55714_15};
	xsi_register_didat("secureip_m_00000000002164630464_2842792177", "isim/demo_tb.exe.sim/secureip/m_00000000002164630464_2842792177.didat");
	xsi_register_executes(pe);
}
