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
static unsigned int ng2[] = {8U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {0U, 0U};



static void Always_19797_0(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19797, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19798, ng0);

LAB5:    xsi_set_current_line(19799, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(19805, ng0);

LAB116:    xsi_set_current_line(19805, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(19805, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB19:    xsi_set_current_line(19807, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t2) != 0)
        goto LAB119;

LAB120:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB121;

LAB122:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t9) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t8) > 0)
        goto LAB127;

LAB128:    memcpy(t7, t27, 8);

LAB129:    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 5);
    xsi_set_current_line(19808, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t2) != 0)
        goto LAB132;

LAB133:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB134;

LAB135:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t9) > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t8) > 0)
        goto LAB140;

LAB141:    memcpy(t7, t27, 8);

LAB142:    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 5);
    goto LAB2;

LAB7:    xsi_set_current_line(19800, ng0);

LAB20:    xsi_set_current_line(19800, ng0);
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
        goto LAB21;

LAB22:    if (*((unsigned int *)t9) != 0)
        goto LAB23;

LAB24:    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB25;

LAB26:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t17) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t8) > 0)
        goto LAB31;

LAB32:    memcpy(t7, t26, 8);

LAB33:    t27 = (t0 + 2248);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 5);
    xsi_set_current_line(19800, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t2) != 0)
        goto LAB36;

LAB37:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB38;

LAB39:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t9) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t8) > 0)
        goto LAB44;

LAB45:    memcpy(t7, t16, 8);

LAB46:    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 5);
    goto LAB19;

LAB9:    xsi_set_current_line(19801, ng0);

LAB47:    xsi_set_current_line(19801, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t3) != 0)
        goto LAB50;

LAB51:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB52;

LAB53:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t10);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) > 0)
        goto LAB58;

LAB59:    memcpy(t7, t17, 8);

LAB60:    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 5);
    xsi_set_current_line(19801, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t2) != 0)
        goto LAB63;

LAB64:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB65;

LAB66:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t9) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t8) > 0)
        goto LAB71;

LAB72:    memcpy(t7, t16, 8);

LAB73:    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 5);
    goto LAB19;

LAB11:    xsi_set_current_line(19802, ng0);

LAB74:    xsi_set_current_line(19802, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    xsi_set_current_line(19802, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t2) != 0)
        goto LAB77;

LAB78:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB79;

LAB80:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t9) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t8) > 0)
        goto LAB85;

LAB86:    memcpy(t7, t16, 8);

LAB87:    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 5);
    goto LAB19;

LAB13:    xsi_set_current_line(19803, ng0);

LAB88:    xsi_set_current_line(19803, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    xsi_set_current_line(19803, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB19;

LAB15:    xsi_set_current_line(19804, ng0);

LAB89:    xsi_set_current_line(19804, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t3) != 0)
        goto LAB92;

LAB93:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB94;

LAB95:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t10);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t10) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t8) > 0)
        goto LAB100;

LAB101:    memcpy(t7, t17, 8);

LAB102:    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 5);
    xsi_set_current_line(19804, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t2) != 0)
        goto LAB105;

LAB106:    t9 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB107;

LAB108:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t9) > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t8) > 0)
        goto LAB113;

LAB114:    memcpy(t7, t16, 8);

LAB115:    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 5);
    goto LAB19;

LAB21:    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB23:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB24;

LAB25:    t21 = ((char*)((ng2)));
    goto LAB26;

LAB27:    t26 = ((char*)((ng3)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t7, 5, t21, 5, t26, 5);
    goto LAB33;

LAB31:    memcpy(t7, t21, 8);
    goto LAB33;

LAB34:    *((unsigned int *)t8) = 1;
    goto LAB37;

LAB36:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB38:    t10 = ((char*)((ng3)));
    goto LAB39;

LAB40:    t16 = ((char*)((ng4)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t7, 5, t10, 5, t16, 5);
    goto LAB46;

LAB44:    memcpy(t7, t10, 8);
    goto LAB46;

LAB48:    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB50:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB52:    t16 = ((char*)((ng5)));
    goto LAB53;

LAB54:    t17 = ((char*)((ng2)));
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t7, 5, t16, 5, t17, 5);
    goto LAB60;

LAB58:    memcpy(t7, t16, 8);
    goto LAB60;

LAB61:    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB63:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB64;

LAB65:    t10 = ((char*)((ng2)));
    goto LAB66;

LAB67:    t16 = ((char*)((ng3)));
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t7, 5, t10, 5, t16, 5);
    goto LAB73;

LAB71:    memcpy(t7, t10, 8);
    goto LAB73;

LAB75:    *((unsigned int *)t8) = 1;
    goto LAB78;

LAB77:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB78;

LAB79:    t10 = ((char*)((ng5)));
    goto LAB80;

LAB81:    t16 = ((char*)((ng2)));
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t7, 5, t10, 5, t16, 5);
    goto LAB87;

LAB85:    memcpy(t7, t10, 8);
    goto LAB87;

LAB90:    *((unsigned int *)t8) = 1;
    goto LAB93;

LAB92:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB93;

LAB94:    t16 = ((char*)((ng3)));
    goto LAB95;

LAB96:    t17 = ((char*)((ng6)));
    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t7, 5, t16, 5, t17, 5);
    goto LAB102;

LAB100:    memcpy(t7, t16, 8);
    goto LAB102;

LAB103:    *((unsigned int *)t8) = 1;
    goto LAB106;

LAB105:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB106;

LAB107:    t10 = ((char*)((ng4)));
    goto LAB108;

LAB109:    t16 = ((char*)((ng6)));
    goto LAB110;

LAB111:    xsi_vlog_unsigned_bit_combine(t7, 5, t10, 5, t16, 5);
    goto LAB115;

LAB113:    memcpy(t7, t10, 8);
    goto LAB115;

LAB117:    *((unsigned int *)t8) = 1;
    goto LAB120;

LAB119:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB120;

LAB121:    t10 = (t0 + 2248);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    goto LAB122;

LAB123:    t21 = (t0 + 2088);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t7, 5, t17, 5, t27, 5);
    goto LAB129;

LAB127:    memcpy(t7, t17, 8);
    goto LAB129;

LAB130:    *((unsigned int *)t8) = 1;
    goto LAB133;

LAB132:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB133;

LAB134:    t10 = (t0 + 2088);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    goto LAB135;

LAB136:    t21 = (t0 + 2248);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    goto LAB137;

LAB138:    xsi_vlog_unsigned_bit_combine(t7, 5, t17, 5, t27, 5);
    goto LAB142;

LAB140:    memcpy(t7, t17, 8);
    goto LAB142;

}


extern void secureip_m_00000000003987960367_2601583853_init()
{
	static char *pe[] = {(void *)Always_19797_0};
	xsi_register_didat("secureip_m_00000000003987960367_2601583853", "isim/top_test_bench.exe.sim/secureip/m_00000000003987960367_2601583853.didat");
	xsi_register_executes(pe);
}
