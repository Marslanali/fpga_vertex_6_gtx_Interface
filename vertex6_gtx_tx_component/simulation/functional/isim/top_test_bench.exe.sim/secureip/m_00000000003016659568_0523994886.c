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
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static int sp_bbpd_gen(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
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
    int t16;
    char *t17;
    char *t18;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(19973, ng0);

LAB5:    xsi_set_current_line(19974, ng0);
    t6 = (t1 + 5080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 4920);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 4760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t5, 3, 3, 3U, t14, 1, t11, 1, t8, 1);

LAB6:    t15 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t15, 3);
    if (t16 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng6)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t16 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(19975, ng0);

LAB24:    xsi_set_current_line(19975, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t1 + 5240);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    xsi_set_current_line(19975, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19975, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(19976, ng0);

LAB25:    xsi_set_current_line(19976, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19976, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19976, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(19977, ng0);

LAB26:    xsi_set_current_line(19977, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19977, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19977, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(19978, ng0);

LAB27:    xsi_set_current_line(19978, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19978, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19978, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(19979, ng0);

LAB28:    xsi_set_current_line(19979, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19979, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19979, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(19980, ng0);

LAB29:    xsi_set_current_line(19980, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19980, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19980, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(19981, ng0);

LAB30:    xsi_set_current_line(19981, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19981, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19981, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(19982, ng0);

LAB31:    xsi_set_current_line(19982, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 5240);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(19982, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(19982, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5560);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB23;

}

static void Always_19900_0(char *t0)
{
    char t6[8];
    char t35[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
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

LAB0:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19900, ng0);
    t2 = (t0 + 7048);
    *((int *)t2) = 1;
    t3 = (t0 + 6512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19900, ng0);

LAB5:    xsi_set_current_line(19901, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(19910, ng0);

LAB14:    xsi_set_current_line(19913, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(19923, ng0);

LAB45:    xsi_set_current_line(19924, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4600);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t28 = (t6 + 4);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 | t13);
    *((unsigned int *)t28) = t14;
    t15 = *((unsigned int *)t28);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB46;

LAB47:
LAB48:    t29 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(19925, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(19926, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB17:    xsi_set_current_line(19929, ng0);
    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(19930, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t5) != 0)
        goto LAB51;

LAB52:    t8 = (t35 + 4);
    t14 = *((unsigned int *)t35);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB53;

LAB54:    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t8) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t35) > 0)
        goto LAB59;

LAB60:    memcpy(t6, t31, 8);

LAB61:    t33 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t33, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(19931, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t2) != 0)
        goto LAB64;

LAB65:    t5 = (t35 + 4);
    t14 = *((unsigned int *)t35);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB66;

LAB67:    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t5) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t35) > 0)
        goto LAB72;

LAB73:    memcpy(t6, t22, 8);

LAB74:    t28 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19901, ng0);

LAB13:    xsi_set_current_line(19902, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(19903, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(19904, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(19905, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(19906, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(19907, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(19913, ng0);

LAB18:    xsi_set_current_line(19914, ng0);
    t7 = (t0 + 3800);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t21 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (~(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t22) == 0)
        goto LAB19;

LAB21:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;

LAB22:    t29 = (t6 + 4);
    t19 = *((unsigned int *)t29);
    t20 = (~(t19));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t20);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(19921, ng0);

LAB44:    xsi_set_current_line(19921, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(19921, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB25:    goto LAB17;

LAB19:    *((unsigned int *)t6) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(19914, ng0);

LAB26:    xsi_set_current_line(19915, ng0);
    t30 = (t0 + 4600);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);

LAB27:    t33 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 3, t33, 3);
    if (t34 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 3, t2, 3);
    if (t34 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(19918, ng0);

LAB43:    xsi_set_current_line(19918, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t4, 3, t5, 3);
    t7 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(19918, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB34:    goto LAB25;

LAB28:    xsi_set_current_line(19916, ng0);

LAB35:    xsi_set_current_line(19916, ng0);
    t36 = (t0 + 2680);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t35, 0, 8);
    t39 = (t38 + 4);
    t26 = *((unsigned int *)t39);
    t27 = (~(t26));
    t40 = *((unsigned int *)t38);
    t41 = (t40 & t27);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t39) == 0)
        goto LAB36;

LAB38:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;

LAB39:    t44 = (t35 + 4);
    t45 = (t38 + 4);
    t46 = *((unsigned int *)t38);
    t47 = (~(t46));
    *((unsigned int *)t35) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB41;

LAB40:    t52 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t54, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(19916, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t4, 3, t5, 3);
    t7 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(19916, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(19917, ng0);

LAB42:    xsi_set_current_line(19917, ng0);
    t3 = (t0 + 4600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(19917, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB34;

LAB36:    *((unsigned int *)t35) = 1;
    goto LAB39;

LAB41:    t48 = *((unsigned int *)t35);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t35) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB40;

LAB46:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t28);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB48;

LAB49:    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB51:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    t21 = (t0 + 3480);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    goto LAB54;

LAB55:    t29 = (t0 + 4120);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t6, 1, t28, 1, t31, 1);
    goto LAB61;

LAB59:    memcpy(t6, t28, 8);
    goto LAB61;

LAB62:    *((unsigned int *)t35) = 1;
    goto LAB65;

LAB64:    t4 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB65;

LAB66:    t7 = (t0 + 2840);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    goto LAB67;

LAB68:    t22 = ((char*)((ng1)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t6, 1, t21, 1, t22, 1);
    goto LAB74;

LAB72:    memcpy(t6, t21, 8);
    goto LAB74;

}

static void Always_19935_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t26[8];
    char t54[8];
    char t66[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;

LAB0:    t1 = (t0 + 6728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19935, ng0);
    t2 = (t0 + 7064);
    *((int *)t2) = 1;
    t3 = (t0 + 6760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19935, ng0);

LAB5:    xsi_set_current_line(19936, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2120U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t24 = (t0 + 2280U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t24) = t33;
    t34 = (t0 + 6536);
    t35 = (t0 + 848);
    t36 = xsi_create_subprogram_invocation(t34, 0, t0, t35, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t35, t36);
    t37 = (t0 + 4760);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 1);
    t38 = (t0 + 4920);
    xsi_vlogvar_assign_value(t38, t16, 0, 0, 1);
    t39 = (t0 + 5080);
    xsi_vlogvar_assign_value(t39, t26, 0, 0, 1);

LAB8:    t40 = (t0 + 6632);
    t41 = *((char **)t40);
    t42 = (t41 + 80U);
    t43 = *((char **)t42);
    t44 = (t43 + 272U);
    t45 = *((char **)t44);
    t46 = (t45 + 0U);
    t47 = *((char **)t46);
    t48 = ((int  (*)(char *, char *))t47)(t0, t41);

LAB10:    if (t48 != 0)
        goto LAB11;

LAB6:    t41 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t41);

LAB7:    t49 = (t0 + 6632);
    t50 = *((char **)t49);
    t49 = (t0 + 5240);
    t51 = (t49 + 56U);
    t52 = *((char **)t51);
    t53 = (t0 + 3000);
    t55 = (t0 + 3000);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t54, t57, 2, t58, 32, 1);
    t59 = (t54 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    if (t61 == 1)
        goto LAB12;

LAB13:    t62 = (t0 + 5400);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t0 + 3160);
    t67 = (t0 + 3160);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t66, t69, 2, t70, 32, 1);
    t71 = (t66 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (!(t72));
    if (t73 == 1)
        goto LAB14;

LAB15:    t74 = (t0 + 5560);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t0 + 3320);
    t79 = (t0 + 3320);
    t80 = (t79 + 72U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t78, t81, 2, t82, 32, 1);
    t83 = (t78 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    if (t85 == 1)
        goto LAB16;

LAB17:    t86 = (t0 + 848);
    t87 = (t0 + 6536);
    t88 = 0;
    xsi_delete_subprogram_invocation(t86, t50, t0, t87, t88);
    xsi_set_current_line(19937, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 2120U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t15 = (t0 + 2280U);
    t17 = *((char **)t15);
    memset(t26, 0, 8);
    t15 = (t26 + 4);
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t24);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    t25 = (t0 + 6536);
    t27 = (t0 + 848);
    t34 = xsi_create_subprogram_invocation(t25, 0, t0, t27, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t27, t34);
    t35 = (t0 + 4760);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 1);
    t36 = (t0 + 4920);
    xsi_vlogvar_assign_value(t36, t16, 0, 0, 1);
    t37 = (t0 + 5080);
    xsi_vlogvar_assign_value(t37, t26, 0, 0, 1);

LAB20:    t38 = (t0 + 6632);
    t39 = *((char **)t38);
    t40 = (t39 + 80U);
    t41 = *((char **)t40);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t48 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB22:    if (t48 != 0)
        goto LAB23;

LAB18:    t39 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t39);

LAB19:    t46 = (t0 + 6632);
    t47 = *((char **)t46);
    t46 = (t0 + 5240);
    t49 = (t46 + 56U);
    t50 = *((char **)t49);
    t51 = (t0 + 3000);
    t52 = (t0 + 3000);
    t53 = (t52 + 72U);
    t55 = *((char **)t53);
    t56 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t54, t55, 2, t56, 32, 1);
    t57 = (t54 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (!(t60));
    if (t61 == 1)
        goto LAB24;

LAB25:    t58 = (t0 + 5400);
    t59 = (t58 + 56U);
    t62 = *((char **)t59);
    t63 = (t0 + 3160);
    t64 = (t0 + 3160);
    t65 = (t64 + 72U);
    t67 = *((char **)t65);
    t68 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t66, t67, 2, t68, 32, 1);
    t69 = (t66 + 4);
    t72 = *((unsigned int *)t69);
    t73 = (!(t72));
    if (t73 == 1)
        goto LAB26;

LAB27:    t70 = (t0 + 5560);
    t71 = (t70 + 56U);
    t74 = *((char **)t71);
    t75 = (t0 + 3320);
    t76 = (t0 + 3320);
    t77 = (t76 + 72U);
    t79 = *((char **)t77);
    t80 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t78, t79, 2, t80, 32, 1);
    t81 = (t78 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (!(t84));
    if (t85 == 1)
        goto LAB28;

LAB29:    t82 = (t0 + 848);
    t83 = (t0 + 6536);
    t86 = 0;
    xsi_delete_subprogram_invocation(t82, t47, t0, t83, t86);
    xsi_set_current_line(19938, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB30:    t14 = ((char*)((ng3)));
    t48 = xsi_vlog_unsigned_case_compare(t6, 2, t14, 2);
    if (t48 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng5)));
    t48 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t48 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(19946, ng0);

LAB78:    xsi_set_current_line(19946, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 3U);
    if (t12 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t5) == 0)
        goto LAB79;

LAB81:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;

LAB82:    t14 = (t16 + 4);
    t13 = *((unsigned int *)t14);
    t18 = (~(t13));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(19953, ng0);

LAB123:    xsi_set_current_line(19954, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t54, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB127;

LAB125:    if (*((unsigned int *)t5) == 0)
        goto LAB124;

LAB126:    t7 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t7) = 1;

LAB127:    memset(t26, 0, 8);
    t14 = (t54 + 4);
    t13 = *((unsigned int *)t14);
    t18 = (~(t13));
    t19 = *((unsigned int *)t54);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t14) != 0)
        goto LAB130;

LAB131:    t17 = (t26 + 4);
    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t17);
    t28 = (t22 || t23);
    if (t28 > 0)
        goto LAB132;

LAB133:    t94 = *((unsigned int *)t26);
    t95 = (~(t94));
    t96 = *((unsigned int *)t17);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t17) > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t26) > 0)
        goto LAB138;

LAB139:    memcpy(t16, t40, 8);

LAB140:    t41 = (t0 + 3480);
    xsi_vlogvar_assign_value(t41, t16, 0, 0, 1);
    xsi_set_current_line(19955, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t5) != 0)
        goto LAB149;

LAB150:    t14 = (t26 + 4);
    t13 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t14);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB151;

LAB152:    t89 = *((unsigned int *)t26);
    t90 = (~(t89));
    t91 = *((unsigned int *)t14);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t14) > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t26) > 0)
        goto LAB157;

LAB158:    memcpy(t16, t38, 8);

LAB159:    t39 = (t0 + 4120);
    xsi_vlogvar_assign_value(t39, t16, 0, 0, 1);
    xsi_set_current_line(19956, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19957, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB85:
LAB37:    goto LAB2;

LAB9:;
LAB11:    t40 = (t0 + 6728U);
    *((char **)t40) = &&LAB8;
    goto LAB1;

LAB12:    xsi_vlogvar_assign_value(t53, t52, 0, *((unsigned int *)t54), 1);
    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t65, t64, 0, *((unsigned int *)t66), 1);
    goto LAB15;

LAB16:    xsi_vlogvar_assign_value(t77, t76, 0, *((unsigned int *)t78), 1);
    goto LAB17;

LAB21:;
LAB23:    t38 = (t0 + 6728U);
    *((char **)t38) = &&LAB20;
    goto LAB1;

LAB24:    xsi_vlogvar_assign_value(t51, t50, 0, *((unsigned int *)t54), 1);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t63, t62, 0, *((unsigned int *)t66), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t75, t74, 0, *((unsigned int *)t78), 1);
    goto LAB29;

LAB31:    xsi_set_current_line(19939, ng0);

LAB38:    xsi_set_current_line(19939, ng0);
    t15 = (t0 + 3000);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    memset(t16, 0, 8);
    t25 = (t16 + 4);
    t27 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t27);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t25) = t23;
    t34 = (t0 + 3480);
    xsi_vlogvar_assign_value(t34, t16, 0, 0, 1);
    xsi_set_current_line(19939, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19939, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19940, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t5) != 0)
        goto LAB41;

LAB42:    t14 = (t26 + 4);
    t13 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t14);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB43;

LAB44:    t89 = *((unsigned int *)t26);
    t90 = (~(t89));
    t91 = *((unsigned int *)t14);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t14) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t26) > 0)
        goto LAB49;

LAB50:    memcpy(t16, t38, 8);

LAB51:    t39 = (t0 + 4120);
    xsi_vlogvar_assign_value(t39, t16, 0, 0, 1);
    goto LAB37;

LAB33:    xsi_set_current_line(19942, ng0);

LAB58:    xsi_set_current_line(19942, ng0);
    t3 = (t0 + 3000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t15 = (t0 + 3480);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 1);
    xsi_set_current_line(19942, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19942, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19943, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t5) != 0)
        goto LAB61;

LAB62:    t14 = (t26 + 4);
    t13 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t14);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB63;

LAB64:    t20 = *((unsigned int *)t26);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t14) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t26) > 0)
        goto LAB69;

LAB70:    memcpy(t16, t54, 8);

LAB71:    t39 = (t0 + 4120);
    xsi_vlogvar_assign_value(t39, t16, 0, 0, 1);
    goto LAB37;

LAB39:    *((unsigned int *)t26) = 1;
    goto LAB42;

LAB41:    t7 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    t15 = (t0 + 2680);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    memset(t54, 0, 8);
    t25 = (t24 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t24);
    t23 = (t22 & t21);
    t28 = (t23 & 1U);
    if (t28 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t25) == 0)
        goto LAB52;

LAB54:    t27 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t27) = 1;

LAB55:    t34 = (t54 + 4);
    t35 = (t24 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    *((unsigned int *)t54) = t30;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB57;

LAB56:    t72 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t72 & 1U);
    t84 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t84 & 1U);
    goto LAB44;

LAB45:    t36 = (t0 + 2840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t16, 1, t54, 1, t38, 1);
    goto LAB51;

LAB49:    memcpy(t16, t54, 8);
    goto LAB51;

LAB52:    *((unsigned int *)t54) = 1;
    goto LAB55;

LAB57:    t31 = *((unsigned int *)t54);
    t32 = *((unsigned int *)t35);
    *((unsigned int *)t54) = (t31 | t32);
    t33 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t33 | t60);
    goto LAB56;

LAB59:    *((unsigned int *)t26) = 1;
    goto LAB62;

LAB61:    t7 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    t15 = (t0 + 2840);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    goto LAB64;

LAB65:    t25 = (t0 + 2680);
    t27 = (t25 + 56U);
    t34 = *((char **)t27);
    memset(t54, 0, 8);
    t35 = (t34 + 4);
    t28 = *((unsigned int *)t35);
    t29 = (~(t28));
    t30 = *((unsigned int *)t34);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t35) == 0)
        goto LAB72;

LAB74:    t36 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t36) = 1;

LAB75:    t37 = (t54 + 4);
    t38 = (t34 + 4);
    t33 = *((unsigned int *)t34);
    t60 = (~(t33));
    *((unsigned int *)t54) = t60;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB77;

LAB76:    t91 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t91 & 1U);
    t92 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t92 & 1U);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t16, 1, t24, 1, t54, 1);
    goto LAB71;

LAB69:    memcpy(t16, t24, 8);
    goto LAB71;

LAB72:    *((unsigned int *)t54) = 1;
    goto LAB75;

LAB77:    t72 = *((unsigned int *)t54);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t54) = (t72 | t84);
    t89 = *((unsigned int *)t37);
    t90 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t89 | t90);
    goto LAB76;

LAB79:    *((unsigned int *)t16) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(19947, ng0);

LAB86:    xsi_set_current_line(19948, ng0);
    t15 = (t0 + 3800);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    memset(t66, 0, 8);
    t25 = (t24 + 4);
    t22 = *((unsigned int *)t25);
    t23 = (~(t22));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t23);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB90;

LAB88:    if (*((unsigned int *)t25) == 0)
        goto LAB87;

LAB89:    t27 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t27) = 1;

LAB90:    memset(t54, 0, 8);
    t34 = (t66 + 4);
    t31 = *((unsigned int *)t34);
    t32 = (~(t31));
    t33 = *((unsigned int *)t66);
    t60 = (t33 & t32);
    t72 = (t60 & 1U);
    if (t72 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t34) != 0)
        goto LAB93;

LAB94:    t36 = (t54 + 4);
    t84 = *((unsigned int *)t54);
    t89 = *((unsigned int *)t36);
    t90 = (t84 || t89);
    if (t90 > 0)
        goto LAB95;

LAB96:    t91 = *((unsigned int *)t54);
    t92 = (~(t91));
    t93 = *((unsigned int *)t36);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t36) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t54) > 0)
        goto LAB101;

LAB102:    memcpy(t26, t42, 8);

LAB103:    t43 = (t0 + 3480);
    xsi_vlogvar_assign_value(t43, t26, 0, 0, 1);
    xsi_set_current_line(19949, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t5) != 0)
        goto LAB106;

LAB107:    t14 = (t26 + 4);
    t13 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t14);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB108;

LAB109:    t89 = *((unsigned int *)t26);
    t90 = (~(t89));
    t91 = *((unsigned int *)t14);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t14) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t26) > 0)
        goto LAB114;

LAB115:    memcpy(t16, t38, 8);

LAB116:    t39 = (t0 + 4120);
    xsi_vlogvar_assign_value(t39, t16, 0, 0, 1);
    xsi_set_current_line(19950, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19951, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB85;

LAB87:    *((unsigned int *)t66) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t54) = 1;
    goto LAB94;

LAB93:    t35 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB94;

LAB95:    t37 = (t0 + 4440);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB96;

LAB97:    t40 = (t0 + 2840);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t26, 1, t39, 1, t42, 1);
    goto LAB103;

LAB101:    memcpy(t26, t39, 8);
    goto LAB103;

LAB104:    *((unsigned int *)t26) = 1;
    goto LAB107;

LAB106:    t7 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB107;

LAB108:    t15 = (t0 + 2680);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    memset(t54, 0, 8);
    t25 = (t24 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t24);
    t23 = (t22 & t21);
    t28 = (t23 & 1U);
    if (t28 != 0)
        goto LAB120;

LAB118:    if (*((unsigned int *)t25) == 0)
        goto LAB117;

LAB119:    t27 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t27) = 1;

LAB120:    t34 = (t54 + 4);
    t35 = (t24 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    *((unsigned int *)t54) = t30;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB122;

LAB121:    t72 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t72 & 1U);
    t84 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t84 & 1U);
    goto LAB109;

LAB110:    t36 = (t0 + 2840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t16, 1, t54, 1, t38, 1);
    goto LAB116;

LAB114:    memcpy(t16, t54, 8);
    goto LAB116;

LAB117:    *((unsigned int *)t54) = 1;
    goto LAB120;

LAB122:    t31 = *((unsigned int *)t54);
    t32 = *((unsigned int *)t35);
    *((unsigned int *)t54) = (t31 | t32);
    t33 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t33 | t60);
    goto LAB121;

LAB124:    *((unsigned int *)t54) = 1;
    goto LAB127;

LAB128:    *((unsigned int *)t26) = 1;
    goto LAB131;

LAB130:    t15 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB131;

LAB132:    t24 = (t0 + 2680);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memset(t66, 0, 8);
    t34 = (t27 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB144;

LAB142:    if (*((unsigned int *)t34) == 0)
        goto LAB141;

LAB143:    t35 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t35) = 1;

LAB144:    t36 = (t66 + 4);
    t37 = (t27 + 4);
    t60 = *((unsigned int *)t27);
    t72 = (~(t60));
    *((unsigned int *)t66) = t72;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB146;

LAB145:    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & 1U);
    t93 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t93 & 1U);
    goto LAB133;

LAB134:    t38 = (t0 + 2840);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    goto LAB135;

LAB136:    xsi_vlog_unsigned_bit_combine(t16, 1, t66, 1, t40, 1);
    goto LAB140;

LAB138:    memcpy(t16, t66, 8);
    goto LAB140;

LAB141:    *((unsigned int *)t66) = 1;
    goto LAB144;

LAB146:    t84 = *((unsigned int *)t66);
    t89 = *((unsigned int *)t37);
    *((unsigned int *)t66) = (t84 | t89);
    t90 = *((unsigned int *)t36);
    t91 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t90 | t91);
    goto LAB145;

LAB147:    *((unsigned int *)t26) = 1;
    goto LAB150;

LAB149:    t7 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB150;

LAB151:    t15 = (t0 + 2680);
    t17 = (t15 + 56U);
    t24 = *((char **)t17);
    memset(t54, 0, 8);
    t25 = (t24 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t24);
    t23 = (t22 & t21);
    t28 = (t23 & 1U);
    if (t28 != 0)
        goto LAB163;

LAB161:    if (*((unsigned int *)t25) == 0)
        goto LAB160;

LAB162:    t27 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t27) = 1;

LAB163:    t34 = (t54 + 4);
    t35 = (t24 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    *((unsigned int *)t54) = t30;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB165;

LAB164:    t72 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t72 & 1U);
    t84 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t84 & 1U);
    goto LAB152;

LAB153:    t36 = (t0 + 2840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    goto LAB154;

LAB155:    xsi_vlog_unsigned_bit_combine(t16, 1, t54, 1, t38, 1);
    goto LAB159;

LAB157:    memcpy(t16, t54, 8);
    goto LAB159;

LAB160:    *((unsigned int *)t54) = 1;
    goto LAB163;

LAB165:    t31 = *((unsigned int *)t54);
    t32 = *((unsigned int *)t35);
    *((unsigned int *)t54) = (t31 | t32);
    t33 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t33 | t60);
    goto LAB164;

}


extern void secureip_m_00000000003016659568_0523994886_init()
{
	static char *pe[] = {(void *)Always_19900_0,(void *)Always_19935_1};
	static char *se[] = {(void *)sp_bbpd_gen};
	xsi_register_didat("secureip_m_00000000003016659568_0523994886", "isim/top_test_bench.exe.sim/secureip/m_00000000003016659568_0523994886.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
