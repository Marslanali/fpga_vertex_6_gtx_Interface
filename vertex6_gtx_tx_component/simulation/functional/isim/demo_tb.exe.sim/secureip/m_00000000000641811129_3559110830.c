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
static unsigned int ng1[] = {32U, 31U};
static unsigned int ng2[] = {2U, 1U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {1431655765U, 0U, 1431655765U, 0U, 21845U, 0U};
static int ng6[] = {19, 0};
static int ng7[] = {0, 0};
static int ng8[] = {39, 0};
static int ng9[] = {20, 0};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {59, 0};
static int ng12[] = {40, 0};
static unsigned int ng13[] = {2U, 0U};
static int ng14[] = {79, 0};
static int ng15[] = {60, 0};
static unsigned int ng16[] = {15U, 0U};
static int ng17[] = {4, 0};
static int ng18[] = {1, 0};
static int ng19[] = {2, 0};
static int ng20[] = {3, 0};
static int ng21[] = {5, 0};
static unsigned int ng22[] = {4U, 1U};
static unsigned int ng23[] = {6U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {31775U, 0U};



static void Cont_56355_0(char *t0)
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

LAB0:    t1 = (t0 + 9888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56355, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3608U);
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
LAB6:    t32 = (t0 + 15272);
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
    xsi_driver_vfirst_trans_delayed(t32, 0, 0, 50LL, 0);
    t45 = (t0 + 14920);
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

static void Cont_56356_1(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
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
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 10136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56356, ng0);
    t2 = (t0 + 4408U);
    t4 = *((char **)t2);
    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 15336);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans_delayed(t54, 0, 0, 50LL, 0);
    t67 = (t0 + 14936);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void NetDecl_56366_2(char *t0)
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

LAB0:    t1 = (t0 + 10384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56366, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 15400);
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
    t16 = (t0 + 14952);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_56367_3(char *t0)
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

LAB0:    t1 = (t0 + 10632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56367, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 15464);
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
    t16 = (t0 + 14968);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_56371_4(char *t0)
{
    char t4[8];
    char t13[8];
    char t14[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 10880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56371, ng0);
    t2 = (t0 + 14984);
    *((int *)t2) = 1;
    t3 = (t0 + 10912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56371, ng0);

LAB5:    xsi_set_current_line(56372, ng0);
    t5 = (t0 + 2808U);
    t6 = *((char **)t5);
    t5 = (t0 + 3288U);
    t7 = *((char **)t5);
    t5 = (t0 + 2968U);
    t8 = *((char **)t5);
    t5 = (t0 + 3128U);
    t9 = *((char **)t5);
    xsi_vlogtype_concat(t4, 6, 6, 4U, t9, 1, t8, 3, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_zcompare(t4, 6, t5, 6);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(56381, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 50LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(56376, ng0);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 20, 50LL);
    goto LAB17;

LAB9:    xsi_set_current_line(56377, ng0);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 0);
    *((unsigned int *)t3) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 255U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 255U);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 2008U);
    t9 = *((char **)t8);
    memset(t21, 0, 8);
    t8 = (t21 + 4);
    t11 = (t9 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 8);
    *((unsigned int *)t21) = t23;
    t24 = *((unsigned int *)t11);
    t25 = (t24 >> 8);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t26 & 255U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 255U);
    t12 = ((char*)((ng3)));
    xsi_vlogtype_concat(t13, 20, 20, 4U, t12, 2, t21, 8, t7, 2, t14, 8);
    t28 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 20, 50LL);
    goto LAB17;

LAB11:    xsi_set_current_line(56379, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 20, 50LL);
    goto LAB17;

LAB13:    xsi_set_current_line(56380, ng0);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    t3 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 20, 50LL);
    goto LAB17;

}

static void NetDecl_56385_5(char *t0)
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

LAB0:    t1 = (t0 + 11128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56385, ng0);
    t2 = (t0 + 2808U);
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

LAB16:    t16 = (t0 + 15528);
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
    t35 = (t0 + 15000);
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

LAB10:    t16 = (t0 + 2648U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_56401_6(char *t0)
{
    char t6[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
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
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;

LAB0:    t1 = (t0 + 11376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56401, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t6);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t6 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t65 = (t0 + 15592);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t69, 0, 8);
    t70 = 1U;
    t71 = t70;
    t72 = (t37 + 4);
    t73 = *((unsigned int *)t37);
    t70 = (t70 & t73);
    t74 = *((unsigned int *)t72);
    t71 = (t71 & t74);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 | t70);
    t77 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t77 | t71);
    xsi_driver_vfirst_trans_delayed(t65, 0, 0, 50LL, 0);
    t78 = (t0 + 15016);
    *((int *)t78) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t6 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t3);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t6);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB9;

}

static void Cont_56421_7(char *t0)
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

LAB0:    t1 = (t0 + 11624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56421, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15656);
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 19, 100LL, 0);
    t18 = (t0 + 15032);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_56422_8(char *t0)
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

LAB0:    t1 = (t0 + 11872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56422, ng0);
    t2 = (t0 + 6968U);
    t3 = *((char **)t2);
    t2 = (t0 + 15720);
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
    xsi_driver_vfirst_trans_delayed(t2, 0, 0, 100LL, 0);
    t16 = (t0 + 15048);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_56465_9(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
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
    int t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 12120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56465, ng0);
    t2 = (t0 + 15064);
    *((int *)t2) = 1;
    t3 = (t0 + 12152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56465, ng0);

LAB5:    xsi_set_current_line(56466, ng0);
    t5 = (t0 + 5528U);
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

LAB11:    xsi_set_current_line(56468, ng0);
    t2 = (t0 + 6328U);
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

LAB10:    xsi_set_current_line(56466, ng0);

LAB13:    xsi_set_current_line(56467, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 80, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(56468, ng0);

LAB17:    xsi_set_current_line(56469, ng0);
    t5 = (t0 + 6168U);
    t6 = *((char **)t5);

LAB18:    t5 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(56476, ng0);

LAB38:
LAB29:    goto LAB16;

LAB19:    xsi_set_current_line(56471, ng0);
    t12 = (t0 + 4728U);
    t13 = *((char **)t12);
    t12 = (t0 + 8168);
    t19 = (t0 + 8168);
    t20 = (t19 + 72U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng6)));
    t26 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t4 + 4);
    t14 = *((unsigned int *)t27);
    t28 = (!(t14));
    t29 = (t22 + 4);
    t15 = *((unsigned int *)t29);
    t30 = (!(t15));
    t31 = (t28 && t30);
    t32 = (t23 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB21:    xsi_set_current_line(56472, ng0);
    t3 = (t0 + 4728U);
    t5 = *((char **)t3);
    t3 = (t0 + 8168);
    t12 = (t0 + 8168);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng8)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB32;

LAB33:    goto LAB29;

LAB23:    xsi_set_current_line(56473, ng0);
    t3 = (t0 + 4728U);
    t5 = *((char **)t3);
    t3 = (t0 + 8168);
    t12 = (t0 + 8168);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng11)));
    t24 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB34;

LAB35:    goto LAB29;

LAB25:    xsi_set_current_line(56474, ng0);
    t3 = (t0 + 4728U);
    t5 = *((char **)t3);
    t3 = (t0 + 8168);
    t12 = (t0 + 8168);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng14)));
    t24 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB36;

LAB37:    goto LAB29;

LAB30:    t17 = *((unsigned int *)t23);
    t35 = (t17 + 0);
    t18 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t22);
    t37 = (t18 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB31;

LAB32:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB33;

LAB34:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB35;

LAB36:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB37;

}

static void Always_56481_10(char *t0)
{
    char t4[8];
    char t21[8];
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
    int t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t1 = (t0 + 12368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56481, ng0);
    t2 = (t0 + 15080);
    *((int *)t2) = 1;
    t3 = (t0 + 12400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56481, ng0);

LAB5:    xsi_set_current_line(56482, ng0);
    t5 = (t0 + 4248U);
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

LAB11:    xsi_set_current_line(56484, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(56486, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56482, ng0);

LAB13:    xsi_set_current_line(56483, ng0);
    t19 = ((char*)((ng16)));
    t20 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 50LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(56484, ng0);

LAB21:    xsi_set_current_line(56485, ng0);
    t12 = ((char*)((ng17)));
    t13 = (t0 + 4888U);
    t19 = *((char **)t13);
    xsi_vlog_mul_concat(t21, 4, 1, t12, 1U, t19, 1);
    t13 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t13, t21, 0, 0, 4, 50LL);
    goto LAB20;

LAB22:    xsi_set_current_line(56486, ng0);

LAB25:    xsi_set_current_line(56487, ng0);
    t5 = (t0 + 6168U);
    t6 = *((char **)t5);

LAB26:    t5 = ((char*)((ng3)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t22 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t22 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t22 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng13)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t22 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(56494, ng0);

LAB46:
LAB37:    goto LAB24;

LAB27:    xsi_set_current_line(56489, ng0);
    t12 = (t0 + 4888U);
    t13 = *((char **)t12);
    t12 = (t0 + 8328);
    t19 = (t0 + 8328);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t4, t23, 2, t24, 32, 1);
    t25 = (t4 + 4);
    t14 = *((unsigned int *)t25);
    t26 = (!(t14));
    if (t26 == 1)
        goto LAB38;

LAB39:    goto LAB37;

LAB29:    xsi_set_current_line(56490, ng0);
    t3 = (t0 + 4888U);
    t5 = *((char **)t3);
    t3 = (t0 + 8328);
    t12 = (t0 + 8328);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t26 = (!(t7));
    if (t26 == 1)
        goto LAB40;

LAB41:    goto LAB37;

LAB31:    xsi_set_current_line(56491, ng0);
    t3 = (t0 + 4888U);
    t5 = *((char **)t3);
    t3 = (t0 + 8328);
    t12 = (t0 + 8328);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t26 = (!(t7));
    if (t26 == 1)
        goto LAB42;

LAB43:    goto LAB37;

LAB33:    xsi_set_current_line(56492, ng0);
    t3 = (t0 + 4888U);
    t5 = *((char **)t3);
    t3 = (t0 + 8328);
    t12 = (t0 + 8328);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng20)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t26 = (!(t7));
    if (t26 == 1)
        goto LAB44;

LAB45:    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t3, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t3, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB45;

}

static void Always_56505_11(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
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
    char *t26;

LAB0:    t1 = (t0 + 12616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56505, ng0);
    t2 = (t0 + 15096);
    *((int *)t2) = 1;
    t3 = (t0 + 12648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56505, ng0);

LAB5:    xsi_set_current_line(56506, ng0);
    t4 = (t0 + 5848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(56513, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 20, 50LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(56508, ng0);
    t8 = (t0 + 8168);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1048575U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 1048575U);
    t19 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 20, 50LL);
    goto LAB17;

LAB9:    xsi_set_current_line(56509, ng0);
    t3 = (t0 + 8168);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 20);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 20);
    *((unsigned int *)t9) = t16;
    t11 = (t8 + 8);
    t12 = (t8 + 12);
    t17 = *((unsigned int *)t11);
    t18 = (t17 << 12);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 | t18);
    t21 = *((unsigned int *)t12);
    t22 = (t21 << 12);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 | t22);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1048575U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1048575U);
    t19 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 20, 50LL);
    goto LAB17;

LAB11:    xsi_set_current_line(56510, ng0);
    t3 = (t0 + 8168);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 8);
    t11 = (t8 + 12);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 8);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1048575U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 1048575U);
    t12 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 20, 50LL);
    goto LAB17;

LAB13:    xsi_set_current_line(56511, ng0);
    t3 = (t0 + 8168);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 8);
    t11 = (t8 + 12);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 28);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 28);
    *((unsigned int *)t9) = t16;
    t12 = (t8 + 16);
    t19 = (t8 + 20);
    t17 = *((unsigned int *)t12);
    t18 = (t17 << 4);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 | t18);
    t21 = *((unsigned int *)t19);
    t22 = (t21 << 4);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 | t22);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1048575U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1048575U);
    t26 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t26, t7, 0, 0, 20, 50LL);
    goto LAB17;

}

static void Always_56517_12(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 12864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56517, ng0);
    t2 = (t0 + 15112);
    *((int *)t2) = 1;
    t3 = (t0 + 12896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56517, ng0);

LAB5:    xsi_set_current_line(56518, ng0);
    t4 = (t0 + 5848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(56525, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(56520, ng0);
    t7 = (t0 + 8328);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    t19 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 1, 50LL);
    goto LAB17;

LAB9:    xsi_set_current_line(56521, ng0);
    t3 = (t0 + 8328);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB17;

LAB11:    xsi_set_current_line(56522, ng0);
    t3 = (t0 + 8328);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB17;

LAB13:    xsi_set_current_line(56523, ng0);
    t3 = (t0 + 8328);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB17;

}

static void Always_56529_13(char *t0)
{
    char t4[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t40[8];
    char t45[8];
    char t48[8];
    char t53[8];
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
    char *t31;
    char *t32;
    int t33;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 13112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56529, ng0);
    t2 = (t0 + 15128);
    *((int *)t2) = 1;
    t3 = (t0 + 13144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56529, ng0);

LAB5:    xsi_set_current_line(56530, ng0);
    t5 = (t0 + 3608U);
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

LAB13:    xsi_set_current_line(56532, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng22)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng23)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng24)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(56572, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 20, 50LL);

LAB33:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(56530, ng0);

LAB15:    xsi_set_current_line(56531, ng0);
    t29 = (t0 + 8648);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 20, 50LL);
    goto LAB14;

LAB17:    xsi_set_current_line(56534, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 0);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 2);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 2);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 3);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 3);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB19:    xsi_set_current_line(56538, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 4);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 5);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 5);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 6);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 6);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 7);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB21:    xsi_set_current_line(56542, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 8);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 9);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 9);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 10);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 10);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 11);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 11);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB23:    xsi_set_current_line(56546, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 12);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 12);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 13);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 13);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 14);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 14);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 15);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 15);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB25:    xsi_set_current_line(56550, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 16);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 16);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 17);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 17);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 18);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 18);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 19);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 19);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB27:    xsi_set_current_line(56563, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 10);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 10);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 12);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 12);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 13);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 13);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

LAB29:    xsi_set_current_line(56567, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 8648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 14);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 14);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng21)));
    t30 = (t0 + 8648);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    t41 = ((char*)((ng21)));
    t42 = (t0 + 8648);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t22 = *((unsigned int *)t44);
    t24 = (t22 >> 16);
    t25 = (t24 & 1);
    *((unsigned int *)t45) = t25;
    t26 = *((unsigned int *)t47);
    t27 = (t26 >> 16);
    t28 = (t27 & 1);
    *((unsigned int *)t46) = t28;
    xsi_vlog_mul_concat(t40, 5, 1, t41, 1U, t45, 1);
    t49 = ((char*)((ng21)));
    t50 = (t0 + 8648);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 17);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 17);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    xsi_vlog_mul_concat(t48, 5, 1, t49, 1U, t53, 1);
    xsi_vlogtype_concat(t4, 20, 20, 4U, t48, 5, t40, 5, t36, 5, t34, 5);
    t62 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t62, t4, 0, 0, 20, 50LL);
    goto LAB33;

}

static void Cont_56582_14(char *t0)
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

LAB0:    t1 = (t0 + 13360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56582, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15784);
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 19, 100LL, 0);
    t18 = (t0 + 15144);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_56583_15(char *t0)
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

LAB0:    t1 = (t0 + 13608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56583, ng0);
    t2 = (t0 + 6968U);
    t3 = *((char **)t2);
    t2 = (t0 + 15848);
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
    xsi_driver_vfirst_trans_delayed(t2, 0, 0, 100LL, 0);
    t16 = (t0 + 15160);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_56594_16(char *t0)
{
    char t4[8];
    char t21[8];
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
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 13856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56594, ng0);
    t2 = (t0 + 15176);
    *((int *)t2) = 1;
    t3 = (t0 + 13888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56594, ng0);

LAB5:    xsi_set_current_line(56595, ng0);
    t5 = (t0 + 5688U);
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

LAB11:    xsi_set_current_line(56597, ng0);

LAB14:    xsi_set_current_line(56598, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t6);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t6) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t21) > 0)
        goto LAB25;

LAB26:    memcpy(t4, t24, 8);

LAB27:    t20 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 20, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56595, ng0);

LAB13:    xsi_set_current_line(56596, ng0);
    t19 = ((char*)((ng25)));
    t20 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 20, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 8808);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    goto LAB20;

LAB21:    t20 = (t0 + 5048U);
    t24 = *((char **)t20);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 20, t19, 20, t24, 20);
    goto LAB27;

LAB25:    memcpy(t4, t19, 8);
    goto LAB27;

}

static void Always_56608_17(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
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
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 14104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56608, ng0);
    t2 = (t0 + 15192);
    *((int *)t2) = 1;
    t3 = (t0 + 14136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56608, ng0);

LAB5:    xsi_set_current_line(56609, ng0);
    t5 = (t0 + 4248U);
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

LAB11:    xsi_set_current_line(56611, ng0);

LAB14:    xsi_set_current_line(56612, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    t2 = (t0 + 5688U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t22) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t22 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t21, 0, 8);
    t20 = (t22 + 4);
    t39 = *((unsigned int *)t20);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t20) != 0)
        goto LAB20;

LAB21:    t45 = (t21 + 4);
    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB22;

LAB23:    t52 = *((unsigned int *)t21);
    t53 = (~(t52));
    t54 = *((unsigned int *)t45);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t45) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t21) > 0)
        goto LAB28;

LAB29:    memcpy(t4, t57, 8);

LAB30:    t56 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t56, t4, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56609, ng0);

LAB13:    xsi_set_current_line(56610, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t22) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t36 & t34);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t37 & t33);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t34);
    goto LAB17;

LAB18:    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB20:    t44 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB21;

LAB22:    t49 = (t0 + 8968);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    goto LAB23;

LAB24:    t56 = (t0 + 5208U);
    t57 = *((char **)t56);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t4, 1, t51, 1, t57, 1);
    goto LAB30;

LAB28:    memcpy(t4, t51, 8);
    goto LAB30;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 14352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 15912);
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

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 14600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 15976);
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


extern void secureip_m_00000000000641811129_3559110830_init()
{
	static char *pe[] = {(void *)Cont_56355_0,(void *)Cont_56356_1,(void *)NetDecl_56366_2,(void *)NetDecl_56367_3,(void *)Always_56371_4,(void *)NetDecl_56385_5,(void *)Cont_56401_6,(void *)Cont_56421_7,(void *)Cont_56422_8,(void *)Always_56465_9,(void *)Always_56481_10,(void *)Always_56505_11,(void *)Always_56517_12,(void *)Always_56529_13,(void *)Cont_56582_14,(void *)Cont_56583_15,(void *)Always_56594_16,(void *)Always_56608_17,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("secureip_m_00000000000641811129_3559110830", "isim/demo_tb.exe.sim/secureip/m_00000000000641811129_3559110830.didat");
	xsi_register_executes(pe);
}
