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
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static int ng5[] = {100, 0};
static int ng6[] = {1, 0};
static int ng7[] = {8, 0};
static int ng8[] = {20, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {65535U, 0U};
static unsigned int ng11[] = {255U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {16U, 0U};
static unsigned int ng14[] = {65528U, 0U};
static unsigned int ng15[] = {65520U, 0U};
static unsigned int ng16[] = {65504U, 0U};
static unsigned int ng17[] = {65472U, 0U};
static unsigned int ng18[] = {4U, 0U};
static unsigned int ng19[] = {65534U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {65532U, 0U};
static unsigned int ng22[] = {6U, 0U};

static void NetReassign_16618_14(char *);
static void NetReassign_16619_15(char *);


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

LAB2:    t4 = (t1 + 2032);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(16648, ng0);

LAB5:    xsi_set_current_line(16649, ng0);
    t7 = (t1 + 8184);
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

LAB21:    t31 = (t1 + 8184);
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

static void NetDecl_16421_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 9104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16421, ng0);
    t2 = (t0 + 3944U);
    t3 = *((char **)t2);
    t2 = (t0 + 4104U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 13448);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 1U;
    t42 = t41;
    t43 = (t5 + 4);
    t44 = *((unsigned int *)t5);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 0U);
    t49 = (t0 + 13144);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Initial_16438_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(16438, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 5144);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_16448_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 9600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16448, ng0);

LAB4:    xsi_set_current_line(16449, ng0);
    t2 = (t0 + 9408);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(16450, ng0);
    t3 = (t0 + 6104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    t9 = (t6 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t9))
        goto LAB7;

LAB8:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB1;

LAB7:    *((unsigned int *)t7) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(16450, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 6104);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    goto LAB11;

}

static void Always_16457_3(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 9848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16457, ng0);
    t2 = (t0 + 13160);
    *((int *)t2) = 1;
    t3 = (t0 + 9880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16457, ng0);

LAB5:    xsi_set_current_line(16458, ng0);
    t4 = (t0 + 3144U);
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

LAB11:    xsi_set_current_line(16459, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3144U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t4, 6);
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16458, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4824);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB12;

}

static void Always_16470_4(char *t0)
{
    char t12[8];
    char t22[8];
    char t23[8];
    char t29[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    double t74;
    double t75;

LAB0:    t1 = (t0 + 10096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16470, ng0);
    t2 = (t0 + 13176);
    *((int *)t2) = 1;
    t3 = (t0 + 10128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16470, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 9904);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(16475, ng0);
    t6 = (t0 + 5624);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 4824);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_divide(t12, 32, t8, 15, t11, 32);
    t13 = (t0 + 7064);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    xsi_set_current_line(16476, ng0);
    t2 = (t0 + 4264U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t2) != 0)
        goto LAB10;

LAB11:    t5 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB12;

LAB13:    memcpy(t29, t12, 8);

LAB14:    t60 = (t29 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t29);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB22;

LAB23:
LAB24:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 9904);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t12) = 1;
    goto LAB11;

LAB10:    t4 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    t6 = (t0 + 7064);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_greatereq(t22, 32, t8, 32, t9, 32);
    memset(t23, 0, 8);
    t10 = (t22 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t10) != 0)
        goto LAB17;

LAB18:    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t23);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t13 = (t12 + 4);
    t33 = (t23 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB17:    t11 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t29) = (t40 | t41);
    t42 = (t12 + 4);
    t43 = (t23 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t23);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t58 & t54);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t55);
    goto LAB21;

LAB22:    xsi_set_current_line(16476, ng0);

LAB25:    xsi_set_current_line(16477, ng0);
    t66 = (t0 + 5624);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t0 + 4824);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_mod(t72, 32, t68, 15, t71, 32);
    t73 = (t0 + 7224);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 32);
    xsi_set_current_line(16478, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(16479, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t5) == 0)
        goto LAB26;

LAB28:    t6 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t6) = 1;

LAB29:    t7 = (t12 + 4);
    t8 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t12) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB31;

LAB30:    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 1);
    xsi_set_current_line(16480, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16481, ng0);
    xsi_set_current_line(16481, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB32:    t2 = (t0 + 7544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t4, 32, t7, 32);
    t8 = (t12 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(16490, ng0);
    t2 = (t0 + 4264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB24;

LAB26:    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB31:    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t12) = (t21 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB30;

LAB33:    xsi_set_current_line(16481, ng0);

LAB35:    xsi_set_current_line(16482, ng0);
    t9 = (t0 + 7384);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t0 + 7224);
    t33 = (t13 + 56U);
    t34 = *((char **)t33);
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t11, 32, t34, 32);
    t42 = (t0 + 7384);
    xsi_vlogvar_assign_value(t42, t22, 0, 0, 32);
    xsi_set_current_line(16483, ng0);
    t2 = (t0 + 7384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_greatereq(t12, 32, t4, 32, t7, 32);
    t8 = (t12 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(16485, ng0);

LAB44:    xsi_set_current_line(16486, ng0);
    t2 = (t0 + 7064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t74 = xsi_vlog_convert_to_real(t4, 32, 1);
    t75 = (t74 < 0.00000000000000000);
    if (t75 == 1)
        goto LAB45;

LAB46:    t74 = (t74 + 0.50000000000000000);
    t74 = ((int64)(t74));

LAB47:    t74 = (t74 * 1.0000000000000000);
    t5 = (t0 + 9904);
    xsi_process_wait(t5, t74);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB36:    xsi_set_current_line(16483, ng0);

LAB39:    xsi_set_current_line(16484, ng0);
    t9 = (t0 + 7064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng6)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t11, 32, t13, 32);
    t74 = xsi_vlog_convert_to_real(t22, 32, 1);
    t75 = (t74 < 0.00000000000000000);
    if (t75 == 1)
        goto LAB40;

LAB41:    t74 = (t74 + 0.50000000000000000);
    t74 = ((int64)(t74));

LAB42:    t74 = (t74 * 1.0000000000000000);
    t33 = (t0 + 9904);
    xsi_process_wait(t33, t74);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB38:    xsi_set_current_line(16488, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t5) == 0)
        goto LAB49;

LAB51:    t6 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t6) = 1;

LAB52:    t7 = (t12 + 4);
    t8 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t12) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB54;

LAB53:    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 1);
    xsi_set_current_line(16481, ng0);
    t2 = (t0 + 7544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 7544);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    goto LAB32;

LAB40:    t74 = 0.00000000000000000;
    goto LAB42;

LAB43:    xsi_set_current_line(16484, ng0);
    t34 = (t0 + 7384);
    t42 = (t34 + 56U);
    t43 = *((char **)t42);
    t60 = (t0 + 4824);
    t66 = (t60 + 56U);
    t67 = *((char **)t66);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t43, 32, t67, 32);
    t68 = (t0 + 7384);
    xsi_vlogvar_assign_value(t68, t23, 0, 0, 32);
    goto LAB38;

LAB45:    t74 = 0.00000000000000000;
    goto LAB47;

LAB48:    goto LAB38;

LAB49:    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB54:    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t12) = (t21 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB53;

LAB55:    xsi_set_current_line(16490, ng0);
    t4 = (t0 + 5944);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 16, t6, 16, t7, 16);
    t8 = (t0 + 5944);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 16);
    goto LAB57;

}

static void Initial_16509_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 10344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16509, ng0);

LAB4:    xsi_set_current_line(16510, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16511, ng0);
    t2 = (t0 + 10152);
    xsi_process_wait(t2, 205000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(16512, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6264);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_16515_6(char *t0)
{
    char t14[16];
    char t15[8];
    char t16[8];
    char t29[16];
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
    char *t13;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 10592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16515, ng0);

LAB4:    t2 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 10400);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(16518, ng0);

LAB7:    t4 = (t0 + 4264U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB8:    t11 = (t0 + 13192);
    *((int *)t11) = 1;
    t12 = (t0 + 10592U);
    *((char **)t12) = &&LAB7;

LAB1:    return;
LAB5:    t3 = (t0 + 10400);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    t13 = (t0 + 13192);
    *((int *)t13) = 0;
    xsi_set_current_line(16519, ng0);
    t2 = (t0 + 13208);
    *((int *)t2) = 1;
    t3 = (t0 + 10624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(16519, ng0);
    t4 = xsi_vlog_time(t14, 1.0000000000000000, 1.0000000000000000);
    t5 = (t0 + 7704);
    xsi_vlogvar_assign_value(t5, t14, 0, 0, 64);
    xsi_set_current_line(16524, ng0);
    t2 = (t0 + 10400);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(16525, ng0);
    t3 = (t0 + 6104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB15:    t13 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t13);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB16;

LAB17:    t21 = *((unsigned int *)t16);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t16) > 0)
        goto LAB22;

LAB23:    memcpy(t15, t25, 8);

LAB24:    t26 = (t0 + 7864);
    xsi_vlogvar_assign_value(t26, t15, 0, 0, 32);
    xsi_set_current_line(16526, ng0);

LAB25:    t2 = (t0 + 4264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

LAB12:    *((unsigned int *)t16) = 1;
    goto LAB15;

LAB14:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB16:    t20 = ((char*)((ng7)));
    goto LAB17;

LAB18:    t25 = ((char*)((ng8)));
    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t15, 32, t20, 32, t25, 32);
    goto LAB24;

LAB22:    memcpy(t15, t20, 8);
    goto LAB24;

LAB26:    xsi_set_current_line(16526, ng0);

LAB28:    xsi_set_current_line(16527, ng0);
    t4 = (t0 + 7864);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t11, 32, t12, 32);
    t13 = (t15 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t21 = (t19 & t18);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(16529, ng0);
    t2 = (t0 + 6264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB31:    xsi_set_current_line(16532, ng0);
    t2 = (t0 + 13224);
    *((int *)t2) = 1;
    t3 = (t0 + 10624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB29:    xsi_set_current_line(16527, ng0);

LAB32:    xsi_set_current_line(16528, ng0);
    t20 = (t0 + 7864);
    t25 = (t20 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng6)));
    memset(t16, 0, 8);
    xsi_vlog_signed_minus(t16, 32, t26, 32, t27, 32);
    t28 = (t0 + 7864);
    xsi_vlogvar_assign_value(t28, t16, 0, 0, 32);
    goto LAB31;

LAB33:    xsi_set_current_line(16529, ng0);

LAB36:    xsi_set_current_line(16530, ng0);
    t11 = (t0 + 5784);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t20 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 16, t13, 16, t20, 16);
    t25 = (t0 + 5784);
    xsi_vlogvar_assign_value(t25, t15, 0, 0, 16);
    goto LAB35;

LAB37:    xsi_set_current_line(16533, ng0);
    t4 = xsi_vlog_time(t14, 1.0000000000000000, 1.0000000000000000);
    t5 = (t0 + 7704);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_unsigned_minus(t29, 64, t14, 64, t12, 64);
    t13 = (t0 + 5624);
    xsi_vlogvar_assign_value(t13, t29, 0, 0, 15);
    xsi_set_current_line(16534, ng0);
    t2 = xsi_vlog_time(t14, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 7704);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 64);
    xsi_set_current_line(16535, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10400);
    t11 = (t0 + 2032);
    t12 = xsi_create_subprogram_invocation(t5, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 8184);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);

LAB40:    t20 = (t0 + 10496);
    t25 = *((char **)t20);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t30 = *((char **)t28);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t33 = ((int  (*)(char *, char *))t32)(t0, t25);

LAB42:    if (t33 != 0)
        goto LAB43;

LAB38:    t25 = (t0 + 2032);
    xsi_vlog_subprogram_popinvocation(t25);

LAB39:    t34 = (t0 + 10496);
    t35 = *((char **)t34);
    t34 = (t0 + 8184);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 5464);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    t39 = (t0 + 2032);
    t40 = (t0 + 10400);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    goto LAB25;

LAB41:;
LAB43:    t20 = (t0 + 10592U);
    *((char **)t20) = &&LAB40;
    goto LAB1;

}

static void Initial_16543_7(char *t0)
{
    char t17[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 10840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16543, ng0);

LAB4:    t2 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 10648);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(16545, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(16546, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(16547, ng0);

LAB7:    xsi_set_current_line(16547, ng0);
    t2 = (t0 + 13240);
    *((int *)t2) = 1;
    t3 = (t0 + 10872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t3 = (t0 + 10648);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB8:    xsi_set_current_line(16547, ng0);

LAB9:    xsi_set_current_line(16548, ng0);
    t4 = (t0 + 4264U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB7;

LAB10:    xsi_set_current_line(16548, ng0);

LAB13:    xsi_set_current_line(16549, ng0);
    t11 = (t0 + 10648);
    xsi_process_wait(t11, 1LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(16550, ng0);
    t12 = (t0 + 8024);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3304U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t14 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB15:    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t14) < *((unsigned int *)t16))
        goto LAB18;

LAB17:    *((unsigned int *)t17) = 1;

LAB18:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t17);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(16554, ng0);
    t2 = (t0 + 8024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t4, 32, t5, 32);
    t11 = (t0 + 8024);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 32);

LAB22:    goto LAB12;

LAB16:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(16550, ng0);

LAB23:    xsi_set_current_line(16551, ng0);
    t26 = ((char*)((ng6)));
    t27 = (t0 + 8024);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);
    xsi_set_current_line(16552, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t5) == 0)
        goto LAB24;

LAB26:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;

LAB27:    t12 = (t17 + 4);
    t13 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    *((unsigned int *)t17) = t22;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB28:    t29 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t29 & 1U);
    t30 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t30 & 1U);
    t14 = (t0 + 4984);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 1);
    goto LAB22;

LAB24:    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB29:    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t17) = (t23 | t24);
    t25 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t25 | t28);
    goto LAB28;

LAB30:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

}

static void Cont_16563_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 11088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16563, ng0);
    t2 = (t0 + 4264U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t41, 8);

LAB22:    t42 = (t0 + 13512);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 13256);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = ((char*)((ng2)));
    goto LAB15;

LAB16:    t39 = (t0 + 5144);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t34, 1, t41, 1);
    goto LAB22;

LAB20:    memcpy(t3, t34, 8);
    goto LAB22;

}

static void Initial_16574_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(16574, ng0);

LAB2:    xsi_set_current_line(16575, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 6424);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(16576, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 6584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_16586_10(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 11584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16586, ng0);
    t2 = (t0 + 13272);
    *((int *)t2) = 1;
    t3 = (t0 + 11616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16586, ng0);

LAB5:    xsi_set_current_line(16587, ng0);
    t5 = (t0 + 3624U);
    t6 = *((char **)t5);
    t5 = (t0 + 6104);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t8, 1, t6, 1);

LAB6:    t9 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t9, 2);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t10 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(16591, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB15:    xsi_set_current_line(16593, ng0);
    t2 = (t0 + 3784U);
    t3 = *((char **)t2);
    t2 = (t0 + 6104);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t13, 3, 3, 2U, t6, 1, t3, 2);

LAB16:    t7 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t7, 3);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng22)));
    t10 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t10 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(16601, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(16588, ng0);
    t11 = ((char*)((ng10)));
    t12 = (t0 + 6744);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    goto LAB15;

LAB9:    xsi_set_current_line(16589, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 6744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB15;

LAB11:    xsi_set_current_line(16590, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 6744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB15;

LAB17:    xsi_set_current_line(16594, ng0);
    t8 = ((char*)((ng14)));
    t9 = (t0 + 6904);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    goto LAB33;

LAB19:    xsi_set_current_line(16595, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

LAB21:    xsi_set_current_line(16596, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

LAB23:    xsi_set_current_line(16597, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

LAB25:    xsi_set_current_line(16598, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

LAB27:    xsi_set_current_line(16599, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

LAB29:    xsi_set_current_line(16600, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 6904);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 16);
    goto LAB33;

}

static void NetDecl_16605_11(char *t0)
{
    char t6[8];
    char t22[8];
    char t39[8];
    char t55[8];
    char t63[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;

LAB0:    t1 = (t0 + 11832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16605, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t63, t22, 8);

LAB14:    t91 = (t0 + 13576);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memset(t95, 0, 8);
    t96 = 1U;
    t97 = t96;
    t98 = (t63 + 4);
    t99 = *((unsigned int *)t63);
    t96 = (t96 & t99);
    t100 = *((unsigned int *)t98);
    t97 = (t97 & t100);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t102 | t96);
    t103 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t103 | t97);
    xsi_driver_vfirst_trans(t91, 0, 0U);
    t104 = (t0 + 13288);
    *((int *)t104) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 5944);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB18;

LAB15:    if (t51 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t39) = 1;

LAB18:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t56) != 0)
        goto LAB21;

LAB22:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t55) = 1;
    goto LAB22;

LAB21:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB22;

LAB23:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t22);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB25;

}

static void Always_16608_12(char *t0)
{
    char t8[8];
    char t16[8];
    char t23[8];
    char t26[8];
    char t34[8];
    char t136[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
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
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t137;

LAB0:    t1 = (t0 + 12080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16608, ng0);

LAB4:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 11888);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(16609, ng0);
    t4 = (t0 + 6744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5784);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(16610, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5944);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(16611, ng0);
    t2 = (t0 + 4104U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB8;

LAB7:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB8;

LAB9:    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(16624, ng0);
    t2 = (t0 + 11888);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    t3 = (t0 + 11888);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16611, ng0);

LAB13:    xsi_set_current_line(16616, ng0);
    t7 = ((char*)((ng9)));
    t14 = (t0 + 6424);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 2);
    xsi_set_current_line(16617, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16618, ng0);
    t2 = (t0 + 5784);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 16000);
    *((int *)t3) = 1;
    NetReassign_16618_14(t0);
    xsi_set_current_line(16619, ng0);
    t2 = (t0 + 5944);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 16004);
    *((int *)t3) = 1;
    NetReassign_16619_15(t0);
    xsi_set_current_line(16620, ng0);

LAB14:    t2 = (t0 + 4104U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB17;

LAB15:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB17:    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB18:    t7 = (t0 + 13304);
    *((int *)t7) = 1;
    t14 = (t0 + 12080U);
    *((char **)t14) = &&LAB14;
    goto LAB1;

LAB19:    t15 = (t0 + 13304);
    *((int *)t15) = 0;
    xsi_set_current_line(16621, ng0);
    t2 = (t0 + 5784);
    xsi_vlogvar_deassign(t2, 0, 15);
    xsi_set_current_line(16622, ng0);
    t2 = (t0 + 5944);
    xsi_vlogvar_deassign(t2, 0, 15);
    goto LAB12;

LAB20:    xsi_set_current_line(16625, ng0);

LAB21:    t3 = (t0 + 4424U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB24;

LAB22:    t5 = (t4 + 4);
    t6 = (t3 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB24;

LAB23:    *((unsigned int *)t8) = 1;

LAB24:    memset(t16, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t7) != 0)
        goto LAB27;

LAB28:    t15 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB29;

LAB30:    memcpy(t34, t16, 8);

LAB31:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB43;

LAB42:    t68 = (t0 + 13320);
    *((int *)t68) = 1;
    t69 = (t0 + 12080U);
    *((char **)t69) = &&LAB21;
    goto LAB1;

LAB25:    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB27:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB29:    t21 = (t0 + 4104U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t23, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t21))
        goto LAB33;

LAB32:    t24 = (t22 + 4);
    t25 = (t21 + 4);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB33;

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

LAB38:    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t26);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t16 + 4);
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

LAB33:    *((unsigned int *)t23) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t26) = 1;
    goto LAB38;

LAB37:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB38;

LAB39:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t16 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t16);
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

LAB43:    t70 = (t0 + 13320);
    *((int *)t70) = 0;
    xsi_set_current_line(16626, ng0);
    t2 = (t0 + 4104U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB46;

LAB44:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB46;

LAB45:    *((unsigned int *)t8) = 1;

LAB46:    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:
LAB49:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

LAB47:    xsi_set_current_line(16626, ng0);

LAB50:    xsi_set_current_line(16627, ng0);
    t7 = (t0 + 11888);
    xsi_process_wait(t7, 50LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(16630, ng0);
    t14 = (t0 + 5784);
    t15 = (t14 + 56U);
    t21 = *((char **)t15);
    t22 = (t0 + 5944);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t25);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t27 = (t21 + 4);
    t33 = (t25 + 4);
    t38 = (t16 + 4);
    t20 = *((unsigned int *)t27);
    t28 = *((unsigned int *)t33);
    t29 = (t20 | t28);
    *((unsigned int *)t38) = t29;
    t30 = *((unsigned int *)t38);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB52;

LAB53:
LAB54:    t48 = (t0 + 6904);
    t49 = (t48 + 56U);
    t62 = *((char **)t49);
    t51 = *((unsigned int *)t16);
    t52 = *((unsigned int *)t62);
    t54 = (t51 & t52);
    *((unsigned int *)t23) = t54;
    t68 = (t16 + 4);
    t69 = (t62 + 4);
    t70 = (t23 + 4);
    t55 = *((unsigned int *)t68);
    t56 = *((unsigned int *)t69);
    t58 = (t55 | t56);
    *((unsigned int *)t70) = t58;
    t59 = *((unsigned int *)t70);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB55;

LAB56:
LAB57:    t85 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t86 = (t23 + 4);
    t87 = (t85 + 4);
    t88 = *((unsigned int *)t23);
    t89 = *((unsigned int *)t85);
    t90 = (t88 ^ t89);
    t91 = *((unsigned int *)t86);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = (t90 | t93);
    t95 = *((unsigned int *)t86);
    t96 = *((unsigned int *)t87);
    t97 = (t95 | t96);
    t98 = (~(t97));
    t99 = (t94 & t98);
    if (t99 != 0)
        goto LAB61;

LAB58:    if (t97 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t26) = 1;

LAB61:    t101 = (t26 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t26);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(16632, ng0);

LAB73:    xsi_set_current_line(16633, ng0);
    t2 = (t0 + 6424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t28 = (t19 | t20);
    t29 = (~(t28));
    t30 = (t18 & t29);
    if (t30 != 0)
        goto LAB75;

LAB74:    if (t28 != 0)
        goto LAB76;

LAB77:    t15 = (t8 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t35 = *((unsigned int *)t8);
    t36 = (t35 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB64:    xsi_set_current_line(16635, ng0);
    t2 = (t0 + 6424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t28 = (t19 | t20);
    t29 = (~(t28));
    t30 = (t18 & t29);
    if (t30 != 0)
        goto LAB84;

LAB81:    if (t28 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t8) = 1;

LAB84:    t15 = (t8 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t35 = *((unsigned int *)t8);
    t36 = (t35 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(16636, ng0);
    t2 = (t0 + 6424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t28 = (t19 | t20);
    t29 = (~(t28));
    t30 = (t18 & t29);
    if (t30 != 0)
        goto LAB91;

LAB88:    if (t28 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t8) = 1;

LAB91:    t15 = (t8 + 4);
    t31 = *((unsigned int *)t15);
    t32 = (~(t31));
    t35 = *((unsigned int *)t8);
    t36 = (t35 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB92;

LAB93:
LAB94:
LAB87:    goto LAB49;

LAB52:    t32 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t38);
    *((unsigned int *)t16) = (t32 | t35);
    t39 = (t21 + 4);
    t40 = (t25 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (~(t36));
    t41 = *((unsigned int *)t21);
    t53 = (t41 & t37);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t25);
    t57 = (t44 & t43);
    t45 = (~(t53));
    t46 = (~(t57));
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & t45);
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & t46);
    goto LAB54;

LAB55:    t61 = *((unsigned int *)t23);
    t63 = *((unsigned int *)t70);
    *((unsigned int *)t23) = (t61 | t63);
    t71 = (t16 + 4);
    t72 = (t62 + 4);
    t64 = *((unsigned int *)t16);
    t65 = (~(t64));
    t66 = *((unsigned int *)t71);
    t67 = (~(t66));
    t73 = *((unsigned int *)t62);
    t74 = (~(t73));
    t75 = *((unsigned int *)t72);
    t76 = (~(t75));
    t77 = (t65 & t67);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t81 & t79);
    t82 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t82 & t80);
    t83 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t83 & t79);
    t84 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t84 & t80);
    goto LAB57;

LAB60:    t100 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(16630, ng0);

LAB65:    xsi_set_current_line(16631, ng0);
    t107 = (t0 + 6424);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t111 = (t109 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t109);
    t114 = *((unsigned int *)t110);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB67;

LAB66:    if (t122 != 0)
        goto LAB68;

LAB69:    t126 = (t34 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t34);
    t130 = (t129 & t128);
    t131 = (t130 != 0);
    if (t131 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB64;

LAB67:    *((unsigned int *)t34) = 1;
    goto LAB69;

LAB68:    t125 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(16631, ng0);
    t132 = (t0 + 6424);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    t135 = ((char*)((ng1)));
    memset(t136, 0, 8);
    xsi_vlog_unsigned_minus(t136, 2, t134, 2, t135, 2);
    t137 = (t0 + 6424);
    xsi_vlogvar_assign_value(t137, t136, 0, 0, 2);
    goto LAB72;

LAB75:    *((unsigned int *)t8) = 1;
    goto LAB77;

LAB76:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(16633, ng0);
    t21 = (t0 + 6424);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 2, t24, 2, t25, 2);
    t27 = (t0 + 6424);
    xsi_vlogvar_assign_value(t27, t16, 0, 0, 2);
    goto LAB80;

LAB83:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(16635, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 6584);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB87;

LAB90:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(16636, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 6584);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB94;

}

static void Cont_16640_13(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 12328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16640, ng0);
    t2 = (t0 + 6584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3464U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t5 = (t4 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 13640);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 1U;
    t44 = t43;
    t45 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans_delayed(t38, 0, 0, 50LL, 0);
    t51 = (t0 + 13336);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

}

static void NetReassign_16618_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 12576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16618, ng0);
    t3 = 0;
    t2 = (t0 + 6744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 16000);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 13352);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 5784);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 16, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 13352);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_16619_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 12824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16619, ng0);
    t3 = 0;
    t2 = (t0 + 6744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 16004);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 13368);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 5944);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 16, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 13368);
    *((int *)t8) = 1;
    goto LAB8;

}


extern void secureip_m_00000000003110253159_1164686793_init()
{
	static char *pe[] = {(void *)NetDecl_16421_0,(void *)Initial_16438_1,(void *)Initial_16448_2,(void *)Always_16457_3,(void *)Always_16470_4,(void *)Initial_16509_5,(void *)Always_16515_6,(void *)Initial_16543_7,(void *)Cont_16563_8,(void *)Initial_16574_9,(void *)Always_16586_10,(void *)NetDecl_16605_11,(void *)Always_16608_12,(void *)Cont_16640_13,(void *)NetReassign_16618_14,(void *)NetReassign_16619_15};
	static char *se[] = {(void *)sp_trigger_ev};
	xsi_register_didat("secureip_m_00000000003110253159_1164686793", "isim/demo_tb.exe.sim/secureip/m_00000000003110253159_1164686793.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
