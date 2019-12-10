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
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};



static void Always_49199_0(char *t0)
{
    char t4[8];
    char t22[8];
    char t29[8];
    char t59[8];
    char t88[8];
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
    int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
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
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    int t95;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49199, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49199, ng0);

LAB5:    xsi_set_current_line(49200, ng0);
    t5 = (t0 + 1688U);
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

LAB11:    xsi_set_current_line(49202, ng0);

LAB14:    xsi_set_current_line(49203, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(49204, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2568);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t22, t23, 2, t24, 32, 1);
    t25 = (t22 + 4);
    t15 = *((unsigned int *)t25);
    t21 = (!(t15));
    if (t21 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(49205, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2568);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t26 = (t18 >> 2);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t25 = (t0 + 2008U);
    t28 = *((char **)t25);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t28);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t25 = (t22 + 4);
    t33 = (t28 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t25);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB19;

LAB20:
LAB21:    t60 = *((unsigned int *)t4);
    t61 = *((unsigned int *)t29);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t4 + 4);
    t64 = (t29 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB22;

LAB23:
LAB24:    t87 = (t0 + 2568);
    t89 = (t0 + 2568);
    t90 = (t89 + 72U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t88, t91, 2, t92, 32, 1);
    t93 = (t88 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (!(t94));
    if (t95 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(49206, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2568);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t26 = (t18 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t25 = (t4 + 4);
    t28 = (t22 + 4);
    t33 = (t29 + 4);
    t35 = *((unsigned int *)t25);
    t36 = *((unsigned int *)t28);
    t37 = (t35 | t36);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB27;

LAB28:
LAB29:    t43 = (t0 + 2568);
    t63 = (t0 + 2568);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t73 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t59, t65, 2, t73, 32, 1);
    t74 = (t59 + 4);
    t55 = *((unsigned int *)t74);
    t78 = (!(t55));
    if (t78 == 1)
        goto LAB30;

LAB31:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49200, ng0);

LAB13:    xsi_set_current_line(49201, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 50LL);
    goto LAB12;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB16;

LAB17:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t22), 1, 50LL);
    goto LAB18;

LAB19:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t29) = (t40 | t41);
    t42 = (t22 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t21 = (t45 & t47);
    t52 = (t49 & t51);
    t53 = (~(t21));
    t54 = (~(t52));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t57 & t53);
    t58 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t58 & t54);
    goto LAB21;

LAB22:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t4 + 4);
    t74 = (t29 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t4);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t29);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB24;

LAB25:    xsi_vlogvar_wait_assign_value(t87, t59, 0, *((unsigned int *)t88), 1, 50LL);
    goto LAB26;

LAB27:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t29) = (t40 | t41);
    t34 = (t4 + 4);
    t42 = (t22 + 4);
    t44 = *((unsigned int *)t34);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t21 = (t46 & t45);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t22);
    t52 = (t49 & t48);
    t50 = (~(t21));
    t51 = (~(t52));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t50);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t51);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t43, t29, 0, *((unsigned int *)t59), 1, 50LL);
    goto LAB31;

}

static void Always_49210_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t32[8];
    char t48[8];
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
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49210, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49210, ng0);

LAB5:    xsi_set_current_line(49211, ng0);
    t5 = (t0 + 1848U);
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

LAB11:    xsi_set_current_line(49213, ng0);

LAB14:    xsi_set_current_line(49214, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2168U);
    t19 = *((char **)t13);
    memset(t23, 0, 8);
    t13 = (t19 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t19);
    t18 = (t17 & t16);
    t24 = (t18 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t13) != 0)
        goto LAB17;

LAB18:    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB19;

LAB20:    t41 = *((unsigned int *)t23);
    t42 = (~(t41));
    t43 = *((unsigned int *)t25);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t25) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t23) > 0)
        goto LAB25;

LAB26:    memcpy(t22, t48, 8);

LAB27:    xsi_vlogtype_concat(t4, 2, 2, 2U, t22, 1, t21, 1);
    t57 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t57, t4, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49211, ng0);

LAB13:    xsi_set_current_line(49212, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB17:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB18;

LAB19:    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 3);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 3);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    goto LAB20;

LAB21:    t45 = (t0 + 2568);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 0);
    t53 = (t52 & 1);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 0);
    t56 = (t55 & 1);
    *((unsigned int *)t49) = t56;
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t22, 1, t32, 1, t48, 1);
    goto LAB27;

LAB25:    memcpy(t22, t32, 8);
    goto LAB27;

}

static void Cont_49219_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49219, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4576);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4496);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void secureip_m_00000000003603792423_2334247233_init()
{
	static char *pe[] = {(void *)Always_49199_0,(void *)Always_49210_1,(void *)Cont_49219_2};
	xsi_register_didat("secureip_m_00000000003603792423_2334247233", "isim/top_test_bench.exe.sim/secureip/m_00000000003603792423_2334247233.didat");
	xsi_register_executes(pe);
}
