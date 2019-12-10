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
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {19, 0};
static int ng5[] = {0, 0};
static int ng6[] = {50, 0};
static int ng7[] = {20, 0};



static void NetDecl_45528_0(char *t0)
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

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45528, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 51);
    xsi_driver_vfirst_trans(t5, 0, 50U);
    t10 = (t0 + 7320);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_45533_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t30[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
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
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45533, ng0);
    t2 = (t0 + 1616U);
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

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t47, 8);

LAB16:    t48 = (t0 + 7592);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1048575U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 19U);
    t61 = (t0 + 7336);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 3616);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t16) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1048575U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 1048575U);
    t28 = (t0 + 2416U);
    t29 = *((char **)t28);
    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t29);
    t33 = (t31 ^ t32);
    *((unsigned int *)t30) = t33;
    t28 = (t16 + 4);
    t34 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t47 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 20, t30, 20, t47, 20);
    goto LAB16;

LAB14:    memcpy(t3, t30, 8);
    goto LAB16;

LAB17:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t30) = (t41 | t42);
    goto LAB19;

}

static void NetDecl_45534_2(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t13;
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

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45534, ng0);
    t2 = (t0 + 2576U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 65535U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 7656);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t3 + 4);
    t28 = *((unsigned int *)t3);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 7352);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_45535_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
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
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
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
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45535, ng0);
    t2 = (t0 + 2576U);
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
    *((unsigned int *)t4) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 15U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 2096U);
    t21 = *((char **)t20);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t21);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t20 = (t3 + 4);
    t26 = (t21 + 4);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB8;

LAB9:
LAB10:    t53 = (t0 + 7720);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t22 + 4);
    t61 = *((unsigned int *)t22);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0U);
    t66 = (t0 + 7368);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t22) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t21 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t21);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t51 & t47);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    goto LAB10;

}

static void NetDecl_45536_4(char *t0)
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
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45536, ng0);
    t2 = (t0 + 2736U);
    t3 = *((char **)t2);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
LAB6:    t32 = (t0 + 7784);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0U);
    t45 = (t0 + 7384);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Always_45544_5(char *t0)
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

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45544, ng0);
    t2 = (t0 + 7400);
    *((int *)t2) = 1;
    t3 = (t0 + 6288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45545, ng0);

LAB5:    xsi_set_current_line(45546, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45550, ng0);
    t2 = (t0 + 4096);
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

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45547, ng0);

LAB9:    xsi_set_current_line(45548, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(45551, ng0);

LAB13:    xsi_set_current_line(45552, ng0);
    t11 = (t0 + 3056U);
    t12 = *((char **)t11);
    t11 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_45558_6(char *t0)
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45558, ng0);
    t2 = (t0 + 7416);
    *((int *)t2) = 1;
    t3 = (t0 + 6536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45559, ng0);

LAB5:    xsi_set_current_line(45560, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45566, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(45573, ng0);

LAB18:    xsi_set_current_line(45574, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45575, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45576, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45561, ng0);

LAB9:    xsi_set_current_line(45562, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(45563, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45564, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(45567, ng0);

LAB17:    xsi_set_current_line(45568, ng0);
    t11 = (t0 + 4096);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(45569, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45570, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB16;

}

static void Always_45580_7(char *t0)
{
    char t13[8];
    char t14[8];
    char t18[8];
    char t30[8];
    char t43[8];
    char t44[8];
    char t45[8];
    char t99[8];
    char t100[8];
    char t101[8];
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
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    unsigned int t55;
    int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;

LAB0:    t1 = (t0 + 6752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45580, ng0);
    t2 = (t0 + 7432);
    *((int *)t2) = 1;
    t3 = (t0 + 6784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45580, ng0);

LAB5:    xsi_set_current_line(45581, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45583, ng0);

LAB10:    xsi_set_current_line(45584, ng0);
    t2 = (t0 + 1616U);
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
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB15;

LAB16:    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t14) > 0)
        goto LAB21;

LAB22:    memcpy(t13, t30, 8);

LAB23:    t42 = (t0 + 3616);
    t46 = (t0 + 3616);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng4)));
    t50 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t43, t44, t45, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t44 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t53 && t56);
    t58 = (t45 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(45587, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t2) != 0)
        goto LAB28;

LAB29:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB30;

LAB31:    t76 = *((unsigned int *)t14);
    t77 = (~(t76));
    t78 = *((unsigned int *)t5);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t14) > 0)
        goto LAB36;

LAB37:    memcpy(t13, t45, 8);

LAB38:    t98 = (t0 + 3616);
    t102 = (t0 + 3616);
    t103 = (t102 + 72U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng6)));
    t106 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t99, t100, t101, ((int*)(t104)), 2, t105, 32, 1, t106, 32, 1);
    t107 = (t99 + 4);
    t108 = *((unsigned int *)t107);
    t53 = (!(t108));
    t109 = (t100 + 4);
    t110 = *((unsigned int *)t109);
    t56 = (!(t110));
    t57 = (t53 && t56);
    t111 = (t101 + 4);
    t112 = *((unsigned int *)t111);
    t60 = (!(t112));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB52;

LAB53:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45581, ng0);

LAB9:    xsi_set_current_line(45582, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 51, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 1456U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t19 = (t12 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (t20 >> 0);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t24 & 1048575U);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1048575U);
    goto LAB16;

LAB17:    t31 = (t0 + 3616);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 1048575U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 1048575U);
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t13, 20, t18, 20, t30, 20);
    goto LAB23;

LAB21:    memcpy(t13, t18, 8);
    goto LAB23;

LAB24:    t62 = *((unsigned int *)t45);
    t63 = (t62 + 0);
    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t44);
    t66 = (t64 - t65);
    t67 = (t66 + 1);
    xsi_vlogvar_wait_assign_value(t42, t13, t63, *((unsigned int *)t44), t67, 0LL);
    goto LAB25;

LAB26:    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB28:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    memset(t30, 0, 8);
    t11 = (t12 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t11) != 0)
        goto LAB41;

LAB42:    t31 = (t30 + 4);
    t25 = *((unsigned int *)t30);
    t26 = *((unsigned int *)t31);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB43;

LAB44:    t40 = *((unsigned int *)t30);
    t41 = (~(t40));
    t52 = *((unsigned int *)t31);
    t55 = (t41 || t52);
    if (t55 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t31) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t30) > 0)
        goto LAB49;

LAB50:    memcpy(t18, t44, 8);

LAB51:    goto LAB31;

LAB32:    t58 = (t0 + 3616);
    t80 = (t58 + 56U);
    t81 = *((char **)t80);
    memset(t45, 0, 8);
    t82 = (t45 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 20);
    *((unsigned int *)t45) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 20);
    *((unsigned int *)t82) = t87;
    t88 = (t81 + 8);
    t89 = (t81 + 12);
    t90 = *((unsigned int *)t88);
    t91 = (t90 << 12);
    t92 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t92 | t91);
    t93 = *((unsigned int *)t89);
    t94 = (t93 << 12);
    t95 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t95 | t94);
    t96 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t96 & 2147483647U);
    t97 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t97 & 2147483647U);
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t13, 31, t18, 31, t45, 31);
    goto LAB38;

LAB36:    memcpy(t13, t18, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t30) = 1;
    goto LAB42;

LAB41:    t19 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB42;

LAB43:    t32 = (t0 + 3616);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t43, 0, 8);
    t35 = (t43 + 4);
    t42 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 0);
    *((unsigned int *)t43) = t29;
    t36 = *((unsigned int *)t42);
    t37 = (t36 >> 0);
    *((unsigned int *)t35) = t37;
    t38 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t38 & 2147483647U);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t39 & 2147483647U);
    goto LAB44;

LAB45:    t46 = (t0 + 3616);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t44, 0, 8);
    t49 = (t44 + 4);
    t50 = (t48 + 4);
    t59 = *((unsigned int *)t48);
    t62 = (t59 >> 4);
    *((unsigned int *)t44) = t62;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 4);
    *((unsigned int *)t49) = t65;
    t51 = (t48 + 8);
    t54 = (t48 + 12);
    t68 = *((unsigned int *)t51);
    t69 = (t68 << 28);
    t70 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t70 | t69);
    t71 = *((unsigned int *)t54);
    t72 = (t71 << 28);
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 | t72);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & 2147483647U);
    t75 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t75 & 2147483647U);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t18, 31, t43, 31, t44, 31);
    goto LAB51;

LAB49:    memcpy(t18, t43, 8);
    goto LAB51;

LAB52:    t113 = *((unsigned int *)t101);
    t63 = (t113 + 0);
    t114 = *((unsigned int *)t99);
    t115 = *((unsigned int *)t100);
    t66 = (t114 - t115);
    t67 = (t66 + 1);
    xsi_vlogvar_wait_assign_value(t98, t13, t63, *((unsigned int *)t100), t67, 0LL);
    goto LAB53;

}

static void Cont_45598_8(char *t0)
{
    char t3[8];
    char t20[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
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

LAB0:    t1 = (t0 + 7000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45598, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 31);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    *((unsigned int *)t2) = t9;
    t10 = (t4 + 8);
    t11 = (t4 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 << 1);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 | t13);
    t15 = *((unsigned int *)t11);
    t16 = (t15 << 1);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 | t16);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 1048575U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1048575U);
    t21 = (t0 + 2256U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 28);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 28);
    *((unsigned int *)t21) = t27;
    t28 = (t22 + 8);
    t29 = (t22 + 12);
    t30 = *((unsigned int *)t28);
    t31 = (t30 << 4);
    t32 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t32 | t31);
    t33 = *((unsigned int *)t29);
    t34 = (t33 << 4);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 | t34);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 1048575U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1048575U);
    t39 = *((unsigned int *)t3);
    t40 = *((unsigned int *)t20);
    t41 = (t39 ^ t40);
    *((unsigned int *)t38) = t41;
    t42 = (t3 + 4);
    t43 = (t20 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB4;

LAB5:
LAB6:    t52 = (t0 + 7848);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 1048575U;
    t58 = t57;
    t59 = (t38 + 4);
    t60 = *((unsigned int *)t38);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 19);
    t65 = (t0 + 7448);
    *((int *)t65) = 1;

LAB1:    return;
LAB4:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    goto LAB6;

}


extern void secureip_m_00000000003008788444_3625862120_init()
{
	static char *pe[] = {(void *)NetDecl_45528_0,(void *)NetDecl_45533_1,(void *)NetDecl_45534_2,(void *)NetDecl_45535_3,(void *)NetDecl_45536_4,(void *)Always_45544_5,(void *)Always_45558_6,(void *)Always_45580_7,(void *)Cont_45598_8};
	xsi_register_didat("secureip_m_00000000003008788444_3625862120", "isim/demo_tb.exe.sim/secureip/m_00000000003008788444_3625862120.didat");
	xsi_register_executes(pe);
}
