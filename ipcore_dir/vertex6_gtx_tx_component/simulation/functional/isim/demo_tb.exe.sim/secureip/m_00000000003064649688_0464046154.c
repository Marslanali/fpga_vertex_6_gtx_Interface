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
static int ng2[] = {10, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Always_49496_0(char *t0)
{
    char t4[8];
    char t38[8];
    char t41[8];
    char t50[8];
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
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49496, ng0);
    t2 = (t0 + 7440);
    *((int *)t2) = 1;
    t3 = (t0 + 5416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49496, ng0);

LAB5:    xsi_set_current_line(49497, ng0);
    t5 = (t0 + 3104U);
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

LAB11:    xsi_set_current_line(49499, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49497, ng0);

LAB13:    xsi_set_current_line(49498, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 11, 0LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t29);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    goto LAB16;

LAB17:    xsi_set_current_line(49499, ng0);

LAB20:    xsi_set_current_line(49500, ng0);
    t39 = (t0 + 1984U);
    t40 = *((char **)t39);
    t39 = (t0 + 2144U);
    t42 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t39) = t47;
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 127U);
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & 127U);
    t51 = (t0 + 1824U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 7U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 7U);
    xsi_vlogtype_concat(t38, 11, 11, 3U, t50, 3, t41, 7, t40, 1);
    t60 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t60, t38, 0, 0, 11, 0LL);
    goto LAB19;

}

static void Always_49506_1(char *t0)
{
    char t4[8];
    char t37[8];
    char t71[8];
    char t84[8];
    char t85[8];
    char t86[8];
    char t122[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    int t94;
    char *t95;
    unsigned int t96;
    int t97;
    int t98;
    char *t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    int t108;
    unsigned int t109;
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
    char *t121;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;

LAB0:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49506, ng0);
    t2 = (t0 + 7456);
    *((int *)t2) = 1;
    t3 = (t0 + 5664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49506, ng0);

LAB5:    xsi_set_current_line(49507, ng0);
    t5 = (t0 + 2944U);
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

LAB11:    xsi_set_current_line(49509, ng0);

LAB14:    xsi_set_current_line(49510, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t2 = (t0 + 2784U);
    t6 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t12);
    t14 = (t10 | t11);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t13);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t4);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t4 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB18;

LAB19:
LAB20:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(49516, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB27;

LAB28:
LAB29:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t38 = (t36 != 0);
    if (t38 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49507, ng0);

LAB13:    xsi_set_current_line(49508, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 11, 50LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = (t5 + 4);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t4 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t3);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB20;

LAB21:    xsi_set_current_line(49510, ng0);

LAB24:    xsi_set_current_line(49511, ng0);
    t72 = (t0 + 3824);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t71, 0, 8);
    t75 = (t71 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 1);
    *((unsigned int *)t71) = t78;
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 1);
    *((unsigned int *)t75) = t80;
    t81 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t81 & 1023U);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 & 1023U);
    t83 = (t0 + 3984);
    t87 = (t0 + 3984);
    t88 = (t87 + 72U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng2)));
    t91 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t84, t85, t86, ((int*)(t89)), 2, t90, 32, 1, t91, 32, 1);
    t92 = (t84 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (!(t93));
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (!(t96));
    t98 = (t94 && t97);
    t99 = (t86 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (!(t100));
    t102 = (t98 && t101);
    if (t102 == 1)
        goto LAB25;

LAB26:    goto LAB23;

LAB25:    t103 = *((unsigned int *)t86);
    t104 = (t103 + 0);
    t105 = *((unsigned int *)t84);
    t106 = *((unsigned int *)t85);
    t107 = (t105 - t106);
    t108 = (t107 + 1);
    xsi_vlogvar_wait_assign_value(t83, t71, t104, *((unsigned int *)t85), t108, 50LL);
    goto LAB26;

LAB27:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t29 = (t23 & t22);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t30 = (t26 & t25);
    t27 = (~(t29));
    t28 = (~(t30));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t27);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t28);
    goto LAB29;

LAB30:    xsi_set_current_line(49516, ng0);

LAB33:    xsi_set_current_line(49517, ng0);
    t41 = (t0 + 3424U);
    t42 = *((char **)t41);
    memset(t71, 0, 8);
    t41 = (t42 + 4);
    t39 = *((unsigned int *)t41);
    t40 = (~(t39));
    t44 = *((unsigned int *)t42);
    t45 = (t44 & t40);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t41) != 0)
        goto LAB36;

LAB37:    t51 = (t71 + 4);
    t47 = *((unsigned int *)t71);
    t48 = *((unsigned int *)t51);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB38;

LAB39:    t111 = *((unsigned int *)t71);
    t112 = (~(t111));
    t113 = *((unsigned int *)t51);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t51) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t71) > 0)
        goto LAB44;

LAB45:    memcpy(t37, t86, 8);

LAB46:    t121 = (t0 + 3984);
    t123 = (t0 + 3984);
    t124 = (t123 + 72U);
    t125 = *((char **)t124);
    t126 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t122, t125, 2, t126, 32, 1);
    t127 = (t122 + 4);
    t128 = *((unsigned int *)t127);
    t94 = (!(t128));
    if (t94 == 1)
        goto LAB50;

LAB51:    goto LAB32;

LAB34:    *((unsigned int *)t71) = 1;
    goto LAB37;

LAB36:    t43 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB37;

LAB38:    t52 = (t0 + 3824);
    t65 = (t52 + 56U);
    t72 = *((char **)t65);
    memset(t84, 0, 8);
    t73 = (t84 + 4);
    t74 = (t72 + 4);
    t50 = *((unsigned int *)t72);
    t53 = (t50 >> 0);
    t54 = (t53 & 1);
    *((unsigned int *)t84) = t54;
    t55 = *((unsigned int *)t74);
    t57 = (t55 >> 0);
    t58 = (t57 & 1);
    *((unsigned int *)t73) = t58;
    t75 = (t0 + 2784U);
    t76 = *((char **)t75);
    t59 = *((unsigned int *)t84);
    t61 = *((unsigned int *)t76);
    t62 = (t59 & t61);
    *((unsigned int *)t85) = t62;
    t75 = (t84 + 4);
    t83 = (t76 + 4);
    t87 = (t85 + 4);
    t63 = *((unsigned int *)t75);
    t64 = *((unsigned int *)t83);
    t66 = (t63 | t64);
    *((unsigned int *)t87) = t66;
    t67 = *((unsigned int *)t87);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB39;

LAB40:    t90 = (t0 + 3824);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memset(t86, 0, 8);
    t95 = (t86 + 4);
    t99 = (t92 + 4);
    t115 = *((unsigned int *)t92);
    t116 = (t115 >> 0);
    t117 = (t116 & 1);
    *((unsigned int *)t86) = t117;
    t118 = *((unsigned int *)t99);
    t119 = (t118 >> 0);
    t120 = (t119 & 1);
    *((unsigned int *)t95) = t120;
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t37, 1, t85, 1, t86, 1);
    goto LAB46;

LAB44:    memcpy(t37, t85, 8);
    goto LAB46;

LAB47:    t69 = *((unsigned int *)t85);
    t70 = *((unsigned int *)t87);
    *((unsigned int *)t85) = (t69 | t70);
    t88 = (t84 + 4);
    t89 = (t76 + 4);
    t77 = *((unsigned int *)t84);
    t78 = (~(t77));
    t79 = *((unsigned int *)t88);
    t80 = (~(t79));
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t93 = *((unsigned int *)t89);
    t96 = (~(t93));
    t56 = (t78 & t80);
    t60 = (t82 & t96);
    t100 = (~(t56));
    t103 = (~(t60));
    t105 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t105 & t100);
    t106 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t106 & t103);
    t109 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t109 & t100);
    t110 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t110 & t103);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t121, t37, 0, *((unsigned int *)t122), 1, 50LL);
    goto LAB51;

}

static void Cont_49523_2(char *t0)
{
    char t3[8];
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

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49523, ng0);
    t2 = (t0 + 3984);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 7632);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 7472);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_49524_3(char *t0)
{
    char t3[8];
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

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49524, ng0);
    t2 = (t0 + 3984);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 127U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = (t0 + 7696);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 127U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 6);
    t27 = (t0 + 7488);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_49525_4(char *t0)
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

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49525, ng0);
    t2 = (t0 + 3984);
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
    t14 = (t0 + 7760);
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
    t27 = (t0 + 7504);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_49538_5(char *t0)
{
    char t4[8];
    char t37[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 6624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49538, ng0);
    t2 = (t0 + 7520);
    *((int *)t2) = 1;
    t3 = (t0 + 6656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49538, ng0);

LAB5:    xsi_set_current_line(49539, ng0);
    t5 = (t0 + 2944U);
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

LAB11:    xsi_set_current_line(49542, ng0);

LAB14:    xsi_set_current_line(49543, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = *((char **)t2);
    t2 = (t0 + 2784U);
    t6 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t12);
    t14 = (t10 | t11);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t13);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t4);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t4 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB18;

LAB19:
LAB20:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(49546, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49539, ng0);

LAB13:    xsi_set_current_line(49540, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    xsi_set_current_line(49541, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = (t5 + 4);
    t20 = (t6 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB17;

LAB18:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t4 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t3);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB20;

LAB21:    xsi_set_current_line(49543, ng0);

LAB24:    xsi_set_current_line(49544, ng0);
    t71 = (t0 + 1664U);
    t72 = *((char **)t71);
    t71 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t71, t72, 0, 0, 1, 50LL);
    goto LAB23;

}

static void Always_49550_6(char *t0)
{
    char t4[8];
    char t21[8];
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
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 6872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49550, ng0);
    t2 = (t0 + 7536);
    *((int *)t2) = 1;
    t3 = (t0 + 6904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49550, ng0);

LAB5:    xsi_set_current_line(49551, ng0);
    t5 = (t0 + 3104U);
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

LAB11:    xsi_set_current_line(49553, ng0);

LAB14:    xsi_set_current_line(49554, ng0);
    t2 = (t0 + 3424U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t6);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t6) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t21) > 0)
        goto LAB25;

LAB26:    memcpy(t4, t25, 8);

LAB27:    t26 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49551, ng0);

LAB13:    xsi_set_current_line(49552, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 4144);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    goto LAB20;

LAB21:    t20 = (t0 + 4304);
    t24 = (t20 + 56U);
    t25 = *((char **)t24);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 1, t19, 1, t25, 1);
    goto LAB27;

LAB25:    memcpy(t4, t19, 8);
    goto LAB27;

}

static void Cont_49558_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49558, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7552);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void secureip_m_00000000003064649688_0464046154_init()
{
	static char *pe[] = {(void *)Always_49496_0,(void *)Always_49506_1,(void *)Cont_49523_2,(void *)Cont_49524_3,(void *)Cont_49525_4,(void *)Always_49538_5,(void *)Always_49550_6,(void *)Cont_49558_7};
	xsi_register_didat("secureip_m_00000000003064649688_0464046154", "isim/demo_tb.exe.sim/secureip/m_00000000003064649688_0464046154.didat");
	xsi_register_executes(pe);
}
