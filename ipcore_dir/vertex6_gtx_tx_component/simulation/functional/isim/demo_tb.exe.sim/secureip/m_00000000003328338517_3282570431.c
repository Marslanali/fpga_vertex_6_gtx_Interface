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



static void Cont_54663_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t41[8];
    char t71[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54663, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t79, 8);

LAB16:    t107 = (t0 + 7128);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t111, 0, 8);
    t112 = 1U;
    t113 = t112;
    t114 = (t3 + 4);
    t115 = *((unsigned int *)t3);
    t112 = (t112 & t115);
    t116 = *((unsigned int *)t114);
    t113 = (t113 & t116);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t118 | t112);
    t119 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t119 | t113);
    xsi_driver_vfirst_trans(t107, 0, 0);
    t120 = (t0 + 6968);
    *((int *)t120) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2648U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1688U);
    t22 = *((char **)t16);
    t16 = (t0 + 2168U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t16) == 0)
        goto LAB17;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;

LAB20:    t31 = (t23 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t23) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB21:    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t22 + 4);
    t46 = (t23 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB23;

LAB24:
LAB25:    t69 = (t0 + 2008U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 4);
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t71) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 >> 0);
    t78 = (t77 & 1);
    *((unsigned int *)t69) = t78;
    t80 = *((unsigned int *)t41);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t41 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t79, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB21;

LAB23:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t22 + 4);
    t56 = (t23 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t22);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB25;

LAB26:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t41 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t41);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB28;

}

static void Cont_54667_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t41[8];
    char t69[8];
    char t72[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54667, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t97, 8);

LAB16:    t125 = (t0 + 7192);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t129, 0, 8);
    t130 = 1U;
    t131 = t130;
    t132 = (t3 + 4);
    t133 = *((unsigned int *)t3);
    t130 = (t130 & t133);
    t134 = *((unsigned int *)t132);
    t131 = (t131 & t134);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 | t130);
    t137 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t137 | t131);
    xsi_driver_vfirst_trans(t125, 0, 0);
    t138 = (t0 + 6984);
    *((int *)t138) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2648U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1688U);
    t22 = *((char **)t16);
    t16 = (t0 + 2168U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t16) == 0)
        goto LAB17;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;

LAB20:    t31 = (t23 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t23) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB21:    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t22 + 4);
    t46 = (t23 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB23;

LAB24:
LAB25:    t70 = (t0 + 2008U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 0);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t80) == 0)
        goto LAB26;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;

LAB29:    t87 = (t69 + 4);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t72);
    t90 = (~(t89));
    *((unsigned int *)t69) = t90;
    *((unsigned int *)t87) = 0;
    if (*((unsigned int *)t88) != 0)
        goto LAB31;

LAB30:    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & 1U);
    t96 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t96 & 1U);
    t98 = *((unsigned int *)t41);
    t99 = *((unsigned int *)t69);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = (t41 + 4);
    t102 = (t69 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t97, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB21;

LAB23:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t22 + 4);
    t56 = (t23 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t22);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB31:    t91 = *((unsigned int *)t69);
    t92 = *((unsigned int *)t88);
    *((unsigned int *)t69) = (t91 | t92);
    t93 = *((unsigned int *)t87);
    t94 = *((unsigned int *)t88);
    *((unsigned int *)t87) = (t93 | t94);
    goto LAB30;

LAB32:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t41 + 4);
    t112 = (t69 + 4);
    t113 = *((unsigned int *)t111);
    t114 = (~(t113));
    t115 = *((unsigned int *)t41);
    t116 = (t115 & t114);
    t117 = *((unsigned int *)t112);
    t118 = (~(t117));
    t119 = *((unsigned int *)t69);
    t120 = (t119 & t118);
    t121 = (~(t116));
    t122 = (~(t120));
    t123 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t123 & t121);
    t124 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t124 & t122);
    goto LAB34;

}

static void Cont_54671_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t41[8];
    char t69[8];
    char t72[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54671, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t97, 8);

LAB16:    t125 = (t0 + 7256);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t129, 0, 8);
    t130 = 1U;
    t131 = t130;
    t132 = (t3 + 4);
    t133 = *((unsigned int *)t3);
    t130 = (t130 & t133);
    t134 = *((unsigned int *)t132);
    t131 = (t131 & t134);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 | t130);
    t137 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t137 | t131);
    xsi_driver_vfirst_trans(t125, 0, 0);
    t138 = (t0 + 7000);
    *((int *)t138) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2648U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1688U);
    t22 = *((char **)t16);
    t16 = (t0 + 2168U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t16) == 0)
        goto LAB17;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;

LAB20:    t31 = (t23 + 4);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    *((unsigned int *)t23) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB21:    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t22 + 4);
    t46 = (t23 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB23;

LAB24:
LAB25:    t70 = (t0 + 2008U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t80) == 0)
        goto LAB26;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;

LAB29:    t87 = (t69 + 4);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t72);
    t90 = (~(t89));
    *((unsigned int *)t69) = t90;
    *((unsigned int *)t87) = 0;
    if (*((unsigned int *)t88) != 0)
        goto LAB31;

LAB30:    t95 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t95 & 1U);
    t96 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t96 & 1U);
    t98 = *((unsigned int *)t41);
    t99 = *((unsigned int *)t69);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = (t41 + 4);
    t102 = (t69 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t97, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB21;

LAB23:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t22 + 4);
    t56 = (t23 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t22);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB31:    t91 = *((unsigned int *)t69);
    t92 = *((unsigned int *)t88);
    *((unsigned int *)t69) = (t91 | t92);
    t93 = *((unsigned int *)t87);
    t94 = *((unsigned int *)t88);
    *((unsigned int *)t87) = (t93 | t94);
    goto LAB30;

LAB32:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t41 + 4);
    t112 = (t69 + 4);
    t113 = *((unsigned int *)t111);
    t114 = (~(t113));
    t115 = *((unsigned int *)t41);
    t116 = (t115 & t114);
    t117 = *((unsigned int *)t112);
    t118 = (~(t117));
    t119 = *((unsigned int *)t69);
    t120 = (t119 & t118);
    t121 = (~(t116));
    t122 = (~(t120));
    t123 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t123 & t121);
    t124 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t124 & t122);
    goto LAB34;

}

static void NetDecl_54678_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54678, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 7320);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 65535U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 15U);
    t44 = (t0 + 7016);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 3128U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 3288U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t26, 16, t31, 16);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_54679_4(char *t0)
{
    char t3[8];
    char t5[8];
    char t15[8];
    char t25[8];
    char t35[8];
    char t45[8];
    char t55[8];
    char t65[8];
    char t75[8];
    char t85[8];
    char t95[8];
    char t105[8];
    char t115[8];
    char t125[8];
    char t135[8];
    char t145[8];
    char t155[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54679, ng0);
    t2 = (t0 + 4248U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 15);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 4248U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 14);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 14);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    t23 = (t0 + 4248U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 13);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 13);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    t33 = (t0 + 4248U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 12);
    t39 = (t38 & 1);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 12);
    t42 = (t41 & 1);
    *((unsigned int *)t33) = t42;
    t43 = (t0 + 4248U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 11);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 11);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    t53 = (t0 + 4248U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 10);
    t59 = (t58 & 1);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 10);
    t62 = (t61 & 1);
    *((unsigned int *)t53) = t62;
    t63 = (t0 + 4248U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t63 = (t65 + 4);
    t66 = (t64 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 9);
    t69 = (t68 & 1);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 9);
    t72 = (t71 & 1);
    *((unsigned int *)t63) = t72;
    t73 = (t0 + 4248U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t75 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 8);
    t79 = (t78 & 1);
    *((unsigned int *)t75) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 8);
    t82 = (t81 & 1);
    *((unsigned int *)t73) = t82;
    t83 = (t0 + 4248U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t83 = (t85 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 7);
    t89 = (t88 & 1);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 7);
    t92 = (t91 & 1);
    *((unsigned int *)t83) = t92;
    t93 = (t0 + 4248U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t93 = (t95 + 4);
    t96 = (t94 + 4);
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 6);
    t99 = (t98 & 1);
    *((unsigned int *)t95) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 6);
    t102 = (t101 & 1);
    *((unsigned int *)t93) = t102;
    t103 = (t0 + 4248U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t103 = (t105 + 4);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 5);
    t109 = (t108 & 1);
    *((unsigned int *)t105) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 >> 5);
    t112 = (t111 & 1);
    *((unsigned int *)t103) = t112;
    t113 = (t0 + 4248U);
    t114 = *((char **)t113);
    memset(t115, 0, 8);
    t113 = (t115 + 4);
    t116 = (t114 + 4);
    t117 = *((unsigned int *)t114);
    t118 = (t117 >> 4);
    t119 = (t118 & 1);
    *((unsigned int *)t115) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 >> 4);
    t122 = (t121 & 1);
    *((unsigned int *)t113) = t122;
    t123 = (t0 + 4248U);
    t124 = *((char **)t123);
    memset(t125, 0, 8);
    t123 = (t125 + 4);
    t126 = (t124 + 4);
    t127 = *((unsigned int *)t124);
    t128 = (t127 >> 3);
    t129 = (t128 & 1);
    *((unsigned int *)t125) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 >> 3);
    t132 = (t131 & 1);
    *((unsigned int *)t123) = t132;
    t133 = (t0 + 4248U);
    t134 = *((char **)t133);
    memset(t135, 0, 8);
    t133 = (t135 + 4);
    t136 = (t134 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (t137 >> 2);
    t139 = (t138 & 1);
    *((unsigned int *)t135) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 >> 2);
    t142 = (t141 & 1);
    *((unsigned int *)t133) = t142;
    t143 = (t0 + 4248U);
    t144 = *((char **)t143);
    memset(t145, 0, 8);
    t143 = (t145 + 4);
    t146 = (t144 + 4);
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 1);
    t149 = (t148 & 1);
    *((unsigned int *)t145) = t149;
    t150 = *((unsigned int *)t146);
    t151 = (t150 >> 1);
    t152 = (t151 & 1);
    *((unsigned int *)t143) = t152;
    t153 = (t0 + 4248U);
    t154 = *((char **)t153);
    memset(t155, 0, 8);
    t153 = (t155 + 4);
    t156 = (t154 + 4);
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 0);
    t159 = (t158 & 1);
    *((unsigned int *)t155) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 >> 0);
    t162 = (t161 & 1);
    *((unsigned int *)t153) = t162;
    xsi_vlogtype_concat(t3, 16, 16, 16U, t155, 1, t145, 1, t135, 1, t125, 1, t115, 1, t105, 1, t95, 1, t85, 1, t75, 1, t65, 1, t55, 1, t45, 1, t35, 1, t25, 1, t15, 1, t5, 1);
    t163 = (t0 + 7384);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    memset(t167, 0, 8);
    t168 = 65535U;
    t169 = t168;
    t170 = (t3 + 4);
    t171 = *((unsigned int *)t3);
    t168 = (t168 & t171);
    t172 = *((unsigned int *)t170);
    t169 = (t169 & t172);
    t173 = (t167 + 4);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t174 | t168);
    t175 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t175 | t169);
    xsi_driver_vfirst_trans(t163, 0, 15);
    t176 = (t0 + 7032);
    *((int *)t176) = 1;

LAB1:    return;
}

static void Cont_54684_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 6648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54684, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t25 = (t0 + 7448);
    t32 = (t25 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 127U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t25, 0, 6);
    t44 = (t0 + 7048);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 3608U);
    t26 = *((char **)t25);
    goto LAB9;

LAB10:    t25 = (t0 + 1368U);
    t31 = *((char **)t25);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t26, 7, t31, 7);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}


extern void secureip_m_00000000003328338517_3282570431_init()
{
	static char *pe[] = {(void *)Cont_54663_0,(void *)Cont_54667_1,(void *)Cont_54671_2,(void *)NetDecl_54678_3,(void *)Cont_54679_4,(void *)Cont_54684_5};
	xsi_register_didat("secureip_m_00000000003328338517_3282570431", "isim/demo_tb.exe.sim/secureip/m_00000000003328338517_3282570431.didat");
	xsi_register_executes(pe);
}
