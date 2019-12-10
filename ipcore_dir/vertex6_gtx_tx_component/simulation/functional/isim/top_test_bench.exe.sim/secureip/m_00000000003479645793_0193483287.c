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



static void Always_20021_0(char *t0)
{
    char t6[8];
    char t30[8];
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20021, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20021, ng0);

LAB5:    xsi_set_current_line(20022, ng0);
    t4 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(20029, ng0);

LAB14:    xsi_set_current_line(20030, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(20031, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(20032, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t7 = (t3 + 4);
    t8 = (t5 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t22 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(20034, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t2) != 0)
        goto LAB20;

LAB21:    t5 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB22;

LAB23:    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t5) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t30) > 0)
        goto LAB28;

LAB29:    memcpy(t6, t22, 8);

LAB30:    t28 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(20035, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20022, ng0);

LAB13:    xsi_set_current_line(20023, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(20024, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(20025, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(20026, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(20027, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t4 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB22:    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    goto LAB23;

LAB24:    t22 = ((char*)((ng2)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t6, 1, t21, 1, t22, 1);
    goto LAB30;

LAB28:    memcpy(t6, t21, 8);
    goto LAB30;

}

static void Always_20040_1(char *t0)
{
    char t8[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20040, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20040, ng0);

LAB5:    xsi_set_current_line(20041, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(20045, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t2) == 0)
        goto LAB54;

LAB56:    t4 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t4) = 1;

LAB57:    memset(t30, 0, 8);
    t5 = (t31 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t31);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t5) != 0)
        goto LAB60;

LAB61:    t7 = (t30 + 4);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t7);
    t25 = (t21 || t22);
    if (t25 > 0)
        goto LAB62;

LAB63:    t26 = *((unsigned int *)t30);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t7) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t30) > 0)
        goto LAB68;

LAB69:    memcpy(t8, t24, 8);

LAB70:    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 8);
    t40 = (t0 + 2728);
    xsi_vlogvar_assign_value(t40, t8, 8, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20041, ng0);

LAB13:    xsi_set_current_line(20042, ng0);
    t33 = (t0 + 1368U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t34 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (~(t35));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t33) == 0)
        goto LAB14;

LAB16:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;

LAB17:    memset(t31, 0, 8);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t32);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t41) != 0)
        goto LAB20;

LAB21:    t48 = (t31 + 4);
    t49 = *((unsigned int *)t31);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB22;

LAB23:    t72 = *((unsigned int *)t31);
    t73 = (~(t72));
    t74 = *((unsigned int *)t48);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t48) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t31) > 0)
        goto LAB28;

LAB29:    memcpy(t30, t76, 8);

LAB30:    t77 = (t0 + 2728);
    xsi_vlogvar_assign_value(t77, t30, 0, 0, 1);
    xsi_set_current_line(20043, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t2) == 0)
        goto LAB34;

LAB36:    t4 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t4) = 1;

LAB37:    memset(t30, 0, 8);
    t5 = (t31 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t31);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    t7 = (t30 + 4);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t7);
    t25 = (t21 || t22);
    if (t25 > 0)
        goto LAB42;

LAB43:    t43 = *((unsigned int *)t30);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t7) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t30) > 0)
        goto LAB48;

LAB49:    memcpy(t8, t48, 8);

LAB50:    t52 = (t0 + 2408);
    xsi_vlogvar_assign_value(t52, t8, 0, 0, 8);
    goto LAB12;

LAB14:    *((unsigned int *)t32) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB20:    t47 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB21;

LAB22:    t52 = (t0 + 2728);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t0 + 2728);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t57);
    t61 = (t59 ^ t60);
    *((unsigned int *)t58) = t61;
    t62 = (t54 + 4);
    t63 = (t57 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB23;

LAB24:    t76 = ((char*)((ng2)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t30, 1, t58, 1, t76, 1);
    goto LAB30;

LAB28:    memcpy(t30, t58, 8);
    goto LAB30;

LAB31:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    goto LAB33;

LAB34:    *((unsigned int *)t31) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t30) = 1;
    goto LAB41;

LAB40:    t6 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB42:    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = (t0 + 2568);
    t33 = (t24 + 56U);
    t34 = *((char **)t33);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t34);
    t28 = (t26 ^ t27);
    *((unsigned int *)t32) = t28;
    t40 = (t23 + 4);
    t41 = (t34 + 4);
    t47 = (t32 + 4);
    t29 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t29 | t35);
    *((unsigned int *)t47) = t36;
    t37 = *((unsigned int *)t47);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB43;

LAB44:    t48 = ((char*)((ng2)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t8, 8, t32, 8, t48, 8);
    goto LAB50;

LAB48:    memcpy(t8, t32, 8);
    goto LAB50;

LAB51:    t39 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t47);
    *((unsigned int *)t32) = (t39 | t42);
    goto LAB53;

LAB54:    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t30) = 1;
    goto LAB61;

LAB60:    t6 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB61;

LAB62:    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = (t0 + 1688U);
    t33 = *((char **)t24);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 9, t23, 8, t33, 4);
    goto LAB63;

LAB64:    t24 = ((char*)((ng2)));
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t8, 9, t32, 9, t24, 9);
    goto LAB70;

LAB68:    memcpy(t8, t32, 8);
    goto LAB70;

}


extern void secureip_m_00000000003479645793_0193483287_init()
{
	static char *pe[] = {(void *)Always_20021_0,(void *)Always_20040_1};
	xsi_register_didat("secureip_m_00000000003479645793_0193483287", "isim/top_test_bench.exe.sim/secureip/m_00000000003479645793_0193483287.didat");
	xsi_register_executes(pe);
}
