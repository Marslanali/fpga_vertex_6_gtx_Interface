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
static unsigned int ng1[] = {0U, 65518U};
static unsigned int ng2[] = {25U, 0U};
static unsigned int ng3[] = {17U, 65484U};
static unsigned int ng4[] = {75U, 0U};
static unsigned int ng5[] = {51U, 65416U};
static unsigned int ng6[] = {175U, 0U};
static unsigned int ng7[] = {119U, 65280U};
static unsigned int ng8[] = {335U, 0U};
static unsigned int ng9[] = {255U, 60928U};
static unsigned int ng10[] = {605U, 0U};
static unsigned int ng11[] = {4607U, 52224U};
static unsigned int ng12[] = {655U, 0U};
static unsigned int ng13[] = {13311U, 34816U};
static unsigned int ng14[] = {755U, 0U};
static unsigned int ng15[] = {30719U, 0U};
static unsigned int ng16[] = {915U, 0U};
static unsigned int ng17[] = {65535U, 0U};
static unsigned int ng18[] = {1175U, 0U};



static void Always_20655_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20655, ng0);

LAB4:    xsi_set_current_line(20656, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);

LAB5:    t2 = ((char*)((ng1)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng9)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t4 = xsi_vlog_unsigned_case_zcompare(t3, 16, t2, 16);
    if (t4 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(20666, ng0);
    t2 = ((char*)((ng18)));
    t5 = (t0 + 2496);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 11);

LAB26:    xsi_set_current_line(20668, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t5 = (t0 + 3448);
    *((char **)t5) = t2;
    *((char **)t1) = &&LAB27;

LAB1:    return;
LAB6:    xsi_set_current_line(20657, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB8:    xsi_set_current_line(20658, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB10:    xsi_set_current_line(20659, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB12:    xsi_set_current_line(20660, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB14:    xsi_set_current_line(20661, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB16:    xsi_set_current_line(20662, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB18:    xsi_set_current_line(20663, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB20:    xsi_set_current_line(20664, ng0);
    t5 = ((char*)((ng16)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB22:    xsi_set_current_line(20665, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 2496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB26;

LAB27:    goto LAB2;

}

static void Always_20671_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    double t9;
    double t10;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20671, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20671, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = (t0 + 2336);
    t6 = (t0 + 2496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = xsi_vlog_convert_to_real(t8, 11, 2);
    t10 = (t9 < 0.00000000000000000);
    if (t10 == 1)
        goto LAB5;

LAB6:    t9 = (t9 + 0.50000000000000000);
    t9 = ((int64)(t9));

LAB7:    t9 = (t9 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, t9);
    goto LAB2;

LAB5:    t9 = 0.00000000000000000;
    goto LAB7;

}


extern void secureip_m_00000000000105894907_3360596353_init()
{
	static char *pe[] = {(void *)Always_20655_0,(void *)Always_20671_1};
	xsi_register_didat("secureip_m_00000000000105894907_3360596353", "isim/demo_tb.exe.sim/secureip/m_00000000000105894907_3360596353.didat");
	xsi_register_executes(pe);
}
