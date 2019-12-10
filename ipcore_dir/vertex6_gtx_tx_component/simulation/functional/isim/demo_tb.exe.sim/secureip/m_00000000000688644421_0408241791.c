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
static int ng2[] = {2, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Always_23682_0(char *t0)
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

LAB0:    t1 = (t0 + 20304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23682, ng0);
    t2 = (t0 + 25584);
    *((int *)t2) = 1;
    t3 = (t0 + 20336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23682, ng0);

LAB5:    xsi_set_current_line(23683, ng0);
    t5 = (t0 + 3304U);
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

LAB11:    xsi_set_current_line(23696, ng0);
    t2 = (t0 + 8424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(23712, ng0);

LAB18:    xsi_set_current_line(23713, ng0);
    t2 = (t0 + 9224U);
    t3 = *((char **)t2);
    t2 = (t0 + 16664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23714, ng0);
    t2 = (t0 + 9384U);
    t3 = *((char **)t2);
    t2 = (t0 + 16824);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23715, ng0);
    t2 = (t0 + 9544U);
    t3 = *((char **)t2);
    t2 = (t0 + 16984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23716, ng0);
    t2 = (t0 + 9864U);
    t3 = *((char **)t2);
    t2 = (t0 + 17144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23717, ng0);
    t2 = (t0 + 10024U);
    t3 = *((char **)t2);
    t2 = (t0 + 17304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23718, ng0);
    t2 = (t0 + 10184U);
    t3 = *((char **)t2);
    t2 = (t0 + 17464);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23719, ng0);
    t2 = (t0 + 10504U);
    t3 = *((char **)t2);
    t2 = (t0 + 17624);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23720, ng0);
    t2 = (t0 + 10664U);
    t3 = *((char **)t2);
    t2 = (t0 + 17784);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23721, ng0);
    t2 = (t0 + 10824U);
    t3 = *((char **)t2);
    t2 = (t0 + 17944);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23722, ng0);
    t2 = (t0 + 11144U);
    t3 = *((char **)t2);
    t2 = (t0 + 18104);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23723, ng0);
    t2 = (t0 + 11304U);
    t3 = *((char **)t2);
    t2 = (t0 + 18264);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(23724, ng0);
    t2 = (t0 + 11464U);
    t3 = *((char **)t2);
    t2 = (t0 + 18424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);

LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(23683, ng0);

LAB13:    xsi_set_current_line(23684, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 16664);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    xsi_set_current_line(23685, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23686, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23687, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23688, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23689, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23690, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23691, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23692, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23693, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23694, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23695, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(23696, ng0);

LAB17:    xsi_set_current_line(23700, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 16664);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 50LL);
    xsi_set_current_line(23701, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23702, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23703, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23704, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23705, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23706, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23707, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23708, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23709, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23710, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(23711, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB16;

}

static void Cont_23771_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t67[8];
    char t81[8];
    char t82[8];
    char t94[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;

LAB0:    t1 = (t0 + 20552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23771, ng0);
    t2 = (t0 + 2824U);
    t5 = *((char **)t2);
    t2 = (t0 + 4424U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t6);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t56) != 0)
        goto LAB15;

LAB16:    t63 = (t4 + 4);
    t64 = *((unsigned int *)t4);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB17;

LAB18:    t77 = *((unsigned int *)t4);
    t78 = (~(t77));
    t79 = *((unsigned int *)t63);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t63) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t4) > 0)
        goto LAB23;

LAB24:    memcpy(t3, t81, 8);

LAB25:    t112 = (t0 + 25856);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    memset(t116, 0, 8);
    t117 = 1023U;
    t118 = t117;
    t119 = (t3 + 4);
    t120 = *((unsigned int *)t3);
    t117 = (t117 & t120);
    t121 = *((unsigned int *)t119);
    t118 = (t118 & t121);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t123 | t117);
    t124 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t124 | t118);
    xsi_driver_vfirst_trans_delayed(t112, 0, 9, 50LL, 0);
    t125 = (t0 + 25600);
    *((int *)t125) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t5 + 4);
    t39 = (t6 + 4);
    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t6);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t62 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB16;

LAB17:    t68 = (t0 + 3464U);
    t69 = *((char **)t68);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t70 = (t69 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    *((unsigned int *)t68) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 1023U);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 1023U);
    goto LAB18;

LAB19:    t83 = (t0 + 3624U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 0);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 0);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 255U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 255U);
    t92 = (t0 + 3944U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t92 = (t94 + 4);
    t95 = (t93 + 4);
    t96 = *((unsigned int *)t93);
    t97 = (t96 >> 0);
    t98 = (t97 & 1);
    *((unsigned int *)t94) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 >> 0);
    t101 = (t100 & 1);
    *((unsigned int *)t92) = t101;
    t102 = (t0 + 4104U);
    t103 = *((char **)t102);
    memset(t104, 0, 8);
    t102 = (t104 + 4);
    t105 = (t103 + 4);
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 0);
    t108 = (t107 & 1);
    *((unsigned int *)t104) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 >> 0);
    t111 = (t110 & 1);
    *((unsigned int *)t102) = t111;
    xsi_vlogtype_concat(t81, 10, 10, 3U, t104, 1, t94, 1, t82, 8);
    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t3, 10, t67, 10, t81, 10);
    goto LAB25;

LAB23:    memcpy(t3, t67, 8);
    goto LAB25;

}

static void Cont_23776_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t67[8];
    char t81[8];
    char t82[8];
    char t94[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;

LAB0:    t1 = (t0 + 20800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23776, ng0);
    t2 = (t0 + 2824U);
    t5 = *((char **)t2);
    t2 = (t0 + 4424U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t6);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t56) != 0)
        goto LAB15;

LAB16:    t63 = (t4 + 4);
    t64 = *((unsigned int *)t4);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB17;

LAB18:    t77 = *((unsigned int *)t4);
    t78 = (~(t77));
    t79 = *((unsigned int *)t63);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t63) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t4) > 0)
        goto LAB23;

LAB24:    memcpy(t3, t81, 8);

LAB25:    t112 = (t0 + 25920);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    memset(t116, 0, 8);
    t117 = 1023U;
    t118 = t117;
    t119 = (t3 + 4);
    t120 = *((unsigned int *)t3);
    t117 = (t117 & t120);
    t121 = *((unsigned int *)t119);
    t118 = (t118 & t121);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t123 | t117);
    t124 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t124 | t118);
    xsi_driver_vfirst_trans_delayed(t112, 0, 9, 50LL, 0);
    t125 = (t0 + 25616);
    *((int *)t125) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t5 + 4);
    t39 = (t6 + 4);
    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t6);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t62 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB16;

LAB17:    t68 = (t0 + 3464U);
    t69 = *((char **)t68);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t70 = (t69 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (t71 >> 10);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 10);
    *((unsigned int *)t68) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 1023U);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 1023U);
    goto LAB18;

LAB19:    t83 = (t0 + 3624U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t82 + 4);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (t86 >> 8);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 8);
    *((unsigned int *)t83) = t89;
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 255U);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t91 & 255U);
    t92 = (t0 + 3944U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t92 = (t94 + 4);
    t95 = (t93 + 4);
    t96 = *((unsigned int *)t93);
    t97 = (t96 >> 1);
    t98 = (t97 & 1);
    *((unsigned int *)t94) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 >> 1);
    t101 = (t100 & 1);
    *((unsigned int *)t92) = t101;
    t102 = (t0 + 4104U);
    t103 = *((char **)t102);
    memset(t104, 0, 8);
    t102 = (t104 + 4);
    t105 = (t103 + 4);
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 1);
    t108 = (t107 & 1);
    *((unsigned int *)t104) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 >> 1);
    t111 = (t110 & 1);
    *((unsigned int *)t102) = t111;
    xsi_vlogtype_concat(t81, 10, 10, 3U, t104, 1, t94, 1, t82, 8);
    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t3, 10, t67, 10, t81, 10);
    goto LAB25;

LAB23:    memcpy(t3, t67, 8);
    goto LAB25;

}

static void Cont_23782_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
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
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 21048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23782, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4424U);
    t6 = *((char **)t5);
    xsi_vlog_mul_concat(t4, 2, 1, t2, 1U, t6, 1);
    t5 = (t0 + 3784U);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 3U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t7 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t48 = (t3 + 4);
    t49 = (t16 + 4);
    t50 = *((unsigned int *)t16);
    t51 = (~(t50));
    *((unsigned int *)t3) = t51;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB8;

LAB7:    t56 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t56 & 3U);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & 3U);
    t58 = (t0 + 25984);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 3U;
    t64 = t63;
    t65 = (t3 + 4);
    t66 = *((unsigned int *)t3);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans_delayed(t58, 0, 1, 50LL, 0);
    t71 = (t0 + 25632);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t7 + 4);
    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t7);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB6;

LAB8:    t52 = *((unsigned int *)t3);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t3) = (t52 | t53);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t54 | t55);
    goto LAB7;

}

static void Cont_23785_4(char *t0)
{
    char t3[8];
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
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 21296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23785, ng0);
    t2 = (t0 + 4264U);
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
    t21 = (t0 + 26048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans_delayed(t21, 0, 0, 50LL, 0);
    t34 = (t0 + 25648);
    *((int *)t34) = 1;

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

}

static void Always_24090_5(char *t0)
{
    char t13[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 21544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24090, ng0);
    t2 = (t0 + 25664);
    *((int *)t2) = 1;
    t3 = (t0 + 21576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24090, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 21352);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24091, ng0);
    t6 = (t0 + 8264U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24098, ng0);
    t2 = (t0 + 13544U);
    t3 = *((char **)t2);
    t2 = (t0 + 14184U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t5 = *((char **)t2);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t13 + 4);
    t19 = *((unsigned int *)t2);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB36;

LAB37:
LAB38:    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t12 = (t3 + 4);
    t17 = (t13 + 4);
    t18 = (t44 + 4);
    t51 = *((unsigned int *)t12);
    t52 = *((unsigned int *)t17);
    t53 = (t51 | t52);
    *((unsigned int *)t18) = t53;
    t54 = *((unsigned int *)t18);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB39;

LAB40:
LAB41:    t48 = (t0 + 18584);
    xsi_vlogvar_assign_value(t48, t44, 0, 0, 1);

LAB17:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 21352);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24092, ng0);
    t9 = (t0 + 13064U);
    t10 = *((char **)t9);
    t9 = (t0 + 13704U);
    t11 = *((char **)t9);
    t9 = (t0 + 8104U);
    t12 = *((char **)t9);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t12);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t9 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB18;

LAB19:
LAB20:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t10 + 4);
    t49 = (t13 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    t72 = (t0 + 18584);
    xsi_vlogvar_assign_value(t72, t44, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24094, ng0);
    t3 = (t0 + 13224U);
    t4 = *((char **)t3);
    t3 = (t0 + 13864U);
    t5 = *((char **)t3);
    t3 = (t0 + 8104U);
    t6 = *((char **)t3);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t3 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = (t13 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB24;

LAB25:
LAB26:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t17 = (t4 + 4);
    t18 = (t13 + 4);
    t26 = (t44 + 4);
    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t18);
    t53 = (t51 | t52);
    *((unsigned int *)t26) = t53;
    t54 = *((unsigned int *)t26);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB27;

LAB28:
LAB29:    t49 = (t0 + 18584);
    xsi_vlogvar_assign_value(t49, t44, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24096, ng0);
    t3 = (t0 + 13384U);
    t4 = *((char **)t3);
    t3 = (t0 + 14024U);
    t5 = *((char **)t3);
    t3 = (t0 + 8104U);
    t6 = *((char **)t3);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t3 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = (t13 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB30;

LAB31:
LAB32:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t17 = (t4 + 4);
    t18 = (t13 + 4);
    t26 = (t44 + 4);
    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t18);
    t53 = (t51 | t52);
    *((unsigned int *)t26) = t53;
    t54 = *((unsigned int *)t26);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB33;

LAB34:
LAB35:    t49 = (t0 + 18584);
    xsi_vlogvar_assign_value(t49, t44, 0, 0, 1);
    goto LAB17;

LAB18:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t24 | t25);
    t26 = (t11 + 4);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t11);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t10 + 4);
    t59 = (t13 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t10);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB23;

LAB24:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t24 | t25);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t38);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB26;

LAB27:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t44) = (t56 | t57);
    t27 = (t4 + 4);
    t48 = (t13 + 4);
    t60 = *((unsigned int *)t27);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    goto LAB29;

LAB30:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t24 | t25);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t38);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB32;

LAB33:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t44) = (t56 | t57);
    t27 = (t4 + 4);
    t48 = (t13 + 4);
    t60 = *((unsigned int *)t27);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    goto LAB35;

LAB36:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t13) = (t24 | t25);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t35 = (~(t34));
    t8 = (t29 & t31);
    t36 = (t33 & t35);
    t38 = (~(t8));
    t39 = (~(t36));
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB38;

LAB39:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t18);
    *((unsigned int *)t44) = (t56 | t57);
    t26 = (t3 + 4);
    t27 = (t13 + 4);
    t60 = *((unsigned int *)t26);
    t61 = (~(t60));
    t62 = *((unsigned int *)t3);
    t37 = (t62 & t61);
    t64 = *((unsigned int *)t27);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t63 = (t66 & t65);
    t68 = (~(t37));
    t69 = (~(t63));
    t70 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t70 & t68);
    t71 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t71 & t69);
    goto LAB41;

}

static void Always_24103_6(char *t0)
{
    char t13[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 21792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24103, ng0);
    t2 = (t0 + 25680);
    *((int *)t2) = 1;
    t3 = (t0 + 21824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24103, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 21600);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24104, ng0);
    t6 = (t0 + 8264U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24111, ng0);
    t2 = (t0 + 10984U);
    t3 = *((char **)t2);
    t2 = (t0 + 11624U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t5 = *((char **)t2);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t13 + 4);
    t19 = *((unsigned int *)t2);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB36;

LAB37:
LAB38:    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t12 = (t3 + 4);
    t17 = (t13 + 4);
    t18 = (t44 + 4);
    t51 = *((unsigned int *)t12);
    t52 = *((unsigned int *)t17);
    t53 = (t51 | t52);
    *((unsigned int *)t18) = t53;
    t54 = *((unsigned int *)t18);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB39;

LAB40:
LAB41:    t48 = (t0 + 18744);
    xsi_vlogvar_assign_value(t48, t44, 0, 0, 1);

LAB17:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 21600);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24105, ng0);
    t9 = (t0 + 10504U);
    t10 = *((char **)t9);
    t9 = (t0 + 11144U);
    t11 = *((char **)t9);
    t9 = (t0 + 8104U);
    t12 = *((char **)t9);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t12);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t9 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB18;

LAB19:
LAB20:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t10 + 4);
    t49 = (t13 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    t72 = (t0 + 18744);
    xsi_vlogvar_assign_value(t72, t44, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24107, ng0);
    t3 = (t0 + 10664U);
    t4 = *((char **)t3);
    t3 = (t0 + 11304U);
    t5 = *((char **)t3);
    t3 = (t0 + 8104U);
    t6 = *((char **)t3);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t3 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = (t13 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB24;

LAB25:
LAB26:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t17 = (t4 + 4);
    t18 = (t13 + 4);
    t26 = (t44 + 4);
    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t18);
    t53 = (t51 | t52);
    *((unsigned int *)t26) = t53;
    t54 = *((unsigned int *)t26);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB27;

LAB28:
LAB29:    t49 = (t0 + 18744);
    xsi_vlogvar_assign_value(t49, t44, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24109, ng0);
    t3 = (t0 + 10824U);
    t4 = *((char **)t3);
    t3 = (t0 + 11464U);
    t5 = *((char **)t3);
    t3 = (t0 + 8104U);
    t6 = *((char **)t3);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t3 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = (t13 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB30;

LAB31:
LAB32:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t17 = (t4 + 4);
    t18 = (t13 + 4);
    t26 = (t44 + 4);
    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t18);
    t53 = (t51 | t52);
    *((unsigned int *)t26) = t53;
    t54 = *((unsigned int *)t26);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB33;

LAB34:
LAB35:    t49 = (t0 + 18744);
    xsi_vlogvar_assign_value(t49, t44, 0, 0, 1);
    goto LAB17;

LAB18:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t24 | t25);
    t26 = (t11 + 4);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t11);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t10 + 4);
    t59 = (t13 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t10);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB23;

LAB24:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t24 | t25);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t38);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB26;

LAB27:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t44) = (t56 | t57);
    t27 = (t4 + 4);
    t48 = (t13 + 4);
    t60 = *((unsigned int *)t27);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    goto LAB29;

LAB30:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t24 | t25);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t38);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB32;

LAB33:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t44) = (t56 | t57);
    t27 = (t4 + 4);
    t48 = (t13 + 4);
    t60 = *((unsigned int *)t27);
    t61 = (~(t60));
    t62 = *((unsigned int *)t4);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t70 & t68);
    t71 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t71 & t69);
    goto LAB35;

LAB36:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t13) = (t24 | t25);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t35 = (~(t34));
    t8 = (t29 & t31);
    t36 = (t33 & t35);
    t38 = (~(t8));
    t39 = (~(t36));
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t39);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t38);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    goto LAB38;

LAB39:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t18);
    *((unsigned int *)t44) = (t56 | t57);
    t26 = (t3 + 4);
    t27 = (t13 + 4);
    t60 = *((unsigned int *)t26);
    t61 = (~(t60));
    t62 = *((unsigned int *)t3);
    t37 = (t62 & t61);
    t64 = *((unsigned int *)t27);
    t65 = (~(t64));
    t66 = *((unsigned int *)t13);
    t63 = (t66 & t65);
    t68 = (~(t37));
    t69 = (~(t63));
    t70 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t70 & t68);
    t71 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t71 & t69);
    goto LAB41;

}

static void Always_24116_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 22040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24116, ng0);
    t2 = (t0 + 25696);
    *((int *)t2) = 1;
    t3 = (t0 + 22072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24116, ng0);

LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 21848);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24117, ng0);
    t6 = (t0 + 6344U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24121, ng0);
    t2 = (t0 + 12264U);
    t3 = *((char **)t2);
    t2 = (t0 + 18904);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB17:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 21848);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24118, ng0);
    t9 = (t0 + 11784U);
    t10 = *((char **)t9);
    t9 = (t0 + 18904);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24119, ng0);
    t3 = (t0 + 11944U);
    t4 = *((char **)t3);
    t3 = (t0 + 18904);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24120, ng0);
    t3 = (t0 + 12104U);
    t4 = *((char **)t3);
    t3 = (t0 + 18904);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB17;

}

static void Always_24125_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 22288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24125, ng0);
    t2 = (t0 + 25712);
    *((int *)t2) = 1;
    t3 = (t0 + 22320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24125, ng0);

LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 22096);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24126, ng0);
    t6 = (t0 + 6344U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24130, ng0);
    t2 = (t0 + 9704U);
    t3 = *((char **)t2);
    t2 = (t0 + 19064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB17:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 22096);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24127, ng0);
    t9 = (t0 + 9224U);
    t10 = *((char **)t9);
    t9 = (t0 + 19064);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24128, ng0);
    t3 = (t0 + 9384U);
    t4 = *((char **)t3);
    t3 = (t0 + 19064);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24129, ng0);
    t3 = (t0 + 9544U);
    t4 = *((char **)t3);
    t3 = (t0 + 19064);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB17;

}

static void Always_24134_9(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 22536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24134, ng0);
    t2 = (t0 + 25728);
    *((int *)t2) = 1;
    t3 = (t0 + 22568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24134, ng0);

LAB5:    t4 = (t0 + 1464);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 22344);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24135, ng0);
    t6 = (t0 + 6344U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24139, ng0);
    t2 = (t0 + 12904U);
    t3 = *((char **)t2);
    t2 = (t0 + 6184U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t12 + 4);
    t18 = *((unsigned int *)t2);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    *((unsigned int *)t6) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB27;

LAB28:
LAB29:    t11 = (t0 + 19224);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);

LAB17:    t2 = (t0 + 1464);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 22344);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24136, ng0);
    t9 = (t0 + 12424U);
    t10 = *((char **)t9);
    t9 = (t0 + 6184U);
    t11 = *((char **)t9);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t9 = (t10 + 4);
    t16 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB18;

LAB19:
LAB20:    t43 = (t0 + 19224);
    xsi_vlogvar_assign_value(t43, t12, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24137, ng0);
    t3 = (t0 + 12584U);
    t4 = *((char **)t3);
    t3 = (t0 + 6184U);
    t5 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t12 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t6);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB21;

LAB22:
LAB23:    t16 = (t0 + 19224);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24138, ng0);
    t3 = (t0 + 12744U);
    t4 = *((char **)t3);
    t3 = (t0 + 6184U);
    t5 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t12 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t6);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB24;

LAB25:
LAB26:    t16 = (t0 + 19224);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 1);
    goto LAB17;

LAB18:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t12) = (t23 | t24);
    t25 = (t10 + 4);
    t26 = (t11 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB20;

LAB21:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t23 | t24);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB23;

LAB24:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t23 | t24);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB26;

LAB27:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t12) = (t23 | t24);
    t9 = (t3 + 4);
    t10 = (t4 + 4);
    t27 = *((unsigned int *)t3);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (~(t31));
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t8 = (t28 & t30);
    t35 = (t32 & t34);
    t37 = (~(t8));
    t38 = (~(t35));
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB29;

}

static void Always_24143_10(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 22784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24143, ng0);
    t2 = (t0 + 25744);
    *((int *)t2) = 1;
    t3 = (t0 + 22816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24143, ng0);

LAB5:    t4 = (t0 + 1760);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 22592);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(24144, ng0);
    t6 = (t0 + 6344U);
    t7 = *((char **)t6);

LAB8:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t6, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(24148, ng0);
    t2 = (t0 + 10344U);
    t3 = *((char **)t2);
    t2 = (t0 + 6184U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t12 + 4);
    t18 = *((unsigned int *)t2);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    *((unsigned int *)t6) = t20;
    t21 = *((unsigned int *)t6);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB27;

LAB28:
LAB29:    t11 = (t0 + 19384);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);

LAB17:    t2 = (t0 + 1760);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 22592);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(24145, ng0);
    t9 = (t0 + 9864U);
    t10 = *((char **)t9);
    t9 = (t0 + 6184U);
    t11 = *((char **)t9);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t9 = (t10 + 4);
    t16 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB18;

LAB19:
LAB20:    t43 = (t0 + 19384);
    xsi_vlogvar_assign_value(t43, t12, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(24146, ng0);
    t3 = (t0 + 10024U);
    t4 = *((char **)t3);
    t3 = (t0 + 6184U);
    t5 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t12 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t6);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB21;

LAB22:
LAB23:    t16 = (t0 + 19384);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(24147, ng0);
    t3 = (t0 + 10184U);
    t4 = *((char **)t3);
    t3 = (t0 + 6184U);
    t5 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t9 = (t12 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t6);
    t20 = (t18 | t19);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB24;

LAB25:
LAB26:    t16 = (t0 + 19384);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 1);
    goto LAB17;

LAB18:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t12) = (t23 | t24);
    t25 = (t10 + 4);
    t26 = (t11 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB20;

LAB21:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t23 | t24);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB23;

LAB24:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t23 | t24);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB26;

LAB27:    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t12) = (t23 | t24);
    t9 = (t3 + 4);
    t10 = (t4 + 4);
    t27 = *((unsigned int *)t3);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (~(t31));
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t8 = (t28 & t30);
    t35 = (t32 & t34);
    t37 = (~(t8));
    t38 = (~(t35));
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t38);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t37);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    goto LAB29;

}

static void NetDecl_24160_11(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 23032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24160, ng0);
    t2 = (t0 + 2984U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 26112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 25760);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_24162_12(char *t0)
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
    char *t22;
    char *t23;
    int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    int t44;

LAB0:    t1 = (t0 + 23280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24162, ng0);
    t2 = (t0 + 25776);
    *((int *)t2) = 1;
    t3 = (t0 + 23312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24162, ng0);

LAB5:    xsi_set_current_line(24163, ng0);
    t5 = (t0 + 3304U);
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

LAB11:    xsi_set_current_line(24168, ng0);
    t2 = (t0 + 8424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(24178, ng0);

LAB30:    xsi_set_current_line(24179, ng0);
    t2 = (t0 + 18584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16344);
    t12 = (t0 + 16344);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng1)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(24180, ng0);
    t2 = (t0 + 18744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16344);
    t12 = (t0 + 16344);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(24181, ng0);
    t2 = (t0 + 18904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16024);
    t12 = (t0 + 16024);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng1)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(24182, ng0);
    t2 = (t0 + 19064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16024);
    t12 = (t0 + 16024);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(24183, ng0);
    t2 = (t0 + 19224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16184);
    t12 = (t0 + 16184);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng1)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(24184, ng0);
    t2 = (t0 + 19384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 16184);
    t12 = (t0 + 16184);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(24185, ng0);
    t2 = (t0 + 18904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19224);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t19 = (t5 + 4);
    t20 = (t13 + 4);
    t22 = (t4 + 4);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 | t11);
    *((unsigned int *)t22) = t14;
    t15 = *((unsigned int *)t22);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB43;

LAB44:
LAB45:    t37 = (t0 + 16504);
    t38 = (t0 + 16504);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t21, t40, 2, t41, 32, 1);
    t42 = (t21 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(24187, ng0);
    t2 = (t0 + 19064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19384);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t19 = (t5 + 4);
    t20 = (t13 + 4);
    t22 = (t4 + 4);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 | t11);
    *((unsigned int *)t22) = t14;
    t15 = *((unsigned int *)t22);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB48;

LAB49:
LAB50:    t37 = (t0 + 16504);
    t38 = (t0 + 16504);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t21, t40, 2, t41, 32, 1);
    t42 = (t21 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    if (t44 == 1)
        goto LAB51;

LAB52:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24163, ng0);

LAB13:    xsi_set_current_line(24164, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 16344);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 64, 50LL);
    xsi_set_current_line(24165, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 16024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 50LL);
    xsi_set_current_line(24166, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 16184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 50LL);
    xsi_set_current_line(24167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(24168, ng0);

LAB17:    xsi_set_current_line(24171, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 16344);
    t12 = (t0 + 16344);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng1)));
    t22 = (t0 + 14344U);
    t23 = *((char **)t22);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t23, 5, t20, 1);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t21, 6, 2);
    t22 = (t4 + 4);
    t14 = *((unsigned int *)t22);
    t24 = (!(t14));
    if (t24 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(24172, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16344);
    t5 = (t0 + 16344);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 14344U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t20, 5, t13, 1);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t21, 6, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(24173, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16024);
    t5 = (t0 + 16024);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 14344U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t20, 5, t13, 1);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t21, 6, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(24174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16024);
    t5 = (t0 + 16024);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 14344U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t20, 5, t13, 1);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t21, 6, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(24175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16184);
    t5 = (t0 + 16184);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 14344U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t20, 5, t13, 1);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t21, 6, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(24176, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16184);
    t5 = (t0 + 16184);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 14344U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 6, 6, 2U, t20, 5, t13, 1);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t21, 6, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t24 = (!(t7));
    if (t24 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(24177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    goto LAB16;

LAB18:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB29;

LAB31:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB34;

LAB35:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB36;

LAB37:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB38;

LAB39:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB40;

LAB41:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB42;

LAB43:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t4) = (t17 | t18);
    t23 = (t5 + 4);
    t25 = (t13 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t24 = (t28 & t27);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (~(t24));
    t34 = (~(t32));
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t35 & t33);
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t34);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t37, t4, 0, *((unsigned int *)t21), 1, 50LL);
    goto LAB47;

LAB48:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t4) = (t17 | t18);
    t23 = (t5 + 4);
    t25 = (t13 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t24 = (t28 & t27);
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (~(t24));
    t34 = (~(t32));
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t35 & t33);
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t34);
    goto LAB50;

LAB51:    xsi_vlogvar_wait_assign_value(t37, t4, 0, *((unsigned int *)t21), 1, 50LL);
    goto LAB52;

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

LAB0:    t1 = (t0 + 23528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26176);
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

LAB0:    t1 = (t0 + 23776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26240);
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

LAB0:    t1 = (t0 + 24024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26304);
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

LAB0:    t1 = (t0 + 24272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26368);
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

LAB0:    t1 = (t0 + 24520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26432);
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

LAB0:    t1 = (t0 + 24768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26496);
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

LAB0:    t1 = (t0 + 25016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26560);
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

static void implSig8_execute(char *t0)
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

LAB0:    t1 = (t0 + 25264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 26624);
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


extern void secureip_m_00000000000688644421_0408241791_init()
{
	static char *pe[] = {(void *)Always_23682_0,(void *)Cont_23771_1,(void *)Cont_23776_2,(void *)Cont_23782_3,(void *)Cont_23785_4,(void *)Always_24090_5,(void *)Always_24103_6,(void *)Always_24116_7,(void *)Always_24125_8,(void *)Always_24134_9,(void *)Always_24143_10,(void *)NetDecl_24160_11,(void *)Always_24162_12,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute};
	xsi_register_didat("secureip_m_00000000000688644421_0408241791", "isim/demo_tb.exe.sim/secureip/m_00000000000688644421_0408241791.didat");
	xsi_register_executes(pe);
}
