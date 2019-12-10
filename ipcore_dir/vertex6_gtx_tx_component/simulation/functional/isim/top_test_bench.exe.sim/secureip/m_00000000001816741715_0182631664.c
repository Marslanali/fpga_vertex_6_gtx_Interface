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
static unsigned int ng1[] = {64U, 63U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {0U, 31U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {48U, 15U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {40U, 7U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {32U, 3U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {38U, 1U};
static unsigned int ng12[] = {37U, 0U};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {36U, 0U};
static unsigned int ng15[] = {2U, 0U};
static unsigned int ng16[] = {0U, 0U};



static void Always_40555_0(char *t0)
{
    char t4[8];
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40555, ng0);
    t2 = (t0 + 8104);
    *((int *)t2) = 1;
    t3 = (t0 + 6080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40555, ng0);

LAB5:    xsi_set_current_line(40556, ng0);
    t5 = (t0 + 2328U);
    t6 = *((char **)t5);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = (t0 + 2648U);
    t8 = *((char **)t5);
    t5 = (t0 + 2808U);
    t9 = *((char **)t5);
    t5 = (t0 + 2968U);
    t10 = *((char **)t5);
    t5 = (t0 + 3128U);
    t11 = *((char **)t5);
    t5 = (t0 + 3288U);
    t12 = *((char **)t5);
    xsi_vlogtype_concat(t4, 7, 7, 7U, t12, 1, t11, 1, t10, 1, t9, 1, t8, 1, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t5, 7);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_zcompare(t4, 7, t2, 7);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(40572, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 50LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(40563, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 3, 50LL);
    goto LAB25;

LAB9:    xsi_set_current_line(40564, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB11:    xsi_set_current_line(40565, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB13:    xsi_set_current_line(40566, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB15:    xsi_set_current_line(40567, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB17:    xsi_set_current_line(40568, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB19:    xsi_set_current_line(40569, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

LAB21:    xsi_set_current_line(40570, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB25;

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

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 8184);
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

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 8248);
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

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 8312);
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

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 8376);
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

LAB0:    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 8440);
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

LAB0:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 8504);
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

LAB0:    t1 = (t0 + 7784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 8568);
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


extern void secureip_m_00000000001816741715_0182631664_init()
{
	static char *pe[] = {(void *)Always_40555_0,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute};
	xsi_register_didat("secureip_m_00000000001816741715_0182631664", "isim/top_test_bench.exe.sim/secureip/m_00000000001816741715_0182631664.didat");
	xsi_register_executes(pe);
}
