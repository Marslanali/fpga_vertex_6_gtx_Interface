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
static unsigned int ng1[] = {4096U, 4095U};
static unsigned int ng2[] = {11U, 0U};
static unsigned int ng3[] = {2048U, 1247U};
static unsigned int ng4[] = {10U, 0U};
static unsigned int ng5[] = {0U, 1247U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {2304U, 1247U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {256U, 1247U};
static unsigned int ng10[] = {512U, 3551U};
static unsigned int ng11[] = {1072U, 2831U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {48U, 2831U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {1136U, 2831U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {112U, 2831U};
static unsigned int ng18[] = {176U, 3919U};
static unsigned int ng19[] = {40U, 4039U};
static unsigned int ng20[] = {4U, 0U};
static unsigned int ng21[] = {32U, 4035U};
static unsigned int ng22[] = {3U, 0U};
static unsigned int ng23[] = {2086U, 1217U};
static unsigned int ng24[] = {38U, 1217U};
static unsigned int ng25[] = {2342U, 1217U};
static unsigned int ng26[] = {294U, 1217U};
static unsigned int ng27[] = {550U, 3521U};
static unsigned int ng28[] = {37U, 4032U};
static unsigned int ng29[] = {2U, 0U};
static unsigned int ng30[] = {36U, 4032U};
static unsigned int ng31[] = {1U, 0U};
static unsigned int ng32[] = {0U, 0U};



static void Always_40727_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t23[8];
    char t33[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
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
    char *t54;
    int t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40727, ng0);
    t2 = (t0 + 10360);
    *((int *)t2) = 1;
    t3 = (t0 + 7840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40727, ng0);

LAB5:    xsi_set_current_line(40728, ng0);
    t5 = (t0 + 3288U);
    t6 = *((char **)t5);
    t5 = (t0 + 3448U);
    t7 = *((char **)t5);
    t5 = (t0 + 3928U);
    t8 = *((char **)t5);
    t5 = (t0 + 4088U);
    t9 = *((char **)t5);
    t5 = (t0 + 4248U);
    t10 = *((char **)t5);
    t5 = (t0 + 4408U);
    t11 = *((char **)t5);
    t5 = (t0 + 2008U);
    t12 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t5) = t20;
    t21 = (t0 + 2008U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    t31 = (t0 + 1848U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t33 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t31) = t40;
    t41 = (t0 + 1848U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    t41 = (t43 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 1);
    t50 = (t49 & 1);
    *((unsigned int *)t41) = t50;
    t51 = (t0 + 3768U);
    t52 = *((char **)t51);
    t51 = (t0 + 3608U);
    t53 = *((char **)t51);
    t51 = (t0 + 4568U);
    t54 = *((char **)t51);
    xsi_vlogtype_concat(t4, 13, 13, 13U, t54, 1, t53, 1, t52, 1, t43, 1, t33, 1, t23, 1, t13, 1, t11, 1, t10, 1, t9, 1, t8, 1, t7, 1, t6, 1);

LAB6:    t51 = ((char*)((ng1)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t51, 13);
    if (t55 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng18)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng19)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng23)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng24)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng25)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng26)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng27)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng28)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng30)));
    t55 = xsi_vlog_unsigned_case_zcompare(t4, 13, t2, 13);
    if (t55 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(40762, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 50LL);

LAB49:    goto LAB2;

LAB7:    xsi_set_current_line(40741, ng0);
    t56 = ((char*)((ng2)));
    t57 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 4, 50LL);
    goto LAB49;

LAB9:    xsi_set_current_line(40742, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB11:    xsi_set_current_line(40743, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB13:    xsi_set_current_line(40744, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB15:    xsi_set_current_line(40745, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB17:    xsi_set_current_line(40746, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB19:    xsi_set_current_line(40747, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB21:    xsi_set_current_line(40748, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB23:    xsi_set_current_line(40749, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB25:    xsi_set_current_line(40750, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB27:    xsi_set_current_line(40751, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB29:    xsi_set_current_line(40752, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB31:    xsi_set_current_line(40753, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB33:    xsi_set_current_line(40754, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB35:    xsi_set_current_line(40755, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB37:    xsi_set_current_line(40756, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB39:    xsi_set_current_line(40757, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB41:    xsi_set_current_line(40758, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB43:    xsi_set_current_line(40759, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

LAB45:    xsi_set_current_line(40760, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 50LL);
    goto LAB49;

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

LAB0:    t1 = (t0 + 8056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng32)));
    t3 = (t0 + 10440);
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

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 10504);
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

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng32)));
    t3 = (t0 + 10568);
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

static void implSig4_execute(char *t0)
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

LAB0:    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng32)));
    t3 = (t0 + 10632);
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

static void implSig5_execute(char *t0)
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

LAB0:    t1 = (t0 + 9048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 10696);
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

static void implSig6_execute(char *t0)
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

LAB0:    t1 = (t0 + 9296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng32)));
    t3 = (t0 + 10760);
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

static void implSig7_execute(char *t0)
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

LAB0:    t1 = (t0 + 9544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 10824);
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

static void implSig8_execute(char *t0)
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

LAB0:    t1 = (t0 + 9792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng32)));
    t3 = (t0 + 10888);
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

static void implSig9_execute(char *t0)
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

LAB0:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 10952);
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


extern void secureip_m_00000000003075412070_1883979516_init()
{
	static char *pe[] = {(void *)Always_40727_0,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute,(void *)implSig9_execute};
	xsi_register_didat("secureip_m_00000000003075412070_1883979516", "isim/demo_tb.exe.sim/secureip/m_00000000003075412070_1883979516.didat");
	xsi_register_executes(pe);
}
