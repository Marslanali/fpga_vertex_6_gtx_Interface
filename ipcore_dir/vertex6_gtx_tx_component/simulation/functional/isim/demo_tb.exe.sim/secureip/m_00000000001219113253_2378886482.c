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
static unsigned int ng3[] = {6U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {0, 0};



static void Always_55979_0(char *t0)
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

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55979, ng0);
    t2 = (t0 + 8208);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55979, ng0);

LAB5:    xsi_set_current_line(55980, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(55982, ng0);

LAB14:    xsi_set_current_line(55983, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55980, ng0);

LAB13:    xsi_set_current_line(55981, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

}

static void Cont_55987_1(char *t0)
{
    char t3[8];
    char t24[8];
    char t36[8];
    char t47[8];
    char t74[8];
    char t106[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    char *t23;
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
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
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
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55987, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 3368);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 2);
    t29 = (t28 & 1);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 2);
    t32 = (t31 & 1);
    *((unsigned int *)t25) = t32;
    t33 = (t0 + 3368);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t37) = t44;
    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t45 = (t36 + 4);
    t51 = (t46 + 4);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB10;

LAB11:
LAB12:    t75 = *((unsigned int *)t24);
    t76 = *((unsigned int *)t47);
    t77 = (t75 & t76);
    *((unsigned int *)t74) = t77;
    t78 = (t24 + 4);
    t79 = (t47 + 4);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t78);
    t82 = *((unsigned int *)t79);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB13;

LAB14:
LAB15:    t107 = *((unsigned int *)t3);
    t108 = *((unsigned int *)t74);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = (t3 + 4);
    t111 = (t74 + 4);
    t112 = (t106 + 4);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 != 0);
    if (t117 == 1)
        goto LAB16;

LAB17:
LAB18:    t134 = (t0 + 8448);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    memset(t138, 0, 8);
    t139 = 1U;
    t140 = t139;
    t141 = (t106 + 4);
    t142 = *((unsigned int *)t106);
    t139 = (t139 & t142);
    t143 = *((unsigned int *)t141);
    t140 = (t140 & t143);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t145 | t139);
    t146 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t146 | t140);
    xsi_driver_vfirst_trans_delayed(t134, 0, 0, 50LL, 0);
    t147 = (t0 + 8224);
    *((int *)t147) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    t58 = *((unsigned int *)t47);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t47) = (t58 | t59);
    t60 = (t36 + 4);
    t61 = (t46 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t46);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB12;

LAB13:    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t74) = (t86 | t87);
    t88 = (t24 + 4);
    t89 = (t47 + 4);
    t90 = *((unsigned int *)t24);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (~(t92));
    t94 = *((unsigned int *)t47);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (~(t96));
    t98 = (t91 & t93);
    t99 = (t95 & t97);
    t100 = (~(t98));
    t101 = (~(t99));
    t102 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t102 & t100);
    t103 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t103 & t101);
    t104 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t104 & t100);
    t105 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t105 & t101);
    goto LAB15;

LAB16:    t118 = *((unsigned int *)t106);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t106) = (t118 | t119);
    t120 = (t3 + 4);
    t121 = (t74 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t3);
    t125 = (t124 & t123);
    t126 = *((unsigned int *)t121);
    t127 = (~(t126));
    t128 = *((unsigned int *)t74);
    t129 = (t128 & t127);
    t130 = (~(t125));
    t131 = (~(t129));
    t132 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t132 & t130);
    t133 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t133 & t131);
    goto LAB18;

}

static void Always_55991_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t27[8];
    char t34[8];
    char t74[8];
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
    char *t25;
    char *t26;
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
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55991, ng0);
    t2 = (t0 + 8240);
    *((int *)t2) = 1;
    t3 = (t0 + 5936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55991, ng0);

LAB5:    xsi_set_current_line(55992, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(55994, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB21:    t20 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB22;

LAB23:    memcpy(t34, t21, 8);

LAB24:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(55996, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB34:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55992, ng0);

LAB13:    xsi_set_current_line(55993, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 50LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB20:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB22:    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t25) != 0)
        goto LAB27;

LAB28:    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t27);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t21 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB28;

LAB27:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB28;

LAB29:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t21 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t21);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB31;

LAB32:    xsi_set_current_line(55994, ng0);

LAB35:    xsi_set_current_line(55995, ng0);
    t72 = ((char*)((ng1)));
    t73 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 3, 50LL);
    goto LAB34;

LAB36:    xsi_set_current_line(55996, ng0);

LAB39:    xsi_set_current_line(55997, ng0);
    t5 = (t0 + 2488U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(55999, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t13) != 0)
        goto LAB46;

LAB47:    t20 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t20);
    t28 = (t23 || t24);
    if (t28 > 0)
        goto LAB48;

LAB49:    memcpy(t74, t21, 8);

LAB50:    t73 = (t74 + 4);
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(56001, ng0);

LAB66:    xsi_set_current_line(56002, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 50LL);

LAB64:
LAB42:    goto LAB38;

LAB40:    xsi_set_current_line(55997, ng0);

LAB43:    xsi_set_current_line(55998, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 3, 50LL);
    goto LAB42;

LAB44:    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB46:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB47;

LAB48:    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t35 = (t32 & 1U);
    if (t35 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t25) == 0)
        goto LAB51;

LAB53:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;

LAB54:    memset(t34, 0, 8);
    t38 = (t27 + 4);
    t36 = *((unsigned int *)t38);
    t37 = (~(t36));
    t41 = *((unsigned int *)t27);
    t42 = (t41 & t37);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t38) != 0)
        goto LAB57;

LAB58:    t44 = *((unsigned int *)t21);
    t45 = *((unsigned int *)t34);
    t46 = (t44 & t45);
    *((unsigned int *)t74) = t46;
    t40 = (t21 + 4);
    t48 = (t34 + 4);
    t49 = (t74 + 4);
    t47 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t47 | t50);
    *((unsigned int *)t49) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB51:    *((unsigned int *)t27) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t34) = 1;
    goto LAB58;

LAB57:    t39 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB58;

LAB59:    t54 = *((unsigned int *)t74);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t74) = (t54 | t55);
    t66 = (t21 + 4);
    t72 = (t34 + 4);
    t56 = *((unsigned int *)t21);
    t57 = (~(t56));
    t60 = *((unsigned int *)t66);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t72);
    t65 = (~(t64));
    t58 = (t57 & t61);
    t59 = (t63 & t65);
    t67 = (~(t58));
    t68 = (~(t59));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    t71 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t71 & t67);
    t75 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t75 & t68);
    goto LAB61;

LAB62:    xsi_set_current_line(55999, ng0);

LAB65:    xsi_set_current_line(56000, ng0);
    t81 = ((char*)((ng3)));
    t82 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 3, 50LL);
    goto LAB64;

}

static void Always_56016_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t36[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56016, ng0);
    t2 = (t0 + 8256);
    *((int *)t2) = 1;
    t3 = (t0 + 6184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56016, ng0);

LAB5:    xsi_set_current_line(56017, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(56019, ng0);

LAB14:    xsi_set_current_line(56020, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t22, 0, 8);
    t6 = (t22 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t22);
    t18 = (t17 & t16);
    t23 = (t18 & 1U);
    if (t23 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t13) == 0)
        goto LAB15;

LAB17:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;

LAB18:    t20 = (t21 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    *((unsigned int *)t21) = t26;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB20;

LAB19:    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 1U);
    t32 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t32 & 1U);
    t33 = (t0 + 3528);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t37) = t44;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t36, 1, t21, 1);
    t45 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t45, t4, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56017, ng0);

LAB13:    xsi_set_current_line(56018, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB20:    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t21) = (t27 | t28);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t20) = (t29 | t30);
    goto LAB19;

}

static void Always_56024_4(char *t0)
{
    char t4[8];
    char t21[8];
    char t27[8];
    char t34[8];
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
    char *t25;
    char *t26;
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
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56024, ng0);
    t2 = (t0 + 8272);
    *((int *)t2) = 1;
    t3 = (t0 + 6432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56024, ng0);

LAB5:    xsi_set_current_line(56025, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(56027, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB21:    t20 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB22;

LAB23:    memcpy(t34, t21, 8);

LAB24:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(56029, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB34:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56025, ng0);

LAB13:    xsi_set_current_line(56026, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB20:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB22:    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t25) != 0)
        goto LAB27;

LAB28:    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t27);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t21 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB28;

LAB27:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB28;

LAB29:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t21 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t21);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB31;

LAB32:    xsi_set_current_line(56027, ng0);

LAB35:    xsi_set_current_line(56028, ng0);
    t72 = ((char*)((ng6)));
    t73 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 2, 50LL);
    goto LAB34;

LAB36:    xsi_set_current_line(56029, ng0);

LAB39:    xsi_set_current_line(56030, ng0);
    t5 = (t0 + 3208);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t27, 0, 8);
    t13 = (t27 + 4);
    t19 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t19);
    t18 = (t17 >> 1);
    t22 = (t18 & 1);
    *((unsigned int *)t13) = t22;
    memset(t21, 0, 8);
    t20 = (t27 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t28 = *((unsigned int *)t27);
    t29 = (t28 & t24);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t20) == 0)
        goto LAB40;

LAB42:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;

LAB43:    t26 = (t21 + 4);
    t33 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (~(t31));
    *((unsigned int *)t21) = t32;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB45;

LAB44:    t42 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t42 & 1U);
    t43 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t43 & 1U);
    t38 = (t0 + 3208);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t34, 0, 8);
    t48 = (t34 + 4);
    t49 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t34) = t46;
    t47 = *((unsigned int *)t49);
    t50 = (t47 >> 0);
    t51 = (t50 & 1);
    *((unsigned int *)t48) = t51;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t34, 1, t21, 1);
    t66 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t66, t4, 0, 0, 2, 50LL);
    goto LAB38;

LAB40:    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB45:    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t33);
    *((unsigned int *)t21) = (t35 | t36);
    t37 = *((unsigned int *)t26);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t26) = (t37 | t41);
    goto LAB44;

}

static void Cont_56036_5(char *t0)
{
    char t3[8];
    char t14[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
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

LAB0:    t1 = (t0 + 6648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56036, ng0);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t15 = (t0 + 3208);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 3U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 3U);
    memset(t26, 0, 8);
    t27 = (t3 + 4);
    t28 = (t14 + 4);
    t29 = *((unsigned int *)t3);
    t30 = *((unsigned int *)t14);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB7;

LAB4:    if (t38 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t26) = 1;

LAB7:    t42 = (t0 + 8512);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t26);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 8288);
    *((int *)t55) = 1;

LAB1:    return;
LAB6:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB7;

}

static void Always_56046_6(char *t0)
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
    int t21;
    char *t22;

LAB0:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56046, ng0);
    t2 = (t0 + 8304);
    *((int *)t2) = 1;
    t3 = (t0 + 6928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56046, ng0);

LAB5:    xsi_set_current_line(56047, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(56050, ng0);

LAB16:    xsi_set_current_line(56051, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(56052, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    t12 = (t0 + 3048);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB17;

LAB18:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56047, ng0);

LAB13:    xsi_set_current_line(56048, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    xsi_set_current_line(56049, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    t5 = (t0 + 3048);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB15;

LAB17:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB18;

}

static void Always_56100_7(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t27[8];
    char t44[8];
    char t56[8];
    char t65[8];
    char t69[8];
    char t95[8];
    char t130[8];
    char t139[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;

LAB0:    t1 = (t0 + 7144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56100, ng0);
    t2 = (t0 + 8320);
    *((int *)t2) = 1;
    t3 = (t0 + 7176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56100, ng0);

LAB5:    xsi_set_current_line(56101, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(56106, ng0);

LAB14:    xsi_set_current_line(56107, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 3U);
    t13 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 50LL);
    xsi_set_current_line(56108, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(56109, ng0);
    t2 = (t0 + 4168);
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
    t13 = (t0 + 4168);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t25 = (t18 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t23) = t26;
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 ^ t29);
    *((unsigned int *)t27) = t30;
    t31 = (t21 + 4);
    t32 = (t22 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    t41 = (t0 + 4168);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t43 + 4);
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 1);
    t49 = (t48 & 1);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 1);
    t52 = (t51 & 1);
    *((unsigned int *)t45) = t52;
    t53 = (t0 + 4328);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 1);
    t61 = (t60 & 1);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 1);
    t64 = (t63 & 1);
    *((unsigned int *)t57) = t64;
    t66 = (t0 + 4168);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 1);
    t74 = (t73 & 1);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 1);
    t77 = (t76 & 1);
    *((unsigned int *)t70) = t77;
    memset(t65, 0, 8);
    t78 = (t69 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t69);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t78) == 0)
        goto LAB18;

LAB20:    t84 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t84) = 1;

LAB21:    t85 = (t65 + 4);
    t86 = (t69 + 4);
    t87 = *((unsigned int *)t69);
    t88 = (~(t87));
    *((unsigned int *)t65) = t88;
    *((unsigned int *)t85) = 0;
    if (*((unsigned int *)t86) != 0)
        goto LAB23;

LAB22:    t93 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t93 & 1U);
    t94 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t94 & 1U);
    t96 = *((unsigned int *)t56);
    t97 = *((unsigned int *)t65);
    t98 = (t96 & t97);
    *((unsigned int *)t95) = t98;
    t99 = (t56 + 4);
    t100 = (t65 + 4);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB24;

LAB25:
LAB26:    t127 = (t0 + 4328);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t130, 0, 8);
    t131 = (t130 + 4);
    t132 = (t129 + 4);
    t133 = *((unsigned int *)t129);
    t134 = (t133 >> 2);
    t135 = (t134 & 1);
    *((unsigned int *)t130) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 2);
    t138 = (t137 & 1);
    *((unsigned int *)t131) = t138;
    t140 = *((unsigned int *)t95);
    t141 = *((unsigned int *)t130);
    t142 = (t140 ^ t141);
    *((unsigned int *)t139) = t142;
    t143 = (t95 + 4);
    t144 = (t130 + 4);
    t145 = (t139 + 4);
    t146 = *((unsigned int *)t143);
    t147 = *((unsigned int *)t144);
    t148 = (t146 | t147);
    *((unsigned int *)t145) = t148;
    t149 = *((unsigned int *)t145);
    t150 = (t149 != 0);
    if (t150 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_vlogtype_concat(t4, 3, 3, 3U, t139, 1, t44, 1, t27, 1);
    t153 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t153, t4, 0, 0, 3, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56101, ng0);

LAB13:    xsi_set_current_line(56102, ng0);
    t19 = ((char*)((ng6)));
    t20 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    xsi_set_current_line(56103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(56104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 50LL);
    goto LAB12;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    goto LAB17;

LAB18:    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB23:    t89 = *((unsigned int *)t65);
    t90 = *((unsigned int *)t86);
    *((unsigned int *)t65) = (t89 | t90);
    t91 = *((unsigned int *)t85);
    t92 = *((unsigned int *)t86);
    *((unsigned int *)t85) = (t91 | t92);
    goto LAB22;

LAB24:    t107 = *((unsigned int *)t95);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t95) = (t107 | t108);
    t109 = (t56 + 4);
    t110 = (t65 + 4);
    t111 = *((unsigned int *)t56);
    t112 = (~(t111));
    t113 = *((unsigned int *)t109);
    t114 = (~(t113));
    t115 = *((unsigned int *)t65);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (~(t117));
    t119 = (t112 & t114);
    t120 = (t116 & t118);
    t121 = (~(t119));
    t122 = (~(t120));
    t123 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t123 & t121);
    t124 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t124 & t122);
    t125 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t125 & t121);
    t126 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t126 & t122);
    goto LAB26;

LAB27:    t151 = *((unsigned int *)t139);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t139) = (t151 | t152);
    goto LAB29;

}

static void Always_56121_8(char *t0)
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

LAB0:    t1 = (t0 + 7392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56121, ng0);
    t2 = (t0 + 8336);
    *((int *)t2) = 1;
    t3 = (t0 + 7424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56121, ng0);

LAB5:    xsi_set_current_line(56122, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(56124, ng0);

LAB14:    xsi_set_current_line(56125, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 3, t6, 32);
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 3, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56122, ng0);

LAB13:    xsi_set_current_line(56123, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 50LL);
    goto LAB12;

}

static void Cont_56135_9(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 7640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56135, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 3, t4, 3, t7, 3);
    t9 = (t0 + 8576);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 7U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans_delayed(t9, 0, 2, 50LL, 0);
    t22 = (t0 + 8352);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_56137_10(char *t0)
{
    char t4[8];
    char t21[8];
    char t34[8];
    char t41[8];
    char t49[8];
    char t64[8];
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56137, ng0);
    t2 = (t0 + 8368);
    *((int *)t2) = 1;
    t3 = (t0 + 7920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56137, ng0);

LAB5:    xsi_set_current_line(56138, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(56140, ng0);
    t2 = (t0 + 3048);
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
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t27 = (t18 & 1U);
    if (t27 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t13) == 0)
        goto LAB16;

LAB18:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB19:    t20 = (t4 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56138, ng0);

LAB13:    xsi_set_current_line(56139, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3048);
    t22 = (t0 + 3048);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t21, t24, 2, t25, 32, 1);
    t26 = (t21 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    if (t28 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t21), 1, 50LL);
    goto LAB15;

LAB16:    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(56140, ng0);

LAB23:    xsi_set_current_line(56143, ng0);
    t22 = (t0 + 2648U);
    t23 = *((char **)t22);
    memset(t34, 0, 8);
    t22 = (t34 + 4);
    t24 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t36 = (t35 >> 2);
    t37 = (t36 & 1);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t24);
    t39 = (t38 >> 2);
    t40 = (t39 & 1);
    *((unsigned int *)t22) = t40;
    t25 = (t0 + 2648U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t42 = (t26 + 4);
    t43 = *((unsigned int *)t26);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 1);
    t48 = (t47 & 1);
    *((unsigned int *)t25) = t48;
    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t41);
    t52 = (t50 ^ t51);
    *((unsigned int *)t49) = t52;
    t53 = (t34 + 4);
    t54 = (t41 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB24;

LAB25:
LAB26:    t63 = (t0 + 3048);
    t65 = (t0 + 3048);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t64, t67, 2, t68, 32, 1);
    t69 = (t64 + 4);
    t70 = *((unsigned int *)t69);
    t28 = (!(t70));
    if (t28 == 1)
        goto LAB27;

LAB28:    goto LAB22;

LAB24:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    goto LAB26;

LAB27:    xsi_vlogvar_wait_assign_value(t63, t49, 0, *((unsigned int *)t64), 1, 50LL);
    goto LAB28;

}


extern void secureip_m_00000000001219113253_2378886482_init()
{
	static char *pe[] = {(void *)Always_55979_0,(void *)Cont_55987_1,(void *)Always_55991_2,(void *)Always_56016_3,(void *)Always_56024_4,(void *)Cont_56036_5,(void *)Always_56046_6,(void *)Always_56100_7,(void *)Always_56121_8,(void *)Cont_56135_9,(void *)Always_56137_10};
	xsi_register_didat("secureip_m_00000000001219113253_2378886482", "isim/demo_tb.exe.sim/secureip/m_00000000001219113253_2378886482.didat");
	xsi_register_executes(pe);
}
