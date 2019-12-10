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
static unsigned int ng3[] = {3U, 0U};



static void Always_19359_0(char *t0)
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19359, ng0);
    t2 = (t0 + 4784);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19359, ng0);

LAB5:    xsi_set_current_line(19360, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(19361, ng0);

LAB14:    xsi_set_current_line(19362, ng0);
    t2 = (t0 + 1048U);
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
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(19363, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t2) == 0)
        goto LAB21;

LAB23:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB24:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB25:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t13 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19360, ng0);

LAB13:    xsi_set_current_line(19360, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(19360, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
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

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB26:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB25;

}

static void Always_19366_1(char *t0)
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19366, ng0);
    t2 = (t0 + 4800);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19366, ng0);

LAB5:    xsi_set_current_line(19367, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(19368, ng0);

LAB14:    xsi_set_current_line(19369, ng0);
    t2 = (t0 + 1048U);
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
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(19370, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t2) == 0)
        goto LAB21;

LAB23:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB24:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB25:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19367, ng0);

LAB13:    xsi_set_current_line(19367, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(19367, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
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

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB26:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB25;

}

static void Always_19374_2(char *t0)
{
    char t4[8];
    char t8[8];
    char t31[8];
    char t32[8];
    char t33[8];
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
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19374, ng0);
    t2 = (t0 + 4816);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19374, ng0);

LAB5:    xsi_set_current_line(19376, ng0);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t9) == 0)
        goto LAB12;

LAB14:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;

LAB15:    t17 = (t8 + 4);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB17;

LAB16:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t8, 1, t7, 1);

LAB6:    t27 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t27, 2);
    if (t28 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(19378, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    xsi_set_current_line(19381, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t31, 0, 8);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t6) == 0)
        goto LAB24;

LAB26:    t9 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t9) = 1;

LAB27:    t10 = (t31 + 4);
    t16 = (t7 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    *((unsigned int *)t31) = t20;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB29;

LAB28:    t25 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t25 & 1U);
    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    xsi_vlogtype_concat(t8, 2, 2, 2U, t31, 1, t5, 1);

LAB18:    t17 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t8, 2, t17, 2);
    if (t28 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(19383, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB23:    xsi_set_current_line(19386, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t32, 0, 8);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t6) == 0)
        goto LAB36;

LAB38:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;

LAB39:    t10 = (t32 + 4);
    t16 = (t7 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    *((unsigned int *)t32) = t20;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB41;

LAB40:    t25 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t25 & 1U);
    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    xsi_vlogtype_concat(t31, 2, 2, 2U, t32, 1, t5, 1);

LAB30:    t17 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t31, 2, t17, 2);
    if (t28 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(19388, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB35:    xsi_set_current_line(19391, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t6) == 0)
        goto LAB48;

LAB50:    t9 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t9) = 1;

LAB51:    t10 = (t33 + 4);
    t16 = (t7 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    *((unsigned int *)t33) = t20;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB53;

LAB52:    t25 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t25 & 1U);
    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    xsi_vlogtype_concat(t32, 2, 2, 2U, t33, 1, t5, 1);

LAB42:    t17 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t32, 2, t17, 2);
    if (t28 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(19393, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB47:    goto LAB2;

LAB7:    xsi_set_current_line(19377, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB11;

LAB12:    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB17:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB16;

LAB19:    xsi_set_current_line(19382, ng0);
    t18 = ((char*)((ng1)));
    t27 = (t0 + 2088);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 1);
    goto LAB23;

LAB24:    *((unsigned int *)t31) = 1;
    goto LAB27;

LAB29:    t21 = *((unsigned int *)t31);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t31) = (t21 | t22);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t23 | t24);
    goto LAB28;

LAB31:    xsi_set_current_line(19387, ng0);
    t18 = ((char*)((ng2)));
    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 1);
    goto LAB35;

LAB36:    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB41:    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t32) = (t21 | t22);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t23 | t24);
    goto LAB40;

LAB43:    xsi_set_current_line(19392, ng0);
    t18 = ((char*)((ng2)));
    t27 = (t0 + 2408);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 1);
    goto LAB47;

LAB48:    *((unsigned int *)t33) = 1;
    goto LAB51;

LAB53:    t21 = *((unsigned int *)t33);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t33) = (t21 | t22);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t23 | t24);
    goto LAB52;

}


extern void secureip_m_00000000002997551116_1362614276_init()
{
	static char *pe[] = {(void *)Always_19359_0,(void *)Always_19366_1,(void *)Always_19374_2};
	xsi_register_didat("secureip_m_00000000002997551116_1362614276", "isim/demo_tb.exe.sim/secureip/m_00000000002997551116_1362614276.didat");
	xsi_register_executes(pe);
}
