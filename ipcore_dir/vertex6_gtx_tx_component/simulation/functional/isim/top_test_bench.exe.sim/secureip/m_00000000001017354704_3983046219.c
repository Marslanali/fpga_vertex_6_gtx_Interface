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
static unsigned int ng3[] = {18U, 0U};
static unsigned int ng4[] = {32U, 0U};
static unsigned int ng5[] = {34U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {19U, 0U};
static unsigned int ng11[] = {23U, 0U};

static void NetReassign_58979_4(char *);


static int sp_trigger_ev(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(58986, ng0);

LAB5:    xsi_set_current_line(58987, ng0);
    t7 = (t1 + 3616);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    t13 = (t10 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB7;

LAB8:    memset(t6, 0, 8);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB12:    t21 = (t6 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t21) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t6) > 0)
        goto LAB19;

LAB20:    memcpy(t5, t30, 8);

LAB21:    t31 = (t1 + 3616);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t11) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB12;

LAB11:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB12;

LAB13:    t25 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t30 = ((char*)((ng2)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t5, 1, t25, 1, t30, 1);
    goto LAB21;

LAB19:    memcpy(t5, t25, 8);
    goto LAB21;

}

static void Cont_58947_0(char *t0)
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

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58947, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5944);
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

static void Cont_58948_1(char *t0)
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

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58948, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6008);
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

static void Initial_58952_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
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

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58952, ng0);

LAB4:    xsi_set_current_line(58953, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58954, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58955, ng0);

LAB6:    xsi_set_current_line(58955, ng0);
    t3 = (t0 + 4840);
    xsi_process_wait(t3, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(58955, ng0);
    t5 = (t0 + 2336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t8) == 0)
        goto LAB8;

LAB10:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB12:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 2336);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_58962_3(char *t0)
{
    char t10[8];
    char t17[8];
    char t23[8];
    char t26[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58962, ng0);

LAB4:    xsi_set_current_line(58964, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 3136);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2976);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2656);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2496);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    xsi_set_current_line(58965, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 20LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58965, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58966, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 4980LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58966, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58967, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(58967, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58968, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(58968, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58969, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(58969, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58970, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(58970, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58971, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(58971, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58972, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(58972, ng0);

LAB13:    t3 = (t0 + 1936U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t10, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB15;

LAB14:    t5 = (t4 + 4);
    t6 = (t3 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB15;

LAB16:    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB18;

LAB17:    t8 = (t0 + 5848);
    *((int *)t8) = 1;
    t9 = (t0 + 5280U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB15:    *((unsigned int *)t10) = 1;
    goto LAB16;

LAB18:    t16 = (t0 + 5848);
    *((int *)t16) = 0;
    xsi_set_current_line(58973, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 3136);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2976);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2816);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2656);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2496);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    xsi_set_current_line(58974, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(58974, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58978, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(58978, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 2976);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2816);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    t8 = (t0 + 2656);
    xsi_vlogvar_assign_value(t8, t3, 4, 0, 1);
    t9 = (t0 + 2496);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    xsi_set_current_line(58979, ng0);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(58979, ng0);
    t3 = (t0 + 1936U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB24;

LAB22:    t5 = (t4 + 4);
    t6 = (t3 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB24;

LAB23:    *((unsigned int *)t10) = 1;

LAB24:    memset(t17, 0, 8);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t7) != 0)
        goto LAB27;

LAB28:    t9 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = *((unsigned int *)t9);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB29;

LAB30:    memcpy(t34, t17, 8);

LAB31:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(58980, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5088);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3616);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);

LAB47:    t9 = (t0 + 5184);
    t16 = *((char **)t9);
    t22 = (t16 + 80U);
    t24 = *((char **)t22);
    t25 = (t24 + 272U);
    t27 = *((char **)t25);
    t33 = (t27 + 0U);
    t38 = *((char **)t33);
    t53 = ((int  (*)(char *, char *))t38)(t0, t16);

LAB49:    if (t53 != 0)
        goto LAB50;

LAB45:    t16 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB46:    t39 = (t0 + 5184);
    t40 = *((char **)t39);
    t39 = (t0 + 3616);
    t48 = (t39 + 56U);
    t49 = *((char **)t48);
    t62 = (t0 + 3456);
    xsi_vlogvar_assign_value(t62, t49, 0, 0, 1);
    t68 = (t0 + 984);
    t69 = (t0 + 5088);
    t70 = 0;
    xsi_delete_subprogram_invocation(t68, t40, t0, t69, t70);
    goto LAB1;

LAB25:    *((unsigned int *)t17) = 1;
    goto LAB28;

LAB27:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB29:    t16 = (t0 + 1936U);
    t22 = *((char **)t16);
    t16 = ((char*)((ng1)));
    memset(t23, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t16))
        goto LAB34;

LAB32:    t24 = (t22 + 4);
    t25 = (t16 + 4);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB34;

LAB33:    *((unsigned int *)t23) = 1;

LAB34:    memset(t26, 0, 8);
    t27 = (t23 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t27) != 0)
        goto LAB37;

LAB38:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t26);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t17 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB31;

LAB35:    *((unsigned int *)t26) = 1;
    goto LAB38;

LAB37:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB38;

LAB39:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t17 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t17);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t26);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB41;

LAB42:    xsi_set_current_line(58979, ng0);
    t68 = (t0 + 2816);
    xsi_set_assignedflag(t68);
    t69 = (t0 + 7588);
    *((int *)t69) = 1;
    NetReassign_58979_4(t0);
    goto LAB44;

LAB48:;
LAB50:    t9 = (t0 + 5280U);
    *((char **)t9) = &&LAB47;
    goto LAB1;

}

static void NetReassign_58979_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58979, ng0);
    t3 = 0;
    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t2 = (t0 + 7588);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 5864);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2816);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 1, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 5864);
    *((int *)t6) = 1;
    goto LAB8;

}


extern void secureip_m_00000000001017354704_3983046219_init()
{
	static char *pe[] = {(void *)Cont_58947_0,(void *)Cont_58948_1,(void *)Initial_58952_2,(void *)Initial_58962_3,(void *)NetReassign_58979_4};
	static char *se[] = {(void *)sp_trigger_ev};
	xsi_register_didat("secureip_m_00000000001017354704_3983046219", "isim/top_test_bench.exe.sim/secureip/m_00000000001017354704_3983046219.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
