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
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {6U, 0U};



static void Always_53017_0(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
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
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53017, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53017, ng0);

LAB5:    xsi_set_current_line(53018, ng0);
    t5 = (t0 + 2808U);
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

LAB11:    xsi_set_current_line(53020, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(53024, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 4);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53018, ng0);

LAB13:    xsi_set_current_line(53019, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(53020, ng0);

LAB17:    xsi_set_current_line(53023, ng0);
    t19 = (t0 + 2488U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t23, 5, 5, 2U, t19, 1, t20, 4);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_unary_minus(t22, 5, t23, 5);
    t24 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t24, t22, 0, 0, 5, 50LL);
    goto LAB16;

LAB18:    xsi_set_current_line(53024, ng0);

LAB21:    xsi_set_current_line(53025, ng0);
    t19 = (t0 + 3208);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    memset(t22, 0, 8);
    t25 = (t22 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 31U);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 & 31U);
    t33 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 5, t22, 5, t33, 5);
    t34 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t34, t23, 0, 0, 5, 50LL);
    goto LAB20;

}

static void Always_53036_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53036, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53036, ng0);

LAB5:    xsi_set_current_line(53037, ng0);
    t5 = (t0 + 2328U);
    t6 = *((char **)t5);
    t5 = (t0 + 2168U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(53041, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(53038, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3528);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(53039, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(53040, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB15;

}

static void Always_53045_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t39[8];
    char t95[8];
    char t96[8];
    char t99[8];
    char t130[8];
    char t132[8];
    char t142[8];
    char t154[8];
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
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
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
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t131;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t155;
    char *t156;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53045, ng0);
    t2 = (t0 + 5792);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53045, ng0);

LAB5:    xsi_set_current_line(53046, ng0);
    t5 = (t0 + 2808U);
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

LAB11:    xsi_set_current_line(53048, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t21) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t21 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t0 + 1688U);
    t38 = *((char **)t20);
    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t38);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t20 = (t21 + 4);
    t43 = (t38 + 4);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t20);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t4, 0, 8);
    t70 = (t39 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t70) == 0)
        goto LAB20;

LAB22:    t76 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t76) = 1;

LAB23:    t77 = (t4 + 4);
    t78 = (t39 + 4);
    t79 = *((unsigned int *)t39);
    t80 = (~(t79));
    *((unsigned int *)t4) = t80;
    *((unsigned int *)t77) = 0;
    if (*((unsigned int *)t78) != 0)
        goto LAB25;

LAB24:    t85 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t85 & 1U);
    t86 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t86 & 1U);
    t87 = (t4 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t4);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(53052, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t22 = (t18 != 0);
    if (t22 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(53054, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t13);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB35;

LAB34:    if (t27 != 0)
        goto LAB36;

LAB37:    t20 = (t0 + 1848U);
    t38 = *((char **)t20);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t38);
    t34 = (t32 & t33);
    *((unsigned int *)t39) = t34;
    t20 = (t21 + 4);
    t43 = (t38 + 4);
    t44 = (t39 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t43);
    t37 = (t35 | t36);
    *((unsigned int *)t44) = t37;
    t40 = *((unsigned int *)t44);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB38;

LAB39:
LAB40:    t70 = (t0 + 3208);
    t76 = (t70 + 56U);
    t77 = *((char **)t76);
    memset(t96, 0, 8);
    t78 = (t96 + 4);
    t87 = (t77 + 4);
    t64 = *((unsigned int *)t77);
    t65 = (t64 >> 4);
    t66 = (t65 & 1);
    *((unsigned int *)t96) = t66;
    t67 = *((unsigned int *)t87);
    t68 = (t67 >> 4);
    t69 = (t68 & 1);
    *((unsigned int *)t78) = t69;
    memset(t95, 0, 8);
    t93 = (t96 + 4);
    t71 = *((unsigned int *)t93);
    t72 = (~(t71));
    t73 = *((unsigned int *)t96);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t93) == 0)
        goto LAB41;

LAB43:    t94 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t94) = 1;

LAB44:    t97 = (t95 + 4);
    t98 = (t96 + 4);
    t79 = *((unsigned int *)t96);
    t80 = (~(t79));
    *((unsigned int *)t95) = t80;
    *((unsigned int *)t97) = 0;
    if (*((unsigned int *)t98) != 0)
        goto LAB46;

LAB45:    t85 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t85 & 1U);
    t86 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t86 & 1U);
    t88 = *((unsigned int *)t39);
    t89 = *((unsigned int *)t95);
    t90 = (t88 & t89);
    *((unsigned int *)t99) = t90;
    t100 = (t39 + 4);
    t101 = (t95 + 4);
    t102 = (t99 + 4);
    t91 = *((unsigned int *)t100);
    t92 = *((unsigned int *)t101);
    t103 = (t91 | t92);
    *((unsigned int *)t102) = t103;
    t104 = *((unsigned int *)t102);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB47;

LAB48:
LAB49:    t124 = (t99 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB32:
LAB28:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53046, ng0);

LAB13:    xsi_set_current_line(53047, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 50LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t21) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t32);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & t33);
    goto LAB16;

LAB17:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t50 | t51);
    t52 = (t21 + 4);
    t53 = (t38 + 4);
    t54 = *((unsigned int *)t21);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t68 & t64);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    goto LAB19;

LAB20:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB25:    t81 = *((unsigned int *)t4);
    t82 = *((unsigned int *)t78);
    *((unsigned int *)t4) = (t81 | t82);
    t83 = *((unsigned int *)t77);
    t84 = *((unsigned int *)t78);
    *((unsigned int *)t77) = (t83 | t84);
    goto LAB24;

LAB26:    xsi_set_current_line(53050, ng0);

LAB29:    xsi_set_current_line(53051, ng0);
    t93 = ((char*)((ng1)));
    t94 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 6, 50LL);
    goto LAB28;

LAB30:    xsi_set_current_line(53052, ng0);

LAB33:    xsi_set_current_line(53053, ng0);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t38 = *((char **)t20);
    memset(t21, 0, 8);
    t43 = (t21 + 4);
    t44 = (t38 + 4);
    t23 = *((unsigned int *)t38);
    t24 = (t23 >> 0);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t44);
    t26 = (t25 >> 0);
    *((unsigned int *)t43) = t26;
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 63U);
    t28 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t28 & 63U);
    t52 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 6, t21, 6, t52, 6);
    t53 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t53, t39, 0, 0, 6, 50LL);
    goto LAB32;

LAB35:    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB36:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    t42 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t42 | t45);
    t52 = (t21 + 4);
    t53 = (t38 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t52);
    t49 = (~(t48));
    t50 = *((unsigned int *)t38);
    t51 = (~(t50));
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t30 = (t47 & t49);
    t31 = (t51 & t55);
    t56 = (~(t30));
    t57 = (~(t31));
    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 & t56);
    t59 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t56);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t57);
    goto LAB40;

LAB41:    *((unsigned int *)t95) = 1;
    goto LAB44;

LAB46:    t81 = *((unsigned int *)t95);
    t82 = *((unsigned int *)t98);
    *((unsigned int *)t95) = (t81 | t82);
    t83 = *((unsigned int *)t97);
    t84 = *((unsigned int *)t98);
    *((unsigned int *)t97) = (t83 | t84);
    goto LAB45;

LAB47:    t106 = *((unsigned int *)t99);
    t107 = *((unsigned int *)t102);
    *((unsigned int *)t99) = (t106 | t107);
    t108 = (t39 + 4);
    t109 = (t95 + 4);
    t110 = *((unsigned int *)t39);
    t111 = (~(t110));
    t112 = *((unsigned int *)t108);
    t113 = (~(t112));
    t114 = *((unsigned int *)t95);
    t115 = (~(t114));
    t116 = *((unsigned int *)t109);
    t117 = (~(t116));
    t62 = (t111 & t113);
    t63 = (t115 & t117);
    t118 = (~(t62));
    t119 = (~(t63));
    t120 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t120 & t118);
    t121 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t118);
    t123 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t123 & t119);
    goto LAB49;

LAB50:    xsi_set_current_line(53054, ng0);

LAB53:    xsi_set_current_line(53055, ng0);
    t131 = ((char*)((ng2)));
    t133 = (t0 + 2008U);
    t134 = *((char **)t133);
    memset(t132, 0, 8);
    t133 = (t132 + 4);
    t135 = (t134 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (t136 >> 1);
    *((unsigned int *)t132) = t137;
    t138 = *((unsigned int *)t135);
    t139 = (t138 >> 1);
    *((unsigned int *)t133) = t139;
    t140 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t140 & 15U);
    t141 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t141 & 15U);
    t143 = (t0 + 3528);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    memset(t142, 0, 8);
    t146 = (t142 + 4);
    t147 = (t145 + 4);
    t148 = *((unsigned int *)t145);
    t149 = (t148 >> 0);
    *((unsigned int *)t142) = t149;
    t150 = *((unsigned int *)t147);
    t151 = (t150 >> 0);
    *((unsigned int *)t146) = t151;
    t152 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t152 & 15U);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t153 & 15U);
    memset(t154, 0, 8);
    xsi_vlog_unsigned_add(t154, 4, t132, 4, t142, 4);
    t155 = ((char*)((ng2)));
    xsi_vlogtype_concat(t130, 6, 6, 3U, t155, 1, t154, 4, t131, 1);
    t156 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t156, t130, 0, 0, 6, 50LL);
    goto LAB52;

}

static void Cont_53059_3(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53059, ng0);
    t2 = (t0 + 3368);
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
    t14 = (t0 + 5904);
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
    t27 = (t0 + 5808);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_53060_4(char *t0)
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

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53060, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5968);
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
    t27 = (t0 + 5824);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void secureip_m_00000000000164489575_0881195001_init()
{
	static char *pe[] = {(void *)Always_53017_0,(void *)Always_53036_1,(void *)Always_53045_2,(void *)Cont_53059_3,(void *)Cont_53060_4};
	xsi_register_didat("secureip_m_00000000000164489575_0881195001", "isim/demo_tb.exe.sim/secureip/m_00000000000164489575_0881195001.didat");
	xsi_register_executes(pe);
}
