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
static int ng2[] = {7, 0};
static int ng3[] = {6, 0};
static int ng4[] = {5, 0};
static int ng5[] = {3, 0};
static int ng6[] = {2, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {9U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {1U, 0U};
static unsigned int ng18[] = {2U, 0U};
static unsigned int ng19[] = {5U, 0U};



static void NetDecl_19698_0(char *t0)
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

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19698, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
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
LAB6:    t36 = (t0 + 6496);
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
    t49 = (t0 + 6384);
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

static void Always_19699_1(char *t0)
{
    char t4[8];
    char t21[8];
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19699, ng0);
    t2 = (t0 + 6400);
    *((int *)t2) = 1;
    t3 = (t0 + 5848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19699, ng0);

LAB5:    xsi_set_current_line(19700, ng0);
    t5 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(19701, ng0);

LAB14:    xsi_set_current_line(19702, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(19703, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t6 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(19704, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t13, 1, t5, 1);
    t19 = (t0 + 2088);
    t20 = (t0 + 2088);
    t24 = (t20 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    t27 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t25)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t21 + 4);
    t7 = *((unsigned int *)t28);
    t29 = (!(t7));
    t30 = (t22 + 4);
    t8 = *((unsigned int *)t30);
    t31 = (!(t8));
    t32 = (t29 && t31);
    t33 = (t23 + 4);
    t9 = *((unsigned int *)t33);
    t34 = (!(t9));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(19708, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = (t0 + 2088);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng4)));
    t26 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t21 + 4);
    t15 = *((unsigned int *)t27);
    t29 = (!(t15));
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t31 = (!(t16));
    t32 = (t29 && t31);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(19709, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = (t0 + 2088);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng6)));
    t26 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t21 + 4);
    t15 = *((unsigned int *)t27);
    t29 = (!(t15));
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t31 = (!(t16));
    t32 = (t29 && t31);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB19;

LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19700, ng0);

LAB13:    xsi_set_current_line(19700, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    xsi_set_current_line(19700, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(19700, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    t10 = *((unsigned int *)t23);
    t36 = (t10 + 0);
    t11 = *((unsigned int *)t21);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t19, t4, t36, *((unsigned int *)t22), t38, 0LL);
    goto LAB16;

LAB17:    t18 = *((unsigned int *)t23);
    t36 = (t18 + 0);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t37 = (t39 - t40);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t13, t4, t36, *((unsigned int *)t22), t38, 0LL);
    goto LAB18;

LAB19:    t18 = *((unsigned int *)t23);
    t36 = (t18 + 0);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t37 = (t39 - t40);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t13, t4, t36, *((unsigned int *)t22), t38, 0LL);
    goto LAB20;

}

static void Always_19714_2(char *t0)
{
    char t4[8];
    char t8[8];
    char t20[8];
    char t32[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19714, ng0);
    t2 = (t0 + 6416);
    *((int *)t2) = 1;
    t3 = (t0 + 6096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19714, ng0);

LAB5:    xsi_set_current_line(19715, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = (t0 + 2408);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    t25 = (t24 & 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 2);
    t28 = (t27 & 1);
    *((unsigned int *)t21) = t28;
    t29 = (t0 + 2248);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    t41 = (t0 + 2248);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t43 + 4);
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 2);
    t49 = (t48 & 1);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 2);
    t52 = (t51 & 1);
    *((unsigned int *)t45) = t52;
    xsi_vlogtype_concat(t4, 6, 4, 4U, t44, 1, t32, 1, t20, 1, t8, 1);

LAB6:    t53 = ((char*)((ng8)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t53, 6);
    if (t54 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng16)));
    t54 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(19724, ng0);

LAB34:    xsi_set_current_line(19724, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19724, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB25:    xsi_set_current_line(19727, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t8, 3, 3, 1U, t5, 3);

LAB35:    t6 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t6, 3);
    if (t54 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng12)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng10)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng1)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng18)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng19)));
    t54 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t54 == 1)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(19738, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t20, 3, 3, 1U, t5, 3);

LAB61:    t6 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t6, 3);
    if (t54 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng12)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng10)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng1)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng18)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng19)));
    t54 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 3);
    if (t54 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB2;

LAB7:    xsi_set_current_line(19716, ng0);

LAB26:    xsi_set_current_line(19716, ng0);
    t55 = ((char*)((ng9)));
    t56 = (t0 + 2568);
    xsi_vlogvar_assign_value(t56, t55, 0, 0, 1);
    xsi_set_current_line(19716, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(19717, ng0);

LAB27:    xsi_set_current_line(19717, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19717, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(19718, ng0);

LAB28:    xsi_set_current_line(19718, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19718, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB13:    xsi_set_current_line(19719, ng0);

LAB29:    xsi_set_current_line(19719, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19719, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(19720, ng0);

LAB30:    xsi_set_current_line(19720, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19720, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(19721, ng0);

LAB31:    xsi_set_current_line(19721, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19721, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(19722, ng0);

LAB32:    xsi_set_current_line(19722, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19722, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(19723, ng0);

LAB33:    xsi_set_current_line(19723, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19723, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB36:    xsi_set_current_line(19728, ng0);

LAB53:    xsi_set_current_line(19728, ng0);
    t7 = ((char*)((ng9)));
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(19728, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19728, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19728, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19728, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19728, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB38:    xsi_set_current_line(19729, ng0);

LAB54:    xsi_set_current_line(19729, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19729, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19729, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19729, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19729, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19729, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB40:    xsi_set_current_line(19730, ng0);

LAB55:    xsi_set_current_line(19730, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19730, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19730, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19730, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19730, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19730, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB42:    xsi_set_current_line(19731, ng0);

LAB56:    xsi_set_current_line(19731, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19731, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19731, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19731, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19731, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19731, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB44:    xsi_set_current_line(19732, ng0);

LAB57:    xsi_set_current_line(19732, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19732, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19732, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19732, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19732, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19732, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB46:    xsi_set_current_line(19733, ng0);

LAB58:    xsi_set_current_line(19733, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19733, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19733, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19733, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19733, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19733, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB48:    xsi_set_current_line(19734, ng0);

LAB59:    xsi_set_current_line(19734, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19734, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19734, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19734, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19734, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19734, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB50:    xsi_set_current_line(19735, ng0);

LAB60:    xsi_set_current_line(19735, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19735, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19735, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19735, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19735, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19735, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB62:    xsi_set_current_line(19739, ng0);

LAB79:    xsi_set_current_line(19739, ng0);
    t7 = ((char*)((ng9)));
    t9 = (t0 + 3848);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(19739, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19739, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19739, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19739, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19739, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB64:    xsi_set_current_line(19740, ng0);

LAB80:    xsi_set_current_line(19740, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19740, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19740, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19740, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19740, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19740, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB66:    xsi_set_current_line(19741, ng0);

LAB81:    xsi_set_current_line(19741, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19741, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19741, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19741, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19741, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19741, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB68:    xsi_set_current_line(19742, ng0);

LAB82:    xsi_set_current_line(19742, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19742, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19742, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19742, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19742, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19742, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB70:    xsi_set_current_line(19743, ng0);

LAB83:    xsi_set_current_line(19743, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19743, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19743, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19743, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19743, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19743, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB72:    xsi_set_current_line(19744, ng0);

LAB84:    xsi_set_current_line(19744, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19744, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19744, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19744, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19744, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19744, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB74:    xsi_set_current_line(19745, ng0);

LAB85:    xsi_set_current_line(19745, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19745, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19745, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19745, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19745, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19745, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

LAB76:    xsi_set_current_line(19746, ng0);

LAB86:    xsi_set_current_line(19746, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(19746, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19746, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19746, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19746, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19746, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

}


extern void secureip_m_00000000001056360902_2952956255_init()
{
	static char *pe[] = {(void *)NetDecl_19698_0,(void *)Always_19699_1,(void *)Always_19714_2};
	xsi_register_didat("secureip_m_00000000001056360902_2952956255", "isim/top_test_bench.exe.sim/secureip/m_00000000001056360902_2952956255.didat");
	xsi_register_executes(pe);
}
