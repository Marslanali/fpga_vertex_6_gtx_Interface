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



static void Always_30244_0(char *t0)
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

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30244, ng0);
    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    t3 = (t0 + 4456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30244, ng0);

LAB5:    xsi_set_current_line(30245, ng0);
    t5 = (t0 + 1984U);
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

LAB11:    xsi_set_current_line(30247, ng0);

LAB14:    xsi_set_current_line(30248, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30245, ng0);

LAB13:    xsi_set_current_line(30246, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 50LL);
    goto LAB12;

}

static void Always_30252_1(char *t0)
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30252, ng0);
    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    t3 = (t0 + 4704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30252, ng0);

LAB5:    xsi_set_current_line(30253, ng0);
    t5 = (t0 + 1984U);
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

LAB11:    xsi_set_current_line(30258, ng0);

LAB14:    xsi_set_current_line(30259, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 50LL);
    xsi_set_current_line(30260, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 50LL);
    xsi_set_current_line(30261, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 50LL);
    xsi_set_current_line(30262, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3344);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
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
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30253, ng0);

LAB13:    xsi_set_current_line(30254, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 50LL);
    xsi_set_current_line(30255, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 50LL);
    xsi_set_current_line(30256, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 50LL);
    xsi_set_current_line(30257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 50LL);
    goto LAB12;

LAB17:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(30262, ng0);

LAB22:    xsi_set_current_line(30263, ng0);
    t30 = (t0 + 3184);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 5, 50LL);
    goto LAB21;

}


extern void secureip_m_00000000000529868480_1616875105_init()
{
	static char *pe[] = {(void *)Always_30244_0,(void *)Always_30252_1};
	xsi_register_didat("secureip_m_00000000000529868480_1616875105", "isim/top_test_bench.exe.sim/secureip/m_00000000000529868480_1616875105.didat");
	xsi_register_executes(pe);
}
