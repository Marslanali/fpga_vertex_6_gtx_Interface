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
static unsigned int ng3[] = {128U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {31U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {63U, 0U};
static unsigned int ng13[] = {127U, 0U};
static unsigned int ng14[] = {8U, 0U};



static void Always_19210_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t41[8];
    char t42[8];
    char t43[8];
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
    int t30;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19210, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19210, ng0);

LAB5:    xsi_set_current_line(19211, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(19219, ng0);

LAB14:    xsi_set_current_line(19221, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(19222, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(19225, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);

LAB15:    t8 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 3);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(19237, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);

LAB137:    t8 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t8, 2);
    if (t30 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB140;

LAB141:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB144;

LAB145:
LAB146:    xsi_set_current_line(19243, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t5 = (t32 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 5);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);

LAB199:    t8 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t8, 2);
    if (t30 == 1)
        goto LAB200;

LAB201:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t30 == 1)
        goto LAB202;

LAB203:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t30 == 1)
        goto LAB204;

LAB205:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t30 == 1)
        goto LAB206;

LAB207:
LAB208:    xsi_set_current_line(19249, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t42, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB261;

LAB262:    if (*((unsigned int *)t5) != 0)
        goto LAB263;

LAB264:    t8 = (t42 + 4);
    t14 = *((unsigned int *)t42);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB265;

LAB266:    t25 = *((unsigned int *)t42);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t36 = (t26 || t27);
    if (t36 > 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t8) > 0)
        goto LAB269;

LAB270:    if (*((unsigned int *)t42) > 0)
        goto LAB271;

LAB272:    memcpy(t41, t37, 8);

LAB273:    t38 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t38, t41, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19211, ng0);

LAB13:    xsi_set_current_line(19212, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(19213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(19214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(19215, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(19216, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(19217, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(19226, ng0);
    t21 = (t0 + 2888);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t32, 0, 8);
    t29 = (t28 + 4);
    t15 = *((unsigned int *)t29);
    t16 = (~(t15));
    t17 = *((unsigned int *)t28);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t29) != 0)
        goto LAB35;

LAB36:    t34 = (t32 + 4);
    t20 = *((unsigned int *)t32);
    t23 = *((unsigned int *)t34);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB37;

LAB38:    t25 = *((unsigned int *)t32);
    t26 = (~(t25));
    t27 = *((unsigned int *)t34);
    t36 = (t26 || t27);
    if (t36 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t34) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t32) > 0)
        goto LAB43;

LAB44:    memcpy(t31, t39, 8);

LAB45:    t40 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t40, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB18:    xsi_set_current_line(19227, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t7) != 0)
        goto LAB48;

LAB49:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB50;

LAB51:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t21) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t32) > 0)
        goto LAB56;

LAB57:    memcpy(t31, t33, 8);

LAB58:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB20:    xsi_set_current_line(19228, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t7) != 0)
        goto LAB61;

LAB62:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB63;

LAB64:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t21) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t32) > 0)
        goto LAB69;

LAB70:    memcpy(t31, t33, 8);

LAB71:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB22:    xsi_set_current_line(19229, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB75:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB76;

LAB77:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t21) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t32) > 0)
        goto LAB82;

LAB83:    memcpy(t31, t33, 8);

LAB84:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB24:    xsi_set_current_line(19230, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t7) != 0)
        goto LAB87;

LAB88:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB89;

LAB90:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t21) > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t32) > 0)
        goto LAB95;

LAB96:    memcpy(t31, t33, 8);

LAB97:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB26:    xsi_set_current_line(19231, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t7) != 0)
        goto LAB100;

LAB101:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB102;

LAB103:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t21) > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t32) > 0)
        goto LAB108;

LAB109:    memcpy(t31, t33, 8);

LAB110:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB28:    xsi_set_current_line(19232, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t7) != 0)
        goto LAB113;

LAB114:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB115;

LAB116:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t21) > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t32) > 0)
        goto LAB121;

LAB122:    memcpy(t31, t33, 8);

LAB123:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB30:    xsi_set_current_line(19233, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t7) != 0)
        goto LAB126;

LAB127:    t21 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB128;

LAB129:    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t21) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t32) > 0)
        goto LAB134;

LAB135:    memcpy(t31, t33, 8);

LAB136:    t34 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 7, 0LL);
    goto LAB32;

LAB33:    *((unsigned int *)t32) = 1;
    goto LAB36;

LAB35:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB36;

LAB37:    t35 = ((char*)((ng2)));
    goto LAB38;

LAB39:    t37 = (t0 + 2248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t31, 7, t35, 7, t39, 7);
    goto LAB45;

LAB43:    memcpy(t31, t35, 8);
    goto LAB45;

LAB46:    *((unsigned int *)t32) = 1;
    goto LAB49;

LAB48:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB49;

LAB50:    t22 = ((char*)((ng1)));
    goto LAB51;

LAB52:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB58;

LAB56:    memcpy(t31, t22, 8);
    goto LAB58;

LAB59:    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB61:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB62;

LAB63:    t22 = ((char*)((ng5)));
    goto LAB64;

LAB65:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB71;

LAB69:    memcpy(t31, t22, 8);
    goto LAB71;

LAB72:    *((unsigned int *)t32) = 1;
    goto LAB75;

LAB74:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB75;

LAB76:    t22 = ((char*)((ng6)));
    goto LAB77;

LAB78:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB84;

LAB82:    memcpy(t31, t22, 8);
    goto LAB84;

LAB85:    *((unsigned int *)t32) = 1;
    goto LAB88;

LAB87:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB88;

LAB89:    t22 = ((char*)((ng8)));
    goto LAB90;

LAB91:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB92;

LAB93:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB97;

LAB95:    memcpy(t31, t22, 8);
    goto LAB97;

LAB98:    *((unsigned int *)t32) = 1;
    goto LAB101;

LAB100:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB101;

LAB102:    t22 = ((char*)((ng10)));
    goto LAB103;

LAB104:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB105;

LAB106:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB110;

LAB108:    memcpy(t31, t22, 8);
    goto LAB110;

LAB111:    *((unsigned int *)t32) = 1;
    goto LAB114;

LAB113:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB114;

LAB115:    t22 = ((char*)((ng12)));
    goto LAB116;

LAB117:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB118;

LAB119:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB123;

LAB121:    memcpy(t31, t22, 8);
    goto LAB123;

LAB124:    *((unsigned int *)t32) = 1;
    goto LAB127;

LAB126:    t8 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB127;

LAB128:    t22 = ((char*)((ng13)));
    goto LAB129;

LAB130:    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t31, 7, t22, 7, t33, 7);
    goto LAB136;

LAB134:    memcpy(t31, t22, 8);
    goto LAB136;

LAB138:    xsi_set_current_line(19238, ng0);
    t21 = (t0 + 2888);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t41, 0, 8);
    t29 = (t28 + 4);
    t15 = *((unsigned int *)t29);
    t16 = (~(t15));
    t17 = *((unsigned int *)t28);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t29) != 0)
        goto LAB149;

LAB150:    t34 = (t41 + 4);
    t20 = *((unsigned int *)t41);
    t23 = *((unsigned int *)t34);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB151;

LAB152:    t25 = *((unsigned int *)t41);
    t26 = (~(t25));
    t27 = *((unsigned int *)t34);
    t36 = (t26 || t27);
    if (t36 > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t34) > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t41) > 0)
        goto LAB157;

LAB158:    memcpy(t32, t39, 8);

LAB159:    t40 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t40, t32, 0, 0, 4, 0LL);
    goto LAB146;

LAB140:    xsi_set_current_line(19239, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t41, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t7) != 0)
        goto LAB162;

LAB163:    t21 = (t41 + 4);
    t14 = *((unsigned int *)t41);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB164;

LAB165:    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t21) > 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t41) > 0)
        goto LAB170;

LAB171:    memcpy(t32, t33, 8);

LAB172:    t34 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t34, t32, 0, 0, 4, 0LL);
    goto LAB146;

LAB142:    xsi_set_current_line(19240, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t41, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t7) != 0)
        goto LAB175;

LAB176:    t21 = (t41 + 4);
    t14 = *((unsigned int *)t41);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB177;

LAB178:    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t21) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t41) > 0)
        goto LAB183;

LAB184:    memcpy(t32, t33, 8);

LAB185:    t34 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t34, t32, 0, 0, 4, 0LL);
    goto LAB146;

LAB144:    xsi_set_current_line(19241, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t41, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t7) != 0)
        goto LAB188;

LAB189:    t21 = (t41 + 4);
    t14 = *((unsigned int *)t41);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB190;

LAB191:    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t21) > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t41) > 0)
        goto LAB196;

LAB197:    memcpy(t32, t33, 8);

LAB198:    t34 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t34, t32, 0, 0, 4, 0LL);
    goto LAB146;

LAB147:    *((unsigned int *)t41) = 1;
    goto LAB150;

LAB149:    t33 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB150;

LAB151:    t35 = ((char*)((ng1)));
    goto LAB152;

LAB153:    t37 = (t0 + 2088);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB154;

LAB155:    xsi_vlog_unsigned_bit_combine(t32, 4, t35, 4, t39, 4);
    goto LAB159;

LAB157:    memcpy(t32, t35, 8);
    goto LAB159;

LAB160:    *((unsigned int *)t41) = 1;
    goto LAB163;

LAB162:    t8 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB163;

LAB164:    t22 = ((char*)((ng4)));
    goto LAB165;

LAB166:    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB167;

LAB168:    xsi_vlog_unsigned_bit_combine(t32, 4, t22, 4, t33, 4);
    goto LAB172;

LAB170:    memcpy(t32, t22, 8);
    goto LAB172;

LAB173:    *((unsigned int *)t41) = 1;
    goto LAB176;

LAB175:    t8 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB176;

LAB177:    t22 = ((char*)((ng7)));
    goto LAB178;

LAB179:    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t32, 4, t22, 4, t33, 4);
    goto LAB185;

LAB183:    memcpy(t32, t22, 8);
    goto LAB185;

LAB186:    *((unsigned int *)t41) = 1;
    goto LAB189;

LAB188:    t8 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB189;

LAB190:    t22 = ((char*)((ng14)));
    goto LAB191;

LAB192:    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB193;

LAB194:    xsi_vlog_unsigned_bit_combine(t32, 4, t22, 4, t33, 4);
    goto LAB198;

LAB196:    memcpy(t32, t22, 8);
    goto LAB198;

LAB200:    xsi_set_current_line(19244, ng0);
    t21 = (t0 + 2888);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t42, 0, 8);
    t29 = (t28 + 4);
    t15 = *((unsigned int *)t29);
    t16 = (~(t15));
    t17 = *((unsigned int *)t28);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB209;

LAB210:    if (*((unsigned int *)t29) != 0)
        goto LAB211;

LAB212:    t34 = (t42 + 4);
    t20 = *((unsigned int *)t42);
    t23 = *((unsigned int *)t34);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB213;

LAB214:    t25 = *((unsigned int *)t42);
    t26 = (~(t25));
    t27 = *((unsigned int *)t34);
    t36 = (t26 || t27);
    if (t36 > 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t34) > 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t42) > 0)
        goto LAB219;

LAB220:    memcpy(t41, t39, 8);

LAB221:    t40 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t40, t41, 0, 0, 4, 0LL);
    goto LAB208;

LAB202:    xsi_set_current_line(19245, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t42, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB222;

LAB223:    if (*((unsigned int *)t7) != 0)
        goto LAB224;

LAB225:    t21 = (t42 + 4);
    t14 = *((unsigned int *)t42);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB226;

LAB227:    t17 = *((unsigned int *)t42);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t21) > 0)
        goto LAB230;

LAB231:    if (*((unsigned int *)t42) > 0)
        goto LAB232;

LAB233:    memcpy(t41, t33, 8);

LAB234:    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t41, 0, 0, 4, 0LL);
    goto LAB208;

LAB204:    xsi_set_current_line(19246, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t42, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB235;

LAB236:    if (*((unsigned int *)t7) != 0)
        goto LAB237;

LAB238:    t21 = (t42 + 4);
    t14 = *((unsigned int *)t42);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB239;

LAB240:    t17 = *((unsigned int *)t42);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t21) > 0)
        goto LAB243;

LAB244:    if (*((unsigned int *)t42) > 0)
        goto LAB245;

LAB246:    memcpy(t41, t33, 8);

LAB247:    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t41, 0, 0, 4, 0LL);
    goto LAB208;

LAB206:    xsi_set_current_line(19247, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t42, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB248;

LAB249:    if (*((unsigned int *)t7) != 0)
        goto LAB250;

LAB251:    t21 = (t42 + 4);
    t14 = *((unsigned int *)t42);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB252;

LAB253:    t17 = *((unsigned int *)t42);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB254;

LAB255:    if (*((unsigned int *)t21) > 0)
        goto LAB256;

LAB257:    if (*((unsigned int *)t42) > 0)
        goto LAB258;

LAB259:    memcpy(t41, t33, 8);

LAB260:    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t41, 0, 0, 4, 0LL);
    goto LAB208;

LAB209:    *((unsigned int *)t42) = 1;
    goto LAB212;

LAB211:    t33 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB212;

LAB213:    t35 = ((char*)((ng1)));
    goto LAB214;

LAB215:    t37 = (t0 + 1928);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB216;

LAB217:    xsi_vlog_unsigned_bit_combine(t41, 4, t35, 4, t39, 4);
    goto LAB221;

LAB219:    memcpy(t41, t35, 8);
    goto LAB221;

LAB222:    *((unsigned int *)t42) = 1;
    goto LAB225;

LAB224:    t8 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB225;

LAB226:    t22 = ((char*)((ng4)));
    goto LAB227;

LAB228:    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB229;

LAB230:    xsi_vlog_unsigned_bit_combine(t41, 4, t22, 4, t33, 4);
    goto LAB234;

LAB232:    memcpy(t41, t22, 8);
    goto LAB234;

LAB235:    *((unsigned int *)t42) = 1;
    goto LAB238;

LAB237:    t8 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB238;

LAB239:    t22 = ((char*)((ng7)));
    goto LAB240;

LAB241:    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB242;

LAB243:    xsi_vlog_unsigned_bit_combine(t41, 4, t22, 4, t33, 4);
    goto LAB247;

LAB245:    memcpy(t41, t22, 8);
    goto LAB247;

LAB248:    *((unsigned int *)t42) = 1;
    goto LAB251;

LAB250:    t8 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB251;

LAB252:    t22 = ((char*)((ng14)));
    goto LAB253;

LAB254:    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    goto LAB255;

LAB256:    xsi_vlog_unsigned_bit_combine(t41, 4, t22, 4, t33, 4);
    goto LAB260;

LAB258:    memcpy(t41, t22, 8);
    goto LAB260;

LAB261:    *((unsigned int *)t42) = 1;
    goto LAB264;

LAB263:    t7 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB264;

LAB265:    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t43, 0, 8);
    t29 = (t43 + 4);
    t33 = (t28 + 4);
    t17 = *((unsigned int *)t28);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t43) = t19;
    t20 = *((unsigned int *)t33);
    t23 = (t20 >> 7);
    t24 = (t23 & 1);
    *((unsigned int *)t29) = t24;
    goto LAB266;

LAB267:    t34 = (t0 + 2408);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    goto LAB268;

LAB269:    xsi_vlog_unsigned_bit_combine(t41, 1, t43, 1, t37, 1);
    goto LAB273;

LAB271:    memcpy(t41, t43, 8);
    goto LAB273;

}

static void Always_19253_1(char *t0)
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
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19253, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19254, ng0);
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
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(19256, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t22, 0, 8);
    t19 = (t5 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB15;

LAB12:    if (t18 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t22) = 1;

LAB15:    memset(t21, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t26) != 0)
        goto LAB18;

LAB19:    t33 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB20;

LAB21:    t38 = *((unsigned int *)t21);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t33) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t21) > 0)
        goto LAB26;

LAB27:    memcpy(t4, t42, 8);

LAB28:    t43 = (t0 + 2888);
    xsi_vlogvar_assign_value(t43, t4, 0, 0, 1);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(19254, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2888);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB11;

LAB14:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB18:    t32 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB19;

LAB20:    t37 = ((char*)((ng1)));
    goto LAB21;

LAB22:    t42 = ((char*)((ng2)));
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t4, 1, t37, 1, t42, 1);
    goto LAB28;

LAB26:    memcpy(t4, t37, 8);
    goto LAB28;

}


extern void secureip_m_00000000003637198894_2636138929_init()
{
	static char *pe[] = {(void *)Always_19210_0,(void *)Always_19253_1};
	xsi_register_didat("secureip_m_00000000003637198894_2636138929", "isim/demo_tb.exe.sim/secureip/m_00000000003637198894_2636138929.didat");
	xsi_register_executes(pe);
}
