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
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {6, 0};
static int ng4[] = {5, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {3U, 3U};
static int ng10[] = {4, 0};
static int ng11[] = {3, 0};
static int ng12[] = {2, 0};
static int ng13[] = {0, 0};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {15U, 0U};
static unsigned int ng16[] = {31U, 0U};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {63U, 0U};
static unsigned int ng19[] = {6U, 0U};
static unsigned int ng20[] = {127U, 0U};
static unsigned int ng21[] = {7U, 7U};
static unsigned int ng22[] = {0U, 1U};
static unsigned int ng23[] = {1U, 1U};
static int ng24[] = {7, 0};
static unsigned int ng25[] = {20U, 0U};
static int ng26[] = {1, 0};



static void Always_18905_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
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
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 4744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18905, ng0);
    t2 = (t0 + 6552);
    *((int *)t2) = 1;
    t3 = (t0 + 4776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18905, ng0);

LAB5:    xsi_set_current_line(18906, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(18911, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2864);
    t4 = (t0 + 2864);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB26;

LAB27:
LAB17:    xsi_set_current_line(18914, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB28:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(18919, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 2864);
    t7 = (t0 + 2864);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng10)));
    t14 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t6 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB48;

LAB49:
LAB39:    xsi_set_current_line(18922, ng0);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);

LAB50:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t6 == 1)
        goto LAB65;

LAB66:
LAB68:
LAB67:    xsi_set_current_line(18931, ng0);
    t2 = ((char*)((ng21)));
    t7 = (t0 + 2864);
    t8 = (t0 + 2864);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng12)));
    t15 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t16);
    t6 = (!(t18));
    t17 = (t10 + 4);
    t21 = *((unsigned int *)t17);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t20 = (t11 + 4);
    t25 = *((unsigned int *)t20);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB86;

LAB87:
LAB69:    xsi_set_current_line(18934, ng0);
    t2 = (t0 + 1824U);
    t7 = *((char **)t2);
    t2 = ((char*)((ng22)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t7) != *((unsigned int *)t2))
        goto LAB89;

LAB88:    t8 = (t7 + 4);
    t12 = (t2 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t12))
        goto LAB89;

LAB90:    memset(t10, 0, 8);
    t13 = (t11 + 4);
    t18 = *((unsigned int *)t13);
    t21 = (~(t18));
    t25 = *((unsigned int *)t11);
    t28 = (t25 & t21);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t13) != 0)
        goto LAB93;

LAB94:    t15 = (t10 + 4);
    t31 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t15);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB95;

LAB96:    t36 = *((unsigned int *)t10);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t15) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t10) > 0)
        goto LAB101;

LAB102:    memcpy(t9, t16, 8);

LAB103:    t20 = (t0 + 2864);
    t24 = (t0 + 2864);
    t41 = (t24 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng24)));
    xsi_vlog_generic_convert_bit_index(t40, t42, 2, t43, 32, 1);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t44);
    t6 = (!(t45));
    if (t6 == 1)
        goto LAB104;

LAB105:    xsi_set_current_line(18936, ng0);
    t2 = (t0 + 2864);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t12 = (t10 + 4);
    t13 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t21 = (t18 >> 0);
    *((unsigned int *)t10) = t21;
    t25 = *((unsigned int *)t13);
    t28 = (t25 >> 0);
    *((unsigned int *)t12) = t28;
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 255U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 255U);
    memset(t9, 0, 8);
    t14 = (t10 + 4);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t10);
    t35 = (t35 & 1);
    if (*((unsigned int *)t14) != 0)
        goto LAB106;

LAB107:    t36 = 1;

LAB109:    t37 = (t36 <= 7);
    if (t37 == 1)
        goto LAB110;

LAB111:    *((unsigned int *)t9) = t35;

LAB108:    t16 = ((char*)((ng23)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t16))
        goto LAB115;

LAB113:    t17 = (t9 + 4);
    t20 = (t16 + 4);
    if (*((unsigned int *)t17) != *((unsigned int *)t20))
        goto LAB115;

LAB114:    *((unsigned int *)t11) = 1;

LAB115:    t24 = (t11 + 4);
    t39 = *((unsigned int *)t24);
    t45 = (~(t39));
    t46 = *((unsigned int *)t11);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(18939, ng0);

LAB120:    xsi_set_current_line(18940, ng0);
    t2 = (t0 + 2864);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t12 = (t9 + 4);
    t13 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t21 = (t18 >> 0);
    *((unsigned int *)t9) = t21;
    t25 = *((unsigned int *)t13);
    t28 = (t25 >> 0);
    *((unsigned int *)t12) = t28;
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 255U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 255U);
    t14 = (t0 + 3024);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 8);
    xsi_set_current_line(18941, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);

LAB118:    goto LAB2;

LAB7:    xsi_set_current_line(18907, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB9:    xsi_set_current_line(18908, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2864);
    t7 = (t0 + 2864);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB20;

LAB21:    goto LAB17;

LAB11:    xsi_set_current_line(18909, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2864);
    t7 = (t0 + 2864);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB22;

LAB23:    goto LAB17;

LAB13:    xsi_set_current_line(18910, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2864);
    t7 = (t0 + 2864);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB24;

LAB25:    goto LAB17;

LAB18:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB19;

LAB20:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t4, t3, t29, *((unsigned int *)t10), t33);
    goto LAB21;

LAB22:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t4, t3, t29, *((unsigned int *)t10), t33);
    goto LAB23;

LAB24:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t4, t3, t29, *((unsigned int *)t10), t33);
    goto LAB25;

LAB26:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t27, *((unsigned int *)t10), t32);
    goto LAB27;

LAB29:    xsi_set_current_line(18915, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 2864);
    t8 = (t0 + 2864);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    t15 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (!(t18));
    t17 = (t10 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t20 = (t11 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB31:    xsi_set_current_line(18916, ng0);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 2864);
    t8 = (t0 + 2864);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    t15 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (!(t18));
    t17 = (t10 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t20 = (t11 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB42;

LAB43:    goto LAB39;

LAB33:    xsi_set_current_line(18917, ng0);
    t4 = ((char*)((ng5)));
    t7 = (t0 + 2864);
    t8 = (t0 + 2864);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    t15 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (!(t18));
    t17 = (t10 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t20 = (t11 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB44;

LAB45:    goto LAB39;

LAB35:    xsi_set_current_line(18918, ng0);
    t4 = ((char*)((ng8)));
    t7 = (t0 + 2864);
    t8 = (t0 + 2864);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    t15 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t9 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (!(t18));
    t17 = (t10 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t20 = (t11 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB46;

LAB47:    goto LAB39;

LAB40:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t4, t29, *((unsigned int *)t10), t33);
    goto LAB41;

LAB42:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t4, t29, *((unsigned int *)t10), t33);
    goto LAB43;

LAB44:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t4, t29, *((unsigned int *)t10), t33);
    goto LAB45;

LAB46:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t4, t29, *((unsigned int *)t10), t33);
    goto LAB47;

LAB48:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t2, t27, *((unsigned int *)t10), t32);
    goto LAB49;

LAB51:    xsi_set_current_line(18923, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB70;

LAB71:    goto LAB69;

LAB53:    xsi_set_current_line(18924, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB72;

LAB73:    goto LAB69;

LAB55:    xsi_set_current_line(18925, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB74;

LAB75:    goto LAB69;

LAB57:    xsi_set_current_line(18926, ng0);
    t7 = ((char*)((ng8)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB76;

LAB77:    goto LAB69;

LAB59:    xsi_set_current_line(18927, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB78;

LAB79:    goto LAB69;

LAB61:    xsi_set_current_line(18928, ng0);
    t7 = ((char*)((ng17)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB80;

LAB81:    goto LAB69;

LAB63:    xsi_set_current_line(18929, ng0);
    t7 = ((char*)((ng19)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB82;

LAB83:    goto LAB69;

LAB65:    xsi_set_current_line(18930, ng0);
    t7 = ((char*)((ng14)));
    t8 = (t0 + 2864);
    t12 = (t0 + 2864);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    t16 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB84;

LAB85:    goto LAB69;

LAB70:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB71;

LAB72:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB73;

LAB74:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB75;

LAB76:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB77;

LAB78:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB79;

LAB80:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB81;

LAB82:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB83;

LAB84:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t7, t29, *((unsigned int *)t10), t33);
    goto LAB85;

LAB86:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_assign_value(t7, t2, t27, *((unsigned int *)t10), t32);
    goto LAB87;

LAB89:    *((unsigned int *)t11) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB93:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB94;

LAB95:    t16 = (t0 + 1824U);
    t17 = *((char **)t16);
    goto LAB96;

LAB97:    t16 = ((char*)((ng23)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t9, 1, t17, 1, t16, 1);
    goto LAB103;

LAB101:    memcpy(t9, t17, 8);
    goto LAB103;

LAB104:    xsi_vlogvar_assign_value(t20, t9, 0, *((unsigned int *)t40), 1);
    goto LAB105;

LAB106:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB108;

LAB110:    t34 = (t34 >> 1);
    t38 = (t34 & 1);
    t35 = (t35 ^ t38);

LAB112:    t36 = (t36 + 1);
    goto LAB109;

LAB116:    xsi_set_current_line(18936, ng0);

LAB119:    xsi_set_current_line(18937, ng0);
    t41 = ((char*)((ng2)));
    t42 = (t0 + 3024);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 8);
    xsi_set_current_line(18938, ng0);
    t2 = ((char*)((ng1)));
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    goto LAB118;

}

static void Initial_18949_1(char *t0)
{
    char t8[8];
    char t9[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
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
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18949, ng0);

LAB4:    xsi_set_current_line(18950, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(18951, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(18952, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18953, ng0);

LAB5:    xsi_set_current_line(18953, ng0);
    t2 = (t0 + 6568);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18953, ng0);

LAB7:    xsi_set_current_line(18954, ng0);
    t4 = (t0 + 4800);
    xsi_process_wait(t4, 5LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(18958, ng0);

LAB9:    t5 = (t0 + 3024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t0 + 3664);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) != 0)
        goto LAB12;

LAB13:    t20 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB14;

LAB15:    t27 = *((unsigned int *)t9);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t20) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t9) > 0)
        goto LAB20;

LAB21:    memcpy(t8, t33, 8);

LAB22:    memset(t34, 0, 8);
    t35 = (t7 + 4);
    t36 = (t8 + 4);
    t37 = *((unsigned int *)t7);
    t38 = *((unsigned int *)t8);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB24;

LAB23:    if (t46 != 0)
        goto LAB25;

LAB26:    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB27;

LAB28:    goto LAB5;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB12:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB13;

LAB14:    t24 = (t0 + 3504);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    goto LAB15;

LAB16:    t31 = (t0 + 3344);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t8, 8, t26, 8, t33, 8);
    goto LAB22;

LAB20:    memcpy(t8, t26, 8);
    goto LAB22;

LAB24:    *((unsigned int *)t34) = 1;
    goto LAB26;

LAB25:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(18958, ng0);

LAB29:    xsi_set_current_line(18959, ng0);
    t56 = (t0 + 3664);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(18976, ng0);

LAB37:    xsi_set_current_line(18977, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(18978, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 5LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB30:    xsi_set_current_line(18959, ng0);

LAB33:    xsi_set_current_line(18960, ng0);
    t65 = (t0 + 3024);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 3344);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 8);
    xsi_set_current_line(18969, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 5LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB32:    goto LAB9;

LAB34:    xsi_set_current_line(18970, ng0);
    t3 = (t0 + 6584);
    *((int *)t3) = 1;
    t4 = (t0 + 5024);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(18970, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 3664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(18974, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 5LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(18975, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB32;

LAB38:    xsi_set_current_line(18979, ng0);
    t3 = (t0 + 6600);
    *((int *)t3) = 1;
    t4 = (t0 + 5024);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(18979, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 3664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(18980, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 5LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(18981, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB32;

LAB41:    goto LAB1;

}

static void NetDecl_18987_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18987, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 16, t2, 5, t5, 8);
    t7 = (t0 + 6760);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 65535U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 15U);
    t20 = (t0 + 6616);
    *((int *)t20) = 1;

LAB1:    return;
}

static void NetDecl_18988_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18988, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3504);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 16, t2, 5, t5, 8);
    t7 = (t0 + 6824);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 65535U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 15U);
    t20 = (t0 + 6632);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_18991_4(char *t0)
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    double t23;
    double t24;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18991, ng0);
    t2 = (t0 + 6648);
    *((int *)t2) = 1;
    t3 = (t0 + 5768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18991, ng0);

LAB5:    xsi_set_current_line(18991, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18992, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3824);
    t4 = (t0 + 3824);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB14;

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18991, ng0);
    t11 = (t0 + 1984U);
    t12 = *((char **)t11);
    t11 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t21 = (t0 + 2304U);
    t22 = *((char **)t21);
    t23 = xsi_vlog_convert_to_real(t22, 16, 2);
    t24 = (t23 < 0.00000000000000000);
    if (t24 == 1)
        goto LAB11;

LAB12:    t23 = (t23 + 0.50000000000000000);
    t23 = ((int64)(t23));

LAB13:    t23 = (t23 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, t23);
    goto LAB10;

LAB11:    t23 = 0.00000000000000000;
    goto LAB13;

LAB14:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB15;

}

static void Always_18994_5(char *t0)
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    double t23;
    double t24;

LAB0:    t1 = (t0 + 5984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18994, ng0);
    t2 = (t0 + 6664);
    *((int *)t2) = 1;
    t3 = (t0 + 6016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18994, ng0);

LAB5:    xsi_set_current_line(18994, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18995, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3824);
    t4 = (t0 + 3824);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng26)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB14;

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18994, ng0);
    t11 = (t0 + 1984U);
    t12 = *((char **)t11);
    t11 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng26)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t21 = (t0 + 2464U);
    t22 = *((char **)t21);
    t23 = xsi_vlog_convert_to_real(t22, 16, 2);
    t24 = (t23 < 0.00000000000000000);
    if (t24 == 1)
        goto LAB11;

LAB12:    t23 = (t23 + 0.50000000000000000);
    t23 = ((int64)(t23));

LAB13:    t23 = (t23 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, t23);
    goto LAB10;

LAB11:    t23 = 0.00000000000000000;
    goto LAB13;

LAB14:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB15;

}

static void Cont_18998_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t6;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 6232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18998, ng0);
    t2 = (t0 + 3184);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t8) == 0)
        goto LAB4;

LAB6:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;

LAB7:    t15 = (t5 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t5) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB9;

LAB8:    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t4, 0, 8);
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t4 + 4);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t32) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t50, 8);

LAB22:    t51 = (t0 + 6888);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 1U;
    t57 = t56;
    t58 = (t3 + 4);
    t59 = *((unsigned int *)t3);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 0);
    t64 = (t0 + 6680);
    *((int *)t64) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t5) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t31 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 3824);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 3824);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3664);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_get_index_select_value(t39, 1, t38, t42, 2, t45, 1, 2);
    goto LAB15;

LAB16:    t50 = ((char*)((ng23)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t39, 1, t50, 1);
    goto LAB22;

LAB20:    memcpy(t3, t39, 8);
    goto LAB22;

}


extern void secureip_m_00000000002019897364_2329124530_init()
{
	static char *pe[] = {(void *)Always_18905_0,(void *)Initial_18949_1,(void *)NetDecl_18987_2,(void *)NetDecl_18988_3,(void *)Always_18991_4,(void *)Always_18994_5,(void *)Cont_18998_6};
	xsi_register_didat("secureip_m_00000000002019897364_2329124530", "isim/top_test_bench.exe.sim/secureip/m_00000000002019897364_2329124530.didat");
	xsi_register_executes(pe);
}
