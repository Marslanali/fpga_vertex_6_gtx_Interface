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
static unsigned int ng1[] = {1U, 1U};
static unsigned int ng2[] = {0U, 1U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {0, 0, 0, 0};
static int ng8[] = {10, 0};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {100U, 0U};
static int ng11[] = {16, 0};
static unsigned int ng12[] = {1023U, 0U};
static int ng13[] = {2, 0};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {10U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {100, 0};
static int ng19[] = {5, 0};
static int ng20[] = {11, 0};
static int ng21[] = {4, 0};
static unsigned int ng22[] = {3U, 0U};
static int ng23[] = {17, 0};
static int ng24[] = {9, 0};
static int ng25[] = {14, 0};
static int ng26[] = {8, 0};
static unsigned int ng27[] = {4U, 0U};
static unsigned int ng28[] = {16U, 0U};
static unsigned int ng29[] = {7U, 0U};
static unsigned int ng30[] = {9U, 0U};
static unsigned int ng31[] = {31U, 31U};
static unsigned int ng32[] = {0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng33[] = {3U, 3U};

static void NetReassign_18553_58(char *);
static void NetReassign_18555_59(char *);


static void Cont_17912_0(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 26216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17912, ng0);
    t2 = (t0 + 11296U);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 42456);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 41416);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 18256);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 4736U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_17913_1(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 26464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17913, ng0);
    t2 = (t0 + 11296U);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 42520);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 41432);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 18416);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 4896U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_17917_2(char *t0)
{
    char t6[8];
    char t9[8];
    char t24[8];
    char t27[8];
    char t35[8];
    char t63[8];
    char t78[8];
    char t81[8];
    char t89[8];
    char t117[8];
    char t132[8];
    char t135[8];
    char t143[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;

LAB0:    t1 = (t0 + 26712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17917, ng0);
    t2 = (t0 + 41448);
    *((int *)t2) = 1;
    t3 = (t0 + 26744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17917, ng0);

LAB5:    xsi_set_current_line(17919, ng0);
    t4 = (t0 + 14176U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB8;

LAB6:    t7 = (t5 + 4);
    t8 = (t4 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB8:    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t35, t9, 8);

LAB15:    memset(t63, 0, 8);
    t64 = (t35 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t35);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t64) != 0)
        goto LAB28;

LAB29:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = (!(t72));
    t74 = *((unsigned int *)t71);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB30;

LAB31:    memcpy(t89, t63, 8);

LAB32:    memset(t117, 0, 8);
    t118 = (t89 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t89);
    t122 = (t121 & t120);
    t123 = (t122 & 1U);
    if (t123 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t118) != 0)
        goto LAB45;

LAB46:    t125 = (t117 + 4);
    t126 = *((unsigned int *)t117);
    t127 = (!(t126));
    t128 = *((unsigned int *)t125);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB47;

LAB48:    memcpy(t143, t117, 8);

LAB49:    t171 = (t143 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t143);
    t175 = (t174 & t173);
    t176 = (t175 != 0);
    if (t176 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(17922, ng0);
    t2 = (t0 + 14336U);
    t3 = *((char **)t2);
    t2 = (t0 + 14176U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t2))
        goto LAB65;

LAB63:    t5 = (t6 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB65;

LAB64:    *((unsigned int *)t9) = 1;

LAB65:    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(17924, ng0);
    t2 = (t0 + 14336U);
    t3 = *((char **)t2);
    t2 = (t0 + 14176U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng5)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t2))
        goto LAB71;

LAB69:    t5 = (t6 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB71;

LAB70:    *((unsigned int *)t9) = 1;

LAB71:    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB68:
LAB62:    goto LAB2;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB11:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 14176U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB18;

LAB16:    t25 = (t23 + 4);
    t26 = (t22 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB18;

LAB17:    *((unsigned int *)t24) = 1;

LAB18:    memset(t27, 0, 8);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t28) != 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t9 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB19:    *((unsigned int *)t27) = 1;
    goto LAB22;

LAB21:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB23:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t9 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t9);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB25;

LAB26:    *((unsigned int *)t63) = 1;
    goto LAB29;

LAB28:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB29;

LAB30:    t76 = (t0 + 14336U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng1)));
    memset(t78, 0, 8);
    if (*((unsigned int *)t77) != *((unsigned int *)t76))
        goto LAB35;

LAB33:    t79 = (t77 + 4);
    t80 = (t76 + 4);
    if (*((unsigned int *)t79) != *((unsigned int *)t80))
        goto LAB35;

LAB34:    *((unsigned int *)t78) = 1;

LAB35:    memset(t81, 0, 8);
    t82 = (t78 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t82) != 0)
        goto LAB38;

LAB39:    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t81);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = (t63 + 4);
    t94 = (t81 + 4);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t93);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB36:    *((unsigned int *)t81) = 1;
    goto LAB39;

LAB38:    t88 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB39;

LAB40:    t101 = *((unsigned int *)t89);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t89) = (t101 | t102);
    t103 = (t63 + 4);
    t104 = (t81 + 4);
    t105 = *((unsigned int *)t103);
    t106 = (~(t105));
    t107 = *((unsigned int *)t63);
    t108 = (t107 & t106);
    t109 = *((unsigned int *)t104);
    t110 = (~(t109));
    t111 = *((unsigned int *)t81);
    t112 = (t111 & t110);
    t113 = (~(t108));
    t114 = (~(t112));
    t115 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t115 & t113);
    t116 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t116 & t114);
    goto LAB42;

LAB43:    *((unsigned int *)t117) = 1;
    goto LAB46;

LAB45:    t124 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB46;

LAB47:    t130 = (t0 + 14336U);
    t131 = *((char **)t130);
    t130 = ((char*)((ng2)));
    memset(t132, 0, 8);
    if (*((unsigned int *)t131) != *((unsigned int *)t130))
        goto LAB52;

LAB50:    t133 = (t131 + 4);
    t134 = (t130 + 4);
    if (*((unsigned int *)t133) != *((unsigned int *)t134))
        goto LAB52;

LAB51:    *((unsigned int *)t132) = 1;

LAB52:    memset(t135, 0, 8);
    t136 = (t132 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t136) != 0)
        goto LAB55;

LAB56:    t144 = *((unsigned int *)t117);
    t145 = *((unsigned int *)t135);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = (t117 + 4);
    t148 = (t135 + 4);
    t149 = (t143 + 4);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB49;

LAB53:    *((unsigned int *)t135) = 1;
    goto LAB56;

LAB55:    t142 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB56;

LAB57:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    t157 = (t117 + 4);
    t158 = (t135 + 4);
    t159 = *((unsigned int *)t157);
    t160 = (~(t159));
    t161 = *((unsigned int *)t117);
    t162 = (t161 & t160);
    t163 = *((unsigned int *)t158);
    t164 = (~(t163));
    t165 = *((unsigned int *)t135);
    t166 = (t165 & t164);
    t167 = (~(t162));
    t168 = (~(t166));
    t169 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t169 & t167);
    t170 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t170 & t168);
    goto LAB59;

LAB60:    xsi_set_current_line(17921, ng0);
    t177 = ((char*)((ng1)));
    t178 = (t0 + 18096);
    xsi_vlogvar_assign_value(t178, t177, 0, 0, 1);
    goto LAB62;

LAB66:    xsi_set_current_line(17923, ng0);
    t10 = ((char*)((ng4)));
    t16 = (t0 + 18096);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);
    goto LAB68;

LAB72:    xsi_set_current_line(17925, ng0);
    t10 = ((char*)((ng3)));
    t16 = (t0 + 18096);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);
    goto LAB74;

}

static void Initial_17992_3(char *t0)
{
    char t4[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 26960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17992, ng0);

LAB4:    xsi_set_current_line(17993, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 19216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(17994, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 19056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(17995, ng0);

LAB5:    xsi_set_current_line(17995, ng0);
    t2 = (t0 + 41464);
    *((int *)t2) = 1;
    t3 = (t0 + 26992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(17995, ng0);

LAB7:    xsi_set_current_line(17996, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 19056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_minus(t9, 64, t4, 64, t8, 64);
    t10 = (t0 + 19216);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 13);
    xsi_set_current_line(17997, ng0);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 19056);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB5;

LAB8:    goto LAB1;

}

static void Initial_18019_4(char *t0)
{
    char t4[8];
    char t38[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    double t41;
    double t42;

LAB0:    t1 = (t0 + 27208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18019, ng0);

LAB4:    xsi_set_current_line(18020, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(18021, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(18022, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18023, ng0);

LAB5:    xsi_set_current_line(18023, ng0);
    t2 = (t0 + 41480);
    *((int *)t2) = 1;
    t3 = (t0 + 27240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18023, ng0);

LAB7:    xsi_set_current_line(18024, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 19216);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 14, 14, 2U, t8, 13, t5, 1);
    t9 = (t0 + 19856);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 14);
    xsi_set_current_line(18025, ng0);
    t2 = (t0 + 6016U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t2) == 0)
        goto LAB8;

LAB10:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB11:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(18029, ng0);
    t2 = (t0 + 6176U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(18032, ng0);
    t2 = (t0 + 19376);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(18054, ng0);

LAB54:    xsi_set_current_line(18055, ng0);
    t2 = (t0 + 18896);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(18062, ng0);

LAB69:    xsi_set_current_line(18064, ng0);
    t2 = (t0 + 19696);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19216);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t8, 13, t9, 32);
    memset(t38, 0, 8);
    t20 = (t5 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB71;

LAB70:    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB72;

LAB73:    t23 = (t38 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t38);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(18066, ng0);

LAB79:    xsi_set_current_line(18067, ng0);
    t2 = (t0 + 19696);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 13, t6, 32);
    t7 = (t0 + 19216);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t4, 32, t9, 13);
    t20 = (t0 + 19536);
    xsi_vlogvar_assign_value(t20, t38, 0, 0, 13);

LAB77:
LAB57:    xsi_set_current_line(18070, ng0);
    t2 = (t0 + 19856);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t41 = xsi_vlog_convert_to_real(t5, 14, 2);
    t42 = (t41 < 0.00000000000000000);
    if (t42 == 1)
        goto LAB80;

LAB81:    t41 = (t41 + 0.50000000000000000);
    t41 = ((int64)(t41));

LAB82:    t41 = (t41 * 1.0000000000000000);
    t6 = (t0 + 27016);
    xsi_process_wait(t6, t41);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(18025, ng0);

LAB15:    xsi_set_current_line(18026, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 19696);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 13);
    xsi_set_current_line(18027, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(18028, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 19376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB14:    goto LAB5;

LAB16:    xsi_set_current_line(18029, ng0);

LAB19:
LAB18:    goto LAB14;

LAB20:    xsi_set_current_line(18032, ng0);

LAB23:    xsi_set_current_line(18033, ng0);
    t7 = (t0 + 18896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t20 = (t9 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(18040, ng0);

LAB38:    xsi_set_current_line(18042, ng0);
    t2 = (t0 + 19536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19216);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t8, 13, t9, 32);
    memset(t38, 0, 8);
    t20 = (t5 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB40;

LAB39:    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB41;

LAB42:    t23 = (t38 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t38);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(18044, ng0);

LAB48:    xsi_set_current_line(18045, ng0);
    t2 = (t0 + 19536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 13, t6, 32);
    t7 = (t0 + 19216);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t4, 32, t9, 13);
    t20 = (t0 + 19696);
    xsi_vlogvar_assign_value(t20, t38, 0, 0, 13);

LAB46:
LAB26:    xsi_set_current_line(18050, ng0);
    t2 = (t0 + 19856);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t41 = xsi_vlog_convert_to_real(t5, 14, 2);
    t42 = (t41 < 0.00000000000000000);
    if (t42 == 1)
        goto LAB49;

LAB50:    t41 = (t41 + 0.50000000000000000);
    t41 = ((int64)(t41));

LAB51:    t41 = (t41 * 1.0000000000000000);
    t6 = (t0 + 27016);
    xsi_process_wait(t6, t41);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB22:    goto LAB18;

LAB24:    xsi_set_current_line(18033, ng0);

LAB27:    xsi_set_current_line(18035, ng0);
    t21 = (t0 + 19536);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t25 = (t23 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB29;

LAB28:    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t23) < *((unsigned int *)t24))
        goto LAB31;

LAB30:    *((unsigned int *)t4) = 1;

LAB31:    t28 = (t4 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(18037, ng0);

LAB37:    xsi_set_current_line(18038, ng0);
    t2 = (t0 + 19536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19216);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 13, t8, 13);
    t9 = ((char*)((ng8)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t4, 32, t9, 32);
    t20 = (t0 + 19696);
    xsi_vlogvar_assign_value(t20, t38, 0, 0, 13);

LAB35:    goto LAB26;

LAB29:    t27 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(18035, ng0);

LAB36:    xsi_set_current_line(18036, ng0);
    t34 = (t0 + 19536);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng8)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t36, 13, t37, 32);
    t39 = (t0 + 19696);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 13);
    goto LAB35;

LAB40:    t22 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB44:    xsi_set_current_line(18042, ng0);

LAB47:    xsi_set_current_line(18043, ng0);
    t24 = (t0 + 19536);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng8)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t26, 13, t27, 32);
    t28 = (t0 + 19696);
    xsi_vlogvar_assign_value(t28, t40, 0, 0, 13);
    goto LAB46;

LAB49:    t41 = 0.00000000000000000;
    goto LAB51;

LAB52:    xsi_set_current_line(18053, ng0);
    t7 = (t0 + 41496);
    *((int *)t7) = 1;
    t8 = (t0 + 27240);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(18053, ng0);
    t9 = ((char*)((ng4)));
    t20 = (t0 + 19376);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 1);
    goto LAB22;

LAB55:    xsi_set_current_line(18055, ng0);

LAB58:    xsi_set_current_line(18057, ng0);
    t7 = (t0 + 19696);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t20 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t21 = (t9 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB60;

LAB59:    t22 = (t20 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t9) < *((unsigned int *)t20))
        goto LAB62;

LAB61:    *((unsigned int *)t4) = 1;

LAB62:    t24 = (t4 + 4);
    t15 = *((unsigned int *)t24);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(18059, ng0);

LAB68:    xsi_set_current_line(18060, ng0);
    t2 = (t0 + 19696);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 19216);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 13, t8, 13);
    t9 = ((char*)((ng8)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t4, 32, t9, 32);
    t20 = (t0 + 19536);
    xsi_vlogvar_assign_value(t20, t38, 0, 0, 13);

LAB66:    goto LAB57;

LAB60:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(18057, ng0);

LAB67:    xsi_set_current_line(18058, ng0);
    t25 = (t0 + 19696);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng8)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t27, 13, t28, 32);
    t34 = (t0 + 19536);
    xsi_vlogvar_assign_value(t34, t38, 0, 0, 13);
    goto LAB66;

LAB71:    t22 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t38) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(18064, ng0);

LAB78:    xsi_set_current_line(18065, ng0);
    t24 = (t0 + 19696);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng8)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t26, 13, t27, 32);
    t28 = (t0 + 19536);
    xsi_vlogvar_assign_value(t28, t40, 0, 0, 13);
    goto LAB77;

LAB80:    t41 = 0.00000000000000000;
    goto LAB82;

LAB83:    xsi_set_current_line(18071, ng0);
    t7 = (t0 + 41512);
    *((int *)t7) = 1;
    t8 = (t0 + 27240);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(18071, ng0);
    t9 = ((char*)((ng3)));
    t20 = (t0 + 19376);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 1);
    goto LAB22;

LAB85:    goto LAB1;

}

static void Always_18078_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    double t17;
    double t18;

LAB0:    t1 = (t0 + 27456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18078, ng0);
    t2 = (t0 + 41528);
    *((int *)t2) = 1;
    t3 = (t0 + 27488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18078, ng0);

LAB5:    xsi_set_current_line(18079, ng0);
    t4 = (t0 + 5056U);
    t5 = *((char **)t4);
    t4 = (t0 + 18576);
    t7 = (t0 + 18576);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(18080, ng0);
    t2 = (t0 + 5056U);
    t3 = *((char **)t2);
    t2 = (t0 + 18576);
    t4 = (t0 + 18576);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB11;

LAB12:    goto LAB2;

LAB6:    t14 = (t0 + 19536);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = xsi_vlog_convert_to_real(t16, 13, 2);
    t18 = (t17 < 0.00000000000000000);
    if (t18 == 1)
        goto LAB8;

LAB9:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB10:    t17 = (t17 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t6), 1, t17);
    goto LAB7;

LAB8:    t17 = 0.00000000000000000;
    goto LAB10;

LAB11:    t10 = (t0 + 19696);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    t17 = xsi_vlog_convert_to_real(t14, 13, 2);
    t18 = (t17 < 0.00000000000000000);
    if (t18 == 1)
        goto LAB13;

LAB14:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB15:    t17 = (t17 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, t17);
    goto LAB12;

LAB13:    t17 = 0.00000000000000000;
    goto LAB15;

}

static void Cont_18083_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
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

LAB0:    t1 = (t0 + 27704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18083, ng0);
    t2 = (t0 + 18576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 18576);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 19376);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t11, 1, 2);
    t12 = (t0 + 42584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans_delayed(t12, 0, 0, 1LL, 0);
    t25 = (t0 + 41544);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_18087_7(char *t0)
{
    char t4[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;

LAB0:    t1 = (t0 + 27952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18087, ng0);

LAB4:    xsi_set_current_line(18088, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 18736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(18089, ng0);

LAB5:    xsi_set_current_line(18089, ng0);
    t2 = (t0 + 41560);
    *((int *)t2) = 1;
    t3 = (t0 + 27984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18089, ng0);

LAB7:    xsi_set_current_line(18090, ng0);
    t5 = (t0 + 18736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 2, t4, 2, t16, 2);
    t18 = (t0 + 18736);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 2);
    goto LAB5;

LAB8:    goto LAB1;

}

static void Cont_18096_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t28[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t67[8];
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
    char *t27;
    char *t29;
    char *t30;
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
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;

LAB0:    t1 = (t0 + 28200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18096, ng0);
    t2 = (t0 + 7776U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t80 = (t0 + 42648);
    t82 = (t80 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 1U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans_delayed(t80, 0, 0, 50LL, 0);
    t94 = (t0 + 41576);
    *((int *)t94) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 18736);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t29) = t36;
    goto LAB9;

LAB10:    t43 = (t0 + 7776U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    memset(t42, 0, 8);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t45);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t53) != 0)
        goto LAB19;

LAB20:    t60 = (t42 + 4);
    t61 = *((unsigned int *)t42);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB21;

LAB22:    t76 = *((unsigned int *)t42);
    t77 = (~(t76));
    t78 = *((unsigned int *)t60);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t60) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t42) > 0)
        goto LAB27;

LAB28:    memcpy(t41, t81, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t28, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t28, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB19:    t59 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB20;

LAB21:    t64 = (t0 + 18736);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    goto LAB22;

LAB23:    t80 = (t0 + 14496U);
    t81 = *((char **)t80);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t41, 1, t67, 1, t81, 1);
    goto LAB29;

LAB27:    memcpy(t41, t67, 8);
    goto LAB29;

}

static void Initial_18111_9(char *t0)
{
    char t4[16];
    char t9[16];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    double t18;
    double t19;

LAB0:    t1 = (t0 + 28448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18111, ng0);

LAB4:    xsi_set_current_line(18112, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 20016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(18113, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 20176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(18114, ng0);

LAB5:    xsi_set_current_line(18114, ng0);
    t2 = (t0 + 41592);
    *((int *)t2) = 1;
    t3 = (t0 + 28480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18114, ng0);

LAB7:    xsi_set_current_line(18115, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 20176);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_minus(t9, 64, t4, 64, t8, 64);
    t10 = (t0 + 20016);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 13);
    xsi_set_current_line(18116, ng0);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 20176);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    xsi_set_current_line(18117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 18896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 18896);
    t5 = (t0 + 20016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 1);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 4095U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 4095U);
    t18 = xsi_vlog_convert_to_real(t11, 12, 2);
    t19 = (t18 < 0.00000000000000000);
    if (t19 == 1)
        goto LAB8;

LAB9:    t18 = (t18 + 0.50000000000000000);
    t18 = ((int64)(t18));

LAB10:    t18 = (t18 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, t18);
    goto LAB5;

LAB8:    t18 = 0.00000000000000000;
    goto LAB10;

LAB11:    goto LAB1;

}

static void Cont_18130_10(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 28696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18130, ng0);
    t2 = (t0 + 14656U);
    t3 = *((char **)t2);
    t2 = (t0 + 42712);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0, 1LL, 0);
    t16 = (t0 + 41608);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_18141_11(char *t0)
{
    char t16[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    t1 = (t0 + 28944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18141, ng0);

LAB4:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 28752);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(18147, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 24496);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(18148, ng0);

LAB7:    xsi_set_current_line(18148, ng0);
    t2 = (t0 + 41624);
    *((int *)t2) = 1;
    t3 = (t0 + 28976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t3 = (t0 + 28752);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB8:    xsi_set_current_line(18149, ng0);

LAB9:    xsi_set_current_line(18150, ng0);
    t4 = (t0 + 28752);
    xsi_process_wait(t4, 1LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(18152, ng0);
    t5 = (t0 + 24496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(18160, ng0);
    t2 = (t0 + 24336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t4, 4, t5, 4);
    t6 = (t0 + 24336);
    xsi_vlogvar_assign_value(t6, t16, 0, 0, 4);
    xsi_set_current_line(18161, ng0);
    t2 = (t0 + 24176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 24016);
    t14 = (t8 + 72U);
    t15 = *((char **)t14);
    t19 = (t0 + 24016);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 24336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t16, 17, t7, t15, t21, 2, 1, t24, 4, 2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 17, t4, 17, t16, 17);
    t25 = (t0 + 24176);
    xsi_vlogvar_assign_value(t25, t17, 0, 0, 17);
    xsi_set_current_line(18162, ng0);
    t2 = (t0 + 20016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24016);
    t6 = (t0 + 24016);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t14 = (t0 + 24016);
    t15 = (t14 + 64U);
    t19 = *((char **)t15);
    t20 = (t0 + 24336);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t16, t17, t8, t19, 2, 1, t22, 4, 2);
    t23 = (t16 + 4);
    t9 = *((unsigned int *)t23);
    t28 = (!(t9));
    t24 = (t17 + 4);
    t10 = *((unsigned int *)t24);
    t31 = (!(t10));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(18163, ng0);
    t2 = (t0 + 24176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 24016);
    t14 = (t8 + 72U);
    t15 = *((char **)t14);
    t19 = (t0 + 24016);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 24336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t16, 17, t7, t15, t21, 2, 1, t24, 4, 2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 17, t4, 17, t16, 17);
    t25 = (t0 + 24176);
    xsi_vlogvar_assign_value(t25, t17, 0, 0, 17);
    xsi_set_current_line(18164, ng0);
    t2 = (t0 + 24176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 8191U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 8191U);
    t7 = (t0 + 20336);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 13);
    xsi_set_current_line(18166, ng0);
    t2 = (t0 + 24176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 3);
    t27 = (t13 & 1);
    *((unsigned int *)t5) = t27;
    t7 = (t16 + 4);
    t30 = *((unsigned int *)t7);
    t33 = (~(t30));
    t34 = *((unsigned int *)t16);
    t37 = (t34 & t33);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB7;

LAB11:    xsi_set_current_line(18152, ng0);

LAB14:    xsi_set_current_line(18153, ng0);
    xsi_set_current_line(18153, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 24656);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);

LAB15:    t2 = (t0 + 24656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t4, 32, t5, 32);
    t6 = (t16 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(18156, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 17);
    xsi_set_current_line(18157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(18158, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB16:    xsi_set_current_line(18153, ng0);

LAB18:    xsi_set_current_line(18154, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 24016);
    t14 = (t0 + 24016);
    t15 = (t14 + 72U);
    t19 = *((char **)t15);
    t20 = (t0 + 24016);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 24656);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t17, t18, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(18153, ng0);
    t2 = (t0 + 24656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t4, 32, t5, 32);
    t6 = (t0 + 24656);
    xsi_vlogvar_assign_value(t6, t16, 0, 0, 32);
    goto LAB15;

LAB19:    t33 = *((unsigned int *)t17);
    t34 = *((unsigned int *)t18);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t18), t36);
    goto LAB20;

LAB21:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t35 = (t11 - t12);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t17), t36);
    goto LAB22;

LAB23:    xsi_set_current_line(18166, ng0);
    t8 = (t0 + 20336);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t19 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 13, t15, 13, t19, 13);
    t20 = (t0 + 20336);
    xsi_vlogvar_assign_value(t20, t17, 0, 0, 13);
    goto LAB25;

LAB26:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

}

static void Cont_18225_12(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 29192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18225, ng0);
    t2 = (t0 + 14976U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 42776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans_delayed(t12, 0, 0, 50LL, 0);
    t25 = (t0 + 41640);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_18226_13(char *t0)
{
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 29440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18226, ng0);
    t2 = (t0 + 14976U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 7136U);
    t13 = *((char **)t12);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t12 = (t4 + 4);
    t18 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB4;

LAB5:
LAB6:    t45 = (t0 + 42840);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 1U;
    t51 = t50;
    t52 = (t14 + 4);
    t53 = *((unsigned int *)t14);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans_delayed(t45, 0, 0, 50LL, 0);
    t58 = (t0 + 41656);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t25 | t26);
    t27 = (t4 + 4);
    t28 = (t13 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = (t30 & t32);
    t38 = (t34 & t36);
    t39 = (~(t37));
    t40 = (~(t38));
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & t39);
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    goto LAB6;

}

static void Initial_18232_14(char *t0)
{
    char t13[8];
    char t19[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 29688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18232, ng0);

LAB4:    xsi_set_current_line(18233, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 20656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18234, ng0);

LAB5:    xsi_set_current_line(18234, ng0);
    t2 = (t0 + 41672);
    *((int *)t2) = 1;
    t3 = (t0 + 29720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18234, ng0);

LAB7:    xsi_set_current_line(18235, ng0);
    t4 = (t0 + 12416U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(18237, ng0);
    t2 = (t0 + 12736U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(18235, ng0);

LAB11:    xsi_set_current_line(18236, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 20656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB10;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(18237, ng0);

LAB19:    xsi_set_current_line(18238, ng0);
    t11 = (t0 + 20656);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t21) == 0)
        goto LAB20;

LAB22:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB23:    t28 = (t19 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t19) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB25;

LAB24:    t36 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 20656);
    xsi_vlogvar_assign_value(t38, t19, 0, 0, 1);
    goto LAB18;

LAB20:    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB25:    t32 = *((unsigned int *)t19);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t19) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB24;

LAB26:    goto LAB1;

}

static void Initial_18247_15(char *t0)
{
    char t13[8];
    char t21[8];
    char t25[8];
    char t29[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    double t22;
    double t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 29936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18247, ng0);

LAB4:    xsi_set_current_line(18248, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 20816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(18251, ng0);

LAB5:    xsi_set_current_line(18251, ng0);
    t2 = (t0 + 41688);
    *((int *)t2) = 1;
    t3 = (t0 + 29968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18251, ng0);

LAB7:    xsi_set_current_line(18252, ng0);
    t4 = (t0 + 12416U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(18254, ng0);
    t2 = (t0 + 12736U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(18252, ng0);

LAB11:    xsi_set_current_line(18253, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 20816);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 10);
    goto LAB10;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(18254, ng0);

LAB19:    xsi_set_current_line(18255, ng0);
    t11 = (t0 + 20016);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng13)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_divide(t21, 32, t19, 13, t20, 32);
    t22 = xsi_vlog_convert_to_real(t21, 32, 2);
    t23 = (t22 < 0.00000000000000000);
    if (t23 == 1)
        goto LAB20;

LAB21:    t22 = (t22 + 0.50000000000000000);
    t22 = ((int64)(t22));

LAB22:    t22 = (t22 * 1.0000000000000000);
    t24 = (t0 + 29744);
    xsi_process_wait(t24, t22);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB20:    t22 = 0.00000000000000000;
    goto LAB22;

LAB23:    xsi_set_current_line(18256, ng0);
    t26 = (t0 + 20656);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t0 + 20816);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 511U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 511U);
    xsi_vlogtype_concat(t25, 10, 10, 2U, t29, 9, t28, 1);
    t41 = (t0 + 20816);
    xsi_vlogvar_assign_value(t41, t25, 0, 0, 10);
    goto LAB18;

LAB24:    goto LAB1;

}

static void Initial_18264_16(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18264, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 20976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}

static void Always_18266_17(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 30432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18266, ng0);
    t2 = (t0 + 41704);
    *((int *)t2) = 1;
    t3 = (t0 + 30464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18266, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 20976);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 64);
    goto LAB2;

}

static void Initial_18270_18(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 30680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18270, ng0);

LAB4:    xsi_set_current_line(18271, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 21136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(18272, ng0);

LAB5:    xsi_set_current_line(18272, ng0);
    t2 = (t0 + 41720);
    *((int *)t2) = 1;
    t3 = (t0 + 30712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18272, ng0);

LAB7:    xsi_set_current_line(18273, ng0);
    t6 = (t0 + 8576U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t6) != 0)
        goto LAB10;

LAB11:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB12;

LAB13:    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t14) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    memcpy(t4, t36, 8);

LAB20:    t37 = (t0 + 21136);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 2, 50LL);
    goto LAB5;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB12:    t19 = (t0 + 6816U);
    t20 = *((char **)t19);
    t19 = (t0 + 21136);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t24) = t31;
    xsi_vlogtype_concat(t18, 2, 2, 2U, t23, 1, t20, 1);
    goto LAB13;

LAB14:    t36 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 2, t18, 2, t36, 2);
    goto LAB20;

LAB18:    memcpy(t4, t18, 8);
    goto LAB20;

LAB21:    goto LAB1;

}

static void Cont_18297_19(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t26[8];
    char t43[8];
    char t45[8];
    char t54[8];
    char t56[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 30928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18297, ng0);
    t2 = (t0 + 1656);
    t5 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t57 = (t0 + 42904);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 15U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 3);
    t70 = (t0 + 41736);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 21296);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t27 = (t0 + 10336U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t28 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = (t26 + 4);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t26);
    t47 = (~(t46));
    t48 = *((unsigned int *)t35);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) > 0)
        goto LAB27;

LAB28:    memcpy(t25, t56, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t20, 4, t25, 4);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t34 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    t39 = (t0 + 21296);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng14)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 4, t41, 4, t42, 4);
    t44 = ((char*)((ng15)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_mod(t45, 4, t43, 4, t44, 4);
    goto LAB22;

LAB23:    t50 = (t0 + 21296);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng16)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 4, t52, 4, t53, 4);
    t55 = ((char*)((ng17)));
    memset(t56, 0, 8);
    xsi_vlog_unsigned_mod(t56, 4, t54, 4, t55, 4);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t25, 4, t45, 4, t56, 4);
    goto LAB29;

LAB27:    memcpy(t25, t45, 8);
    goto LAB29;

}

static void NetDecl_18307_20(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 31176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18307, ng0);
    t2 = (t0 + 8576U);
    t4 = *((char **)t2);
    t2 = (t0 + 6656U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 42968);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0U);
    t67 = (t0 + 41752);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void Initial_18309_21(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t21[8];
    char t39[8];
    char t47[16];
    char t48[16];
    char t49[16];
    char t50[16];
    char t51[16];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    int t46;

LAB0:    t1 = (t0 + 31424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18309, ng0);

LAB4:    t2 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 31232);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(18312, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 21296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(18313, ng0);

LAB7:    xsi_set_current_line(18313, ng0);
    t2 = (t0 + 41768);
    *((int *)t2) = 1;
    t3 = (t0 + 31456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t3 = (t0 + 31232);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB8:    xsi_set_current_line(18313, ng0);

LAB9:    xsi_set_current_line(18314, ng0);
    t4 = (t0 + 15936U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18316, ng0);
    t2 = (t0 + 21136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB16;

LAB14:    t11 = (t4 + 4);
    t12 = (t5 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB16:    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB7;

LAB10:    xsi_set_current_line(18314, ng0);

LAB13:    xsi_set_current_line(18315, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 21296);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB12;

LAB17:    xsi_set_current_line(18316, ng0);

LAB20:    xsi_set_current_line(18318, ng0);
    t17 = (t0 + 20336);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng18)));
    memset(t21, 0, 8);
    t22 = (t19 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB22;

LAB21:    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t19) > *((unsigned int *)t20))
        goto LAB23;

LAB24:    memset(t16, 0, 8);
    t25 = (t21 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t25) != 0)
        goto LAB28;

LAB29:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB30;

LAB31:    t40 = *((unsigned int *)t16);
    t41 = (~(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t32) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t16) > 0)
        goto LAB36;

LAB37:    memcpy(t15, t44, 8);

LAB38:    t45 = (t0 + 24976);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 32);
    xsi_set_current_line(18319, ng0);
    t2 = (t0 + 7776U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 3U);

LAB39:    t5 = ((char*)((ng4)));
    t46 = xsi_vlog_unsigned_case_compare(t13, 2, t5, 2);
    if (t46 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng3)));
    t46 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t46 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng5)));
    t46 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t46 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng22)));
    t46 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t46 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:    xsi_set_current_line(18324, ng0);
    t3 = (t0 + 24976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 21456);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);

LAB50:    xsi_set_current_line(18326, ng0);
    t2 = xsi_vlog_time(t47, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 21456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_add(t48, 64, t47, 64, t5, 32);
    t11 = (t0 + 20976);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    xsi_vlog_unsigned_minus(t49, 64, t48, 64, t14, 64);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 24976);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t50, 64, 33, 2U, t20, 32, t17, 1);
    xsi_vlog_unsigned_divide(t51, 64, t49, 64, t50, 64);
    t22 = (t0 + 24816);
    xsi_vlogvar_assign_value(t22, t51, 0, 0, 32);
    xsi_set_current_line(18328, ng0);
    t2 = (t0 + 1656);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(18335, ng0);
    t2 = (t0 + 10336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(18344, ng0);

LAB69:    xsi_set_current_line(18347, ng0);
    t2 = (t0 + 24816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng24)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t4, 32, t5, 32);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(18350, ng0);

LAB74:    xsi_set_current_line(18351, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 24816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t2, 32, t5, 32);
    t11 = ((char*)((ng26)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t15, 32, t11, 32);
    t12 = (t0 + 21296);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 4);

LAB72:
LAB62:
LAB53:    goto LAB19;

LAB22:    t24 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB28:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB30:    t36 = (t0 + 20336);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t39, t38, 8);
    goto LAB31;

LAB32:    t44 = ((char*)((ng18)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t15, 32, t39, 32, t44, 32);
    goto LAB38;

LAB36:    memcpy(t15, t39, 8);
    goto LAB38;

LAB40:    xsi_set_current_line(18320, ng0);
    t11 = ((char*)((ng13)));
    t12 = (t0 + 24976);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t11, 32, t17, 32);
    t18 = (t0 + 21456);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 32);
    goto LAB50;

LAB42:    xsi_set_current_line(18321, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 24976);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t3, 32, t11, 32);
    t12 = ((char*)((ng13)));
    memset(t16, 0, 8);
    xsi_vlog_signed_divide(t16, 32, t15, 32, t12, 32);
    t14 = (t0 + 21456);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 32);
    goto LAB50;

LAB44:    xsi_set_current_line(18323, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 24976);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t3, 32, t11, 32);
    t12 = ((char*)((ng21)));
    memset(t16, 0, 8);
    xsi_vlog_signed_divide(t16, 32, t15, 32, t12, 32);
    t14 = (t0 + 21456);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 32);
    goto LAB50;

LAB46:    goto LAB44;

LAB51:    xsi_set_current_line(18328, ng0);

LAB54:    xsi_set_current_line(18329, ng0);
    t5 = (t0 + 24816);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng19)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 32, t12, 32, t14, 32);
    t17 = (t16 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(18332, ng0);

LAB59:    xsi_set_current_line(18333, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 24816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t2, 32, t5, 32);
    t11 = ((char*)((ng19)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t15, 32, t11, 32);
    t12 = (t0 + 21296);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 4);

LAB57:    goto LAB53;

LAB55:    xsi_set_current_line(18329, ng0);

LAB58:    xsi_set_current_line(18331, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 21296);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    goto LAB57;

LAB60:    xsi_set_current_line(18335, ng0);

LAB63:    xsi_set_current_line(18338, ng0);
    t4 = (t0 + 24816);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng20)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t11, 32, t12, 32);
    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(18341, ng0);

LAB68:    xsi_set_current_line(18342, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 24816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t2, 32, t5, 32);
    t11 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t15, 32, t11, 32);
    t12 = (t0 + 21296);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 4);

LAB66:    goto LAB62;

LAB64:    xsi_set_current_line(18338, ng0);

LAB67:    xsi_set_current_line(18340, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 21296);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 4);
    goto LAB66;

LAB70:    xsi_set_current_line(18347, ng0);

LAB73:    xsi_set_current_line(18349, ng0);
    t12 = ((char*)((ng4)));
    t14 = (t0 + 21296);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 4);
    goto LAB72;

LAB75:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

}

static void Cont_18358_22(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 31672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18358, ng0);
    t2 = (t0 + 20816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 20816);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 15776U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 4, 2);
    t9 = (t0 + 43032);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 41784);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Initial_18368_23(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18368, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 21616);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 13);

LAB1:    return;
}

static void Always_18370_24(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t27[8];
    char t39[8];
    char t51[8];
    char t56[8];
    char t57[8];
    char t60[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 32168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18370, ng0);
    t2 = (t0 + 41800);
    *((int *)t2) = 1;
    t3 = (t0 + 32200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18370, ng0);

LAB5:    xsi_set_current_line(18371, ng0);
    t6 = (t0 + 7776U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    memset(t5, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t16) != 0)
        goto LAB8;

LAB9:    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB10;

LAB11:    t52 = *((unsigned int *)t5);
    t53 = (~(t52));
    t54 = *((unsigned int *)t23);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t23) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t56, 8);

LAB18:    t96 = (t0 + 21616);
    xsi_vlogvar_assign_value(t96, t4, 0, 0, 13);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB9;

LAB10:    t28 = (t0 + 20016);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t27, 0, 8);
    t31 = (t27 + 4);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 1);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t37 & 4095U);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 & 4095U);
    t40 = (t0 + 20016);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t39, 0, 8);
    t43 = (t39 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 2);
    *((unsigned int *)t39) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 2);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & 2047U);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 2047U);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 13, t27, 13, t39, 13);
    goto LAB11;

LAB12:    t58 = (t0 + 7776U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t58 = (t60 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 0);
    t64 = (t63 & 1);
    *((unsigned int *)t60) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 0);
    t67 = (t66 & 1);
    *((unsigned int *)t58) = t67;
    memset(t57, 0, 8);
    t68 = (t60 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t60);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t68) != 0)
        goto LAB21;

LAB22:    t75 = (t57 + 4);
    t76 = *((unsigned int *)t57);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB23;

LAB24:    t91 = *((unsigned int *)t57);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t75) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t57) > 0)
        goto LAB29;

LAB30:    memcpy(t56, t95, 8);

LAB31:    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 13, t51, 13, t56, 13);
    goto LAB18;

LAB16:    memcpy(t4, t51, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB21:    t74 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB22;

LAB23:    t80 = (t0 + 20016);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t79, 0, 8);
    t83 = (t79 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 1);
    *((unsigned int *)t79) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 1);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t89 & 4095U);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 & 4095U);
    goto LAB24;

LAB25:    t95 = ((char*)((ng3)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t56, 13, t79, 13, t95, 13);
    goto LAB31;

LAB29:    memcpy(t56, t79, 8);
    goto LAB31;

}

static void Initial_18382_25(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18382, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 17456);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_18383_26(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    double t21;

LAB0:    t1 = (t0 + 32664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18383, ng0);
    t2 = (t0 + 41816);
    *((int *)t2) = 1;
    t3 = (t0 + 32696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18383, ng0);
    t4 = (t0 + 20816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 17456);
    t17 = (t0 + 21616);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = xsi_vlog_convert_to_real(t19, 13, 2);
    t21 = (t20 < 0.00000000000000000);
    if (t21 == 1)
        goto LAB5;

LAB6:    t20 = (t20 + 0.50000000000000000);
    t20 = ((int64)(t20));

LAB7:    t20 = (t20 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 1, t20);
    goto LAB2;

LAB5:    t20 = 0.00000000000000000;
    goto LAB7;

}

static void Always_18391_27(char *t0)
{
    char t11[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 32912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18391, ng0);
    t2 = (t0 + 41832);
    *((int *)t2) = 1;
    t3 = (t0 + 32944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18391, ng0);

LAB5:    xsi_set_current_line(18392, ng0);
    t4 = (t0 + 21296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(18403, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 17936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(18393, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 17936);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    goto LAB29;

LAB9:    xsi_set_current_line(18394, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 17936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB29;

LAB11:    xsi_set_current_line(18395, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 17936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB29;

LAB13:    xsi_set_current_line(18396, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 17936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB29;

LAB15:    xsi_set_current_line(18397, ng0);
    t3 = (t0 + 10336U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t3) != 0)
        goto LAB32;

LAB33:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB34;

LAB35:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t7) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t12) > 0)
        goto LAB40;

LAB41:    memcpy(t11, t10, 8);

LAB42:    t25 = (t0 + 17936);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 5);
    goto LAB29;

LAB17:    xsi_set_current_line(18398, ng0);
    t3 = (t0 + 10336U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t3) != 0)
        goto LAB45;

LAB46:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB47;

LAB48:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t7) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t12) > 0)
        goto LAB53;

LAB54:    memcpy(t11, t10, 8);

LAB55:    t25 = (t0 + 17936);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 5);
    goto LAB29;

LAB19:    xsi_set_current_line(18399, ng0);
    t3 = (t0 + 10336U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t3) != 0)
        goto LAB58;

LAB59:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB60;

LAB61:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t7) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t12) > 0)
        goto LAB66;

LAB67:    memcpy(t11, t10, 8);

LAB68:    t25 = (t0 + 17936);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 5);
    goto LAB29;

LAB21:    xsi_set_current_line(18400, ng0);
    t3 = (t0 + 10336U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t3) != 0)
        goto LAB71;

LAB72:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB73;

LAB74:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t7) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t12) > 0)
        goto LAB79;

LAB80:    memcpy(t11, t10, 8);

LAB81:    t25 = (t0 + 17936);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 5);
    goto LAB29;

LAB23:    xsi_set_current_line(18401, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 17936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB29;

LAB25:    xsi_set_current_line(18402, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 17936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB29;

LAB30:    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB32:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    t9 = ((char*)((ng28)));
    goto LAB35;

LAB36:    t10 = ((char*)((ng3)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t11, 5, t9, 5, t10, 5);
    goto LAB42;

LAB40:    memcpy(t11, t9, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB45:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB47:    t9 = ((char*)((ng3)));
    goto LAB48;

LAB49:    t10 = ((char*)((ng5)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t11, 5, t9, 5, t10, 5);
    goto LAB55;

LAB53:    memcpy(t11, t9, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB58:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB59;

LAB60:    t9 = ((char*)((ng5)));
    goto LAB61;

LAB62:    t10 = ((char*)((ng27)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t11, 5, t9, 5, t10, 5);
    goto LAB68;

LAB66:    memcpy(t11, t9, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t12) = 1;
    goto LAB72;

LAB71:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB72;

LAB73:    t9 = ((char*)((ng27)));
    goto LAB74;

LAB75:    t10 = ((char*)((ng17)));
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t11, 5, t9, 5, t10, 5);
    goto LAB81;

LAB79:    memcpy(t11, t9, 8);
    goto LAB81;

}

static void Cont_18410_28(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t39[8];
    char t40[8];
    char t53[8];
    char t57[8];
    char t66[8];
    char t82[8];
    char t86[8];
    char t95[8];
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
    char *t41;
    char *t42;
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
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
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
    char *t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;

LAB0:    t1 = (t0 + 33160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18410, ng0);
    t2 = (t0 + 6656U);
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

LAB21:    memcpy(t3, t39, 8);

LAB22:    t108 = (t0 + 43096);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memset(t112, 0, 8);
    t113 = 31U;
    t114 = t113;
    t115 = (t3 + 4);
    t116 = *((unsigned int *)t3);
    t113 = (t113 & t116);
    t117 = *((unsigned int *)t115);
    t114 = (t114 & t117);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t119 | t113);
    t120 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t120 | t114);
    xsi_driver_vfirst_trans_delayed(t108, 0, 4, 50LL, 0);
    t121 = (t0 + 41848);
    *((int *)t121) = 1;

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

LAB14:    t34 = ((char*)((ng5)));
    goto LAB15;

LAB16:    t41 = (t0 + 10336U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t42 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t41) != 0)
        goto LAB25;

LAB26:    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    t78 = *((unsigned int *)t40);
    t79 = (~(t78));
    t80 = *((unsigned int *)t49);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t49) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t40) > 0)
        goto LAB33;

LAB34:    memcpy(t39, t82, 8);

LAB35:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 5, t34, 5, t39, 5);
    goto LAB22;

LAB20:    memcpy(t3, t34, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB26;

LAB27:    t54 = (t0 + 17936);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 4);
    t62 = (t61 & 1);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 4);
    t65 = (t64 & 1);
    *((unsigned int *)t58) = t65;
    t67 = (t0 + 17936);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t66, 0, 8);
    t70 = (t66 + 4);
    t71 = (t69 + 4);
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 0);
    *((unsigned int *)t66) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t76 & 15U);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 & 15U);
    xsi_vlogtype_concat(t53, 5, 5, 2U, t66, 4, t57, 1);
    goto LAB28;

LAB29:    t83 = (t0 + 17936);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t87 = (t86 + 4);
    t88 = (t85 + 4);
    t89 = *((unsigned int *)t85);
    t90 = (t89 >> 3);
    t91 = (t90 & 1);
    *((unsigned int *)t86) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 >> 3);
    t94 = (t93 & 1);
    *((unsigned int *)t87) = t94;
    t96 = (t0 + 17936);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memset(t95, 0, 8);
    t99 = (t95 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    *((unsigned int *)t95) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t99) = t104;
    t105 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t105 & 7U);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t106 & 7U);
    t107 = ((char*)((ng4)));
    xsi_vlogtype_concat(t82, 5, 5, 3U, t107, 1, t95, 3, t86, 1);
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t39, 5, t53, 5, t82, 5);
    goto LAB35;

LAB33:    memcpy(t39, t53, 8);
    goto LAB35;

}

static void Initial_18420_29(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18420, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 21776);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_18422_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 33656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18422, ng0);
    t2 = (t0 + 41864);
    *((int *)t2) = 1;
    t3 = (t0 + 33688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18422, ng0);

LAB5:    xsi_set_current_line(18423, ng0);
    t4 = (t0 + 6976U);
    t5 = *((char **)t4);
    t4 = (t0 + 21776);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 50LL);
    goto LAB2;

}

static void Always_18426_31(char *t0)
{
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

LAB0:    t1 = (t0 + 33904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18426, ng0);
    t2 = (t0 + 41880);
    *((int *)t2) = 1;
    t3 = (t0 + 33936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18426, ng0);

LAB5:    xsi_set_current_line(18427, ng0);
    t4 = (t0 + 8576U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18427, ng0);

LAB9:    xsi_set_current_line(18428, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 20496);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(18429, ng0);

LAB10:    t2 = (t0 + 15616U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB11:    t4 = (t0 + 41896);
    *((int *)t4) = 1;
    t5 = (t0 + 33904U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

LAB12:    t11 = (t0 + 41896);
    *((int *)t11) = 0;
    xsi_set_current_line(18430, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 20496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

}

static void Initial_18442_32(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18442, ng0);
    t1 = ((char*)((ng32)));
    t2 = (t0 + 21936);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 69);

LAB1:    return;
}

static void Always_18444_33(char *t0)
{
    char t4[8];
    char t19[24];
    char t20[8];
    char t38[24];
    char t42[24];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 34400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18444, ng0);
    t2 = (t0 + 41912);
    *((int *)t2) = 1;
    t3 = (t0 + 34432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18444, ng0);

LAB5:    xsi_set_current_line(18445, ng0);
    t5 = (t0 + 14016U);
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

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18445, ng0);

LAB13:    xsi_set_current_line(18446, ng0);
    t21 = (t0 + 13856U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t22 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t21) != 0)
        goto LAB16;

LAB17:    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB18;

LAB19:    t34 = *((unsigned int *)t20);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t29) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t20) > 0)
        goto LAB24;

LAB25:    memcpy(t19, t38, 24);

LAB26:    t46 = (t0 + 21936);
    xsi_vlogvar_assign_value(t46, t19, 0, 0, 69);
    goto LAB12;

LAB14:    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB16:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    t33 = ((char*)((ng32)));
    goto LAB19;

LAB20:    t39 = (t0 + 18096);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t43 = (t0 + 21936);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_get_part_select_value(t42, 68, t45, 67, 0);
    xsi_vlogtype_concat(t38, 69, 69, 2U, t42, 68, t41, 1);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t19, 69, t33, 69, t38, 69);
    goto LAB26;

LAB24:    memcpy(t19, t33, 24);
    goto LAB26;

}

static void Always_18456_34(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t19[8];
    char t22[8];
    char t49[8];
    char t74[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
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
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;

LAB0:    t1 = (t0 + 34648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18456, ng0);
    t2 = (t0 + 41928);
    *((int *)t2) = 1;
    t3 = (t0 + 34680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18456, ng0);

LAB5:    xsi_set_current_line(18457, ng0);
    t6 = (t0 + 10336U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t95 = *((unsigned int *)t5);
    t96 = (~(t95));
    t97 = *((unsigned int *)t14);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t99, 8);

LAB18:    t112 = (t0 + 17296);
    xsi_vlogvar_wait_assign_value(t112, t4, 0, 0, 20, 2LL);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 7776U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = (t20 + 4);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB22;

LAB19:    if (t34 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t22) = 1;

LAB22:    memset(t19, 0, 8);
    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t38) != 0)
        goto LAB25;

LAB26:    t45 = (t19 + 4);
    t46 = *((unsigned int *)t19);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB27;

LAB28:    t70 = *((unsigned int *)t19);
    t71 = (~(t70));
    t72 = *((unsigned int *)t45);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t45) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t19) > 0)
        goto LAB33;

LAB34:    memcpy(t18, t74, 8);

LAB35:    goto LAB11;

LAB12:    t100 = (t0 + 21936);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memset(t99, 0, 8);
    t103 = (t99 + 4);
    t104 = (t102 + 8);
    t105 = (t102 + 12);
    t106 = *((unsigned int *)t104);
    t107 = (t106 >> 9);
    *((unsigned int *)t99) = t107;
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 9);
    *((unsigned int *)t103) = t109;
    t110 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t110 & 1048575U);
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 1048575U);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 20, t18, 20, t99, 20);
    goto LAB18;

LAB16:    memcpy(t4, t18, 8);
    goto LAB18;

LAB21:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t19) = 1;
    goto LAB26;

LAB25:    t44 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB26;

LAB27:    t50 = (t0 + 21936);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t49, 0, 8);
    t53 = (t49 + 4);
    t54 = (t52 + 8);
    t55 = (t52 + 12);
    t56 = *((unsigned int *)t54);
    t57 = (t56 >> 17);
    *((unsigned int *)t49) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 17);
    *((unsigned int *)t53) = t59;
    t60 = (t52 + 16);
    t61 = (t52 + 20);
    t62 = *((unsigned int *)t60);
    t63 = (t62 << 15);
    t64 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t64 | t63);
    t65 = *((unsigned int *)t61);
    t66 = (t65 << 15);
    t67 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t67 | t66);
    t68 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t68 & 1048575U);
    t69 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t69 & 1048575U);
    goto LAB28;

LAB29:    t75 = (t0 + 21936);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t74, 0, 8);
    t78 = (t74 + 4);
    t79 = (t77 + 8);
    t80 = (t77 + 12);
    t81 = *((unsigned int *)t79);
    t82 = (t81 >> 16);
    *((unsigned int *)t74) = t82;
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 16);
    *((unsigned int *)t78) = t84;
    t85 = (t77 + 16);
    t86 = (t77 + 20);
    t87 = *((unsigned int *)t85);
    t88 = (t87 << 16);
    t89 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t89 | t88);
    t90 = *((unsigned int *)t86);
    t91 = (t90 << 16);
    t92 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t92 | t91);
    t93 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t93 & 1048575U);
    t94 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t94 & 1048575U);
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t18, 20, t49, 20, t74, 20);
    goto LAB35;

LAB33:    memcpy(t18, t49, 8);
    goto LAB35;

}

static void Initial_18475_35(char *t0)
{
    char t4[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 34896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18475, ng0);

LAB4:    xsi_set_current_line(18476, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 22256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(18477, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 22096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(18478, ng0);

LAB5:    xsi_set_current_line(18478, ng0);
    t2 = (t0 + 41944);
    *((int *)t2) = 1;
    t3 = (t0 + 34928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18478, ng0);

LAB7:    xsi_set_current_line(18479, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 22096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_minus(t9, 64, t4, 64, t8, 64);
    t10 = (t0 + 22256);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(18480, ng0);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 22096);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB5;

LAB8:    goto LAB1;

}

static void NetDecl_18493_36(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 35144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18493, ng0);
    t2 = (t0 + 9216U);
    t4 = *((char **)t2);
    t2 = (t0 + 8256U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 43160);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0U);
    t67 = (t0 + 41960);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void Initial_18495_37(char *t0)
{
    char t13[8];
    char t14[8];
    char t28[8];
    char t29[8];
    char t37[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
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

LAB0:    t1 = (t0 + 35392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18495, ng0);

LAB4:    xsi_set_current_line(18496, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 22576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(18497, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 22736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(18498, ng0);

LAB5:    xsi_set_current_line(18498, ng0);
    t2 = (t0 + 41976);
    *((int *)t2) = 1;
    t3 = (t0 + 35424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18498, ng0);

LAB7:    xsi_set_current_line(18499, ng0);
    t4 = (t0 + 16096U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(18502, ng0);
    t2 = (t0 + 9056U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) != 0)
        goto LAB18;

LAB19:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (!(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB20;

LAB21:    memcpy(t37, t14, 8);

LAB22:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(18505, ng0);
    t2 = (t0 + 8896U);
    t3 = *((char **)t2);
    t2 = (t0 + 9376U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t15 = (t9 | t10);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB34;

LAB35:
LAB36:    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t31 = (t23 != 0);
    if (t31 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(18511, ng0);

LAB45:    xsi_set_current_line(18512, ng0);
    t2 = (t0 + 22576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 22576);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(18513, ng0);
    t2 = (t0 + 22576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB39:
LAB32:
LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(18499, ng0);

LAB11:    xsi_set_current_line(18500, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 22576);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(18501, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 22736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB10;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    t24 = (t0 + 22736);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng6)));
    memset(t28, 0, 8);
    xsi_vlog_signed_not_equal(t28, 32, t26, 32, t27, 32);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) != 0)
        goto LAB25;

LAB26:    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t14 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB23:    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB25:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB26;

LAB27:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t14 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB29;

LAB30:    xsi_set_current_line(18502, ng0);

LAB33:    goto LAB32;

LAB34:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    goto LAB36;

LAB37:    xsi_set_current_line(18505, ng0);

LAB40:    xsi_set_current_line(18506, ng0);
    t24 = (t0 + 22576);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng19)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t26, 32, t27, 32);
    t30 = (t0 + 22576);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 32);
    xsi_set_current_line(18507, ng0);
    t2 = (t0 + 22576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22256);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t4, 32, t12, 32);
    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB39;

LAB41:    xsi_set_current_line(18507, ng0);

LAB44:    xsi_set_current_line(18508, ng0);
    t25 = (t0 + 22576);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t30 = (t0 + 22256);
    t36 = (t30 + 56U);
    t41 = *((char **)t36);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t27, 32, t41, 32);
    t42 = (t0 + 22576);
    xsi_vlogvar_assign_value(t42, t14, 0, 0, 32);
    xsi_set_current_line(18509, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 22736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB43;

LAB46:    xsi_set_current_line(18513, ng0);

LAB49:    xsi_set_current_line(18514, ng0);
    t12 = (t0 + 22576);
    t24 = (t12 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 22256);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t25, 32, t30, 32);
    t36 = (t0 + 22576);
    xsi_vlogvar_assign_value(t36, t14, 0, 0, 32);
    xsi_set_current_line(18516, ng0);
    t2 = (t0 + 22576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(18517, ng0);
    t2 = ((char*)((ng13)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 32, t2, 32);
    t3 = (t0 + 22736);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    goto LAB48;

LAB50:    xsi_set_current_line(18516, ng0);
    t12 = ((char*)((ng6)));
    t24 = (t0 + 22576);
    xsi_vlogvar_assign_value(t24, t12, 0, 0, 32);
    goto LAB52;

LAB53:    goto LAB1;

}

static void Always_18525_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 35640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18525, ng0);
    t2 = (t0 + 41992);
    *((int *)t2) = 1;
    t3 = (t0 + 35672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18525, ng0);
    t4 = (t0 + 8896U);
    t5 = *((char **)t4);
    t4 = (t0 + 17616);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 50LL);
    goto LAB2;

}

static void Always_18529_39(char *t0)
{
    char t8[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    double t21;
    double t22;

LAB0:    t1 = (t0 + 35888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18529, ng0);
    t2 = (t0 + 42008);
    *((int *)t2) = 1;
    t3 = (t0 + 35920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18529, ng0);

LAB5:    xsi_set_current_line(18530, ng0);
    t4 = (t0 + 22736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18534, ng0);

LAB10:    xsi_set_current_line(18535, ng0);
    t2 = (t0 + 7456U);
    t3 = *((char **)t2);
    t2 = (t0 + 22416);
    t4 = (t0 + 22576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t21 = xsi_vlog_convert_to_real(t6, 32, 1);
    t22 = (t21 < 0.00000000000000000);
    if (t22 == 1)
        goto LAB11;

LAB12:    t21 = (t21 + 0.50000000000000000);
    t21 = ((int64)(t21));

LAB13:    t21 = (t21 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, t21);
    xsi_set_current_line(18536, ng0);
    t2 = (t0 + 22736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18530, ng0);

LAB9:    xsi_set_current_line(18533, ng0);
    t15 = (t0 + 22736);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng9)));
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 22736);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    goto LAB8;

LAB11:    t21 = 0.00000000000000000;
    goto LAB13;

LAB14:    xsi_set_current_line(18536, ng0);

LAB17:    xsi_set_current_line(18538, ng0);
    t7 = (t0 + 7456U);
    t9 = *((char **)t7);
    t7 = (t0 + 22416);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(18539, ng0);
    t2 = (t0 + 22736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 22736);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB16;

}

static void Always_18551_40(char *t0)
{
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

LAB0:    t1 = (t0 + 36136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18551, ng0);
    t2 = (t0 + 42024);
    *((int *)t2) = 1;
    t3 = (t0 + 36168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18551, ng0);

LAB5:    xsi_set_current_line(18552, ng0);
    t4 = (t0 + 11456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18554, ng0);

LAB10:    xsi_set_current_line(18555, ng0);
    t2 = (t0 + 22896);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 49924);
    *((int *)t3) = 1;
    NetReassign_18555_59(t0);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18552, ng0);

LAB9:    xsi_set_current_line(18553, ng0);
    t11 = (t0 + 22896);
    xsi_set_assignedflag(t11);
    t12 = (t0 + 49920);
    *((int *)t12) = 1;
    NetReassign_18553_58(t0);
    goto LAB8;

}

static void Initial_18560_41(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18560, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 23056);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_18562_42(char *t0)
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

LAB0:    t1 = (t0 + 36632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18562, ng0);
    t2 = (t0 + 42040);
    *((int *)t2) = 1;
    t3 = (t0 + 36664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18562, ng0);
    t4 = (t0 + 23056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 2, t6, 2, t7, 2);
    t9 = (t0 + 23056);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB2;

}

static void Cont_18566_43(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t28[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t67[8];
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
    char *t27;
    char *t29;
    char *t30;
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
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 36880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18566, ng0);
    t2 = (t0 + 7616U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t83 = (t0 + 43224);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t3 + 4);
    t91 = *((unsigned int *)t3);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans_delayed(t83, 0, 0, 50LL, 0);
    t96 = (t0 + 42056);
    *((int *)t96) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 23056);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t29) = t36;
    goto LAB9;

LAB10:    t43 = (t0 + 7616U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    memset(t42, 0, 8);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t45);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t53) != 0)
        goto LAB19;

LAB20:    t60 = (t42 + 4);
    t61 = *((unsigned int *)t42);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB21;

LAB22:    t76 = *((unsigned int *)t42);
    t77 = (~(t76));
    t78 = *((unsigned int *)t60);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t60) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t42) > 0)
        goto LAB27;

LAB28:    memcpy(t41, t82, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t28, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t28, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB19:    t59 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB20;

LAB21:    t64 = (t0 + 23056);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    goto LAB22;

LAB23:    t80 = (t0 + 22896);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t41, 1, t67, 1, t82, 1);
    goto LAB29;

LAB27:    memcpy(t41, t67, 8);
    goto LAB29;

}

static void Always_18585_44(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 37128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18585, ng0);
    t2 = (t0 + 42072);
    *((int *)t2) = 1;
    t3 = (t0 + 37160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18585, ng0);

LAB5:    xsi_set_current_line(18586, ng0);
    t4 = (t0 + 10176U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18589, ng0);

LAB10:    xsi_set_current_line(18590, ng0);
    t2 = (t0 + 1792);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 23376);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    xsi_set_current_line(18591, ng0);
    t2 = (t0 + 2200);
    t3 = *((char **)t2);
    t2 = (t0 + 23536);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18586, ng0);

LAB9:    xsi_set_current_line(18587, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 23376);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(18588, ng0);
    t2 = (t0 + 2064);
    t3 = *((char **)t2);
    t2 = (t0 + 23536);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB8;

}

static void Always_18601_45(char *t0)
{
    char t6[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
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
    char *t36;

LAB0:    t1 = (t0 + 37376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18601, ng0);

LAB4:    t2 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 37184);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(18603, ng0);
    t4 = (t0 + 42088);
    *((int *)t4) = 1;
    t5 = (t0 + 37408);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB5:    t3 = (t0 + 37184);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(18604, ng0);
    t2 = (t0 + 13376U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t2) == 0)
        goto LAB8;

LAB10:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB11:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(18605, ng0);
    t2 = (t0 + 12256U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB18:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(18606, ng0);
    xsi_set_current_line(18606, ng0);
    t2 = (t0 + 1792);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 25136);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB28:    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1792);
    t17 = *((char **)t5);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t17, 32, t5, 32);
    memset(t19, 0, 8);
    xsi_vlog_signed_greater(t19, 32, t4, 32, t6, 32);
    t18 = (t19 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(18607, ng0);
    t2 = (t0 + 12256U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB35:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(18608, ng0);
    xsi_set_current_line(18608, ng0);
    t2 = (t0 + 1792);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 25136);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB39:    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23536);
    t17 = (t5 + 56U);
    t18 = *((char **)t17);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t18, 32);
    t25 = (t6 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(18609, ng0);
    t2 = (t0 + 13376U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t2) == 0)
        goto LAB43;

LAB45:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB46:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(18610, ng0);
    t2 = (t0 + 12256U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t2) == 0)
        goto LAB50;

LAB52:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB53:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(18611, ng0);
    xsi_set_current_line(18611, ng0);
    t2 = (t0 + 23536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB63:    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23536);
    t17 = (t5 + 56U);
    t18 = *((char **)t17);
    t25 = ((char*)((ng21)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t18, 32, t25, 32);
    memset(t19, 0, 8);
    xsi_vlog_signed_greater(t19, 32, t4, 32, t6, 32);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(18612, ng0);
    t2 = (t0 + 12256U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t2) == 0)
        goto LAB67;

LAB69:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB70:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(18613, ng0);
    xsi_set_current_line(18613, ng0);
    t2 = (t0 + 23536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t17 = (t0 + 25136);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);

LAB74:    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23376);
    t17 = (t5 + 56U);
    t18 = *((char **)t17);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t18, 32);
    t25 = (t6 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB75;

LAB76:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(18604, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 16976);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(18605, ng0);
    t17 = (t0 + 12096U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t17) == 0)
        goto LAB22;

LAB24:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;

LAB25:    t26 = (t19 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t19) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB27;

LAB26:    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 17136);
    xsi_vlogvar_assign_value(t36, t19, 0, 0, 1);
    goto LAB21;

LAB22:    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB27:    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t19) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB26;

LAB29:    xsi_set_current_line(18606, ng0);
    t25 = (t0 + 42104);
    *((int *)t25) = 1;
    t26 = (t0 + 37408);
    *((char **)t26) = t25;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(18606, ng0);
    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t17 = (t0 + 25136);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);
    goto LAB28;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(18607, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 17136);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB38;

LAB40:    xsi_set_current_line(18608, ng0);
    t26 = (t0 + 42120);
    *((int *)t26) = 1;
    t27 = (t0 + 37408);
    *((char **)t27) = t26;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(18608, ng0);
    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t17 = (t0 + 25136);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);
    goto LAB39;

LAB43:    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(18609, ng0);
    t17 = (t0 + 13216U);
    t18 = *((char **)t17);
    t17 = (t0 + 16976);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 1);
    goto LAB49;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(18610, ng0);
    t17 = (t0 + 12096U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t17) == 0)
        goto LAB57;

LAB59:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;

LAB60:    t26 = (t19 + 4);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    *((unsigned int *)t19) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB62;

LAB61:    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 17136);
    xsi_vlogvar_assign_value(t36, t19, 0, 0, 1);
    goto LAB56;

LAB57:    *((unsigned int *)t19) = 1;
    goto LAB60;

LAB62:    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t19) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB61;

LAB64:    xsi_set_current_line(18611, ng0);
    t27 = (t0 + 42136);
    *((int *)t27) = 1;
    t36 = (t0 + 37408);
    *((char **)t36) = t27;
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(18611, ng0);
    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t17 = (t0 + 25136);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);
    goto LAB63;

LAB67:    *((unsigned int *)t6) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(18612, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 17136);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB73;

LAB75:    xsi_set_current_line(18613, ng0);
    t26 = (t0 + 42152);
    *((int *)t26) = 1;
    t27 = (t0 + 37408);
    *((char **)t27) = t26;
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(18613, ng0);
    t2 = (t0 + 25136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t17 = (t0 + 25136);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);
    goto LAB74;

}

static void Always_18616_46(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 37624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18616, ng0);
    t2 = (t0 + 42168);
    *((int *)t2) = 1;
    t3 = (t0 + 37656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18616, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 16976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_18617_47(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 37872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18617, ng0);
    t2 = (t0 + 42184);
    *((int *)t2) = 1;
    t3 = (t0 + 37904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18617, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 17136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Initial_18627_48(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18627, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 23696);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_18629_49(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t40[8];
    char t41[8];
    char t44[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 38368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18629, ng0);
    t2 = (t0 + 11616U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t68 = (t0 + 43288);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 1U;
    t74 = t73;
    t75 = (t3 + 4);
    t76 = *((unsigned int *)t3);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans(t68, 0, 0);
    t81 = (t0 + 42200);
    *((int *)t81) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 11776U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t22);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t40, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = ((char*)((ng3)));
    goto LAB22;

LAB23:    t42 = (t0 + 9536U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
    memset(t44, 0, 8);
    if (*((unsigned int *)t43) != *((unsigned int *)t42))
        goto LAB32;

LAB30:    t45 = (t43 + 4);
    t46 = (t42 + 4);
    if (*((unsigned int *)t45) != *((unsigned int *)t46))
        goto LAB32;

LAB31:    *((unsigned int *)t44) = 1;

LAB32:    memset(t41, 0, 8);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t44);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t47) != 0)
        goto LAB35;

LAB36:    t54 = (t41 + 4);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB37;

LAB38:    t61 = *((unsigned int *)t41);
    t62 = (~(t61));
    t63 = *((unsigned int *)t54);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t54) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t41) > 0)
        goto LAB43;

LAB44:    memcpy(t40, t67, 8);

LAB45:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 1, t35, 1, t40, 1);
    goto LAB29;

LAB27:    memcpy(t21, t35, 8);
    goto LAB29;

LAB33:    *((unsigned int *)t41) = 1;
    goto LAB36;

LAB35:    t53 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB36;

LAB37:    t58 = (t0 + 23696);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    goto LAB38;

LAB39:    t65 = (t0 + 18256);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t40, 1, t60, 1, t67, 1);
    goto LAB45;

LAB43:    memcpy(t40, t60, 8);
    goto LAB45;

}

static void Cont_18632_50(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t40[8];
    char t41[8];
    char t44[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 38616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18632, ng0);
    t2 = (t0 + 11616U);
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

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t68 = (t0 + 43352);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 1U;
    t74 = t73;
    t75 = (t3 + 4);
    t76 = *((unsigned int *)t3);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans(t68, 0, 0);
    t81 = (t0 + 42216);
    *((int *)t81) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 11776U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t22);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t40, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = ((char*)((ng3)));
    goto LAB22;

LAB23:    t42 = (t0 + 9536U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
    memset(t44, 0, 8);
    if (*((unsigned int *)t43) != *((unsigned int *)t42))
        goto LAB32;

LAB30:    t45 = (t43 + 4);
    t46 = (t42 + 4);
    if (*((unsigned int *)t45) != *((unsigned int *)t46))
        goto LAB32;

LAB31:    *((unsigned int *)t44) = 1;

LAB32:    memset(t41, 0, 8);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t44);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t47) != 0)
        goto LAB35;

LAB36:    t54 = (t41 + 4);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB37;

LAB38:    t61 = *((unsigned int *)t41);
    t62 = (~(t61));
    t63 = *((unsigned int *)t54);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t54) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t41) > 0)
        goto LAB43;

LAB44:    memcpy(t40, t67, 8);

LAB45:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 1, t35, 1, t40, 1);
    goto LAB29;

LAB27:    memcpy(t21, t35, 8);
    goto LAB29;

LAB33:    *((unsigned int *)t41) = 1;
    goto LAB36;

LAB35:    t53 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB36;

LAB37:    t58 = (t0 + 23696);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    goto LAB38;

LAB39:    t65 = (t0 + 18416);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t40, 1, t60, 1, t67, 1);
    goto LAB45;

LAB43:    memcpy(t40, t60, 8);
    goto LAB45;

}

static void Cont_18639_51(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 38864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18639, ng0);
    t2 = (t0 + 23216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t6) = t11;
    t12 = (t5 + 8);
    t13 = (t5 + 12);
    t14 = *((unsigned int *)t12);
    t15 = (t14 << 16);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 | t15);
    t17 = *((unsigned int *)t13);
    t18 = (t17 << 16);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 | t18);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 1048575U);
    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1048575U);
    t22 = (t0 + 43416);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1048575U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 19);
    t35 = (t0 + 42232);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Always_18641_52(char *t0)
{
    char t6[8];
    char t23[8];
    char t33[16];
    char t34[16];
    char t36[8];
    char t47[16];
    char t48[8];
    char t55[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 39112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18641, ng0);
    t2 = (t0 + 42248);
    *((int *)t2) = 1;
    t3 = (t0 + 39144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18641, ng0);

LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 38920);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(18648, ng0);
    t7 = (t0 + 11936U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(18652, ng0);
    t2 = (t0 + 10176U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t5 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB26;

LAB27:    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t5) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t6) > 0)
        goto LAB32;

LAB33:    memcpy(t33, t47, 16);

LAB34:    t67 = (t0 + 23216);
    xsi_vlogvar_assign_value(t67, t33, 0, 0, 36);
    xsi_set_current_line(18662, ng0);
    xsi_set_current_line(18662, ng0);
    t56 = (t0 + 1792);
    t57 = *((char **)t56);
    t56 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_signed_minus(t36, 32, t57, 32, t56, 32);
    t58 = (t0 + 25296);
    xsi_vlogvar_assign_value(t58, t36, 0, 0, 32);

LAB35:    t56 = (t0 + 25296);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t0 + 23376);
    t60 = (t59 + 56U);
    t67 = *((char **)t60);
    memset(t36, 0, 8);
    xsi_vlog_signed_greater(t36, 32, t58, 32, t67, 32);
    t2 = (t36 + 4);
    t35 = *((unsigned int *)t2);
    t37 = (~(t35));
    t38 = *((unsigned int *)t36);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB36;

LAB37:    t56 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t56);

LAB6:    t57 = (t0 + 38920);
    xsi_vlog_dispose_process_subprogram_invocation(t57);
    goto LAB2;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(18648, ng0);

LAB15:    xsi_set_current_line(18649, ng0);
    t21 = (t0 + 16416U);
    t22 = *((char **)t21);
    t21 = (t0 + 16376U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 23376);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_index_select_value(t23, 1, t22, t25, 2, t28, 32, 1);
    t29 = (t0 + 18256);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 1);
    xsi_set_current_line(18650, ng0);
    t2 = (t0 + 18256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB19:    t8 = (t6 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB20:    t31 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t31 & 1U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 1U);
    t15 = (t0 + 18416);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    goto LAB14;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t30);
    goto LAB20;

LAB22:    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB24:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    t7 = (t0 + 7296U);
    t8 = *((char **)t7);
    memset(t23, 0, 8);
    t7 = (t23 + 4);
    t14 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 0);
    *((unsigned int *)t23) = t20;
    t30 = *((unsigned int *)t14);
    t31 = (t30 >> 0);
    *((unsigned int *)t7) = t31;
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1048575U);
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 1048575U);
    t15 = (t0 + 23216);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    memset(t36, 0, 8);
    t24 = (t36 + 4);
    t25 = (t22 + 4);
    t37 = *((unsigned int *)t22);
    t38 = (t37 >> 0);
    *((unsigned int *)t36) = t38;
    t39 = *((unsigned int *)t25);
    t40 = (t39 >> 0);
    *((unsigned int *)t24) = t40;
    t41 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t41 & 65535U);
    t42 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t42 & 65535U);
    xsi_vlogtype_concat(t34, 36, 36, 2U, t36, 16, t23, 20);
    goto LAB27;

LAB28:    t26 = ((char*)((ng4)));
    t27 = (t0 + 7296U);
    t28 = *((char **)t27);
    memset(t48, 0, 8);
    t27 = (t48 + 4);
    t29 = (t28 + 4);
    t49 = *((unsigned int *)t28);
    t50 = (t49 >> 0);
    *((unsigned int *)t48) = t50;
    t51 = *((unsigned int *)t29);
    t52 = (t51 >> 0);
    *((unsigned int *)t27) = t52;
    t53 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t53 & 1048575U);
    t54 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t54 & 1048575U);
    t56 = (t0 + 23216);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t55, 0, 8);
    t59 = (t55 + 4);
    t60 = (t58 + 4);
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 6);
    *((unsigned int *)t55) = t62;
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 6);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t65 & 16383U);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 & 16383U);
    xsi_vlogtype_concat(t47, 36, 36, 3U, t55, 14, t48, 20, t26, 2);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t33, 36, t34, 36, t47, 36);
    goto LAB34;

LAB32:    memcpy(t33, t34, 16);
    goto LAB34;

LAB36:    xsi_set_current_line(18662, ng0);

LAB38:    xsi_set_current_line(18663, ng0);
    t3 = (t0 + 42264);
    *((int *)t3) = 1;
    t4 = (t0 + 39144);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(18664, ng0);
    t5 = (t0 + 11936U);
    t7 = *((char **)t5);
    memset(t48, 0, 8);
    t5 = (t7 + 4);
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t5) == 0)
        goto LAB40;

LAB42:    t8 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t8) = 1;

LAB43:    t14 = (t48 + 4);
    t46 = *((unsigned int *)t14);
    t49 = (~(t46));
    t50 = *((unsigned int *)t48);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(18662, ng0);
    t56 = (t0 + 25296);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_signed_minus(t36, 32, t58, 32, t59, 32);
    t60 = (t0 + 25296);
    xsi_vlogvar_assign_value(t60, t36, 0, 0, 32);
    goto LAB35;

LAB40:    *((unsigned int *)t48) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(18664, ng0);

LAB47:    xsi_set_current_line(18665, ng0);
    t15 = (t0 + 16416U);
    t21 = *((char **)t15);
    t15 = (t0 + 16376U);
    t22 = (t15 + 72U);
    t24 = *((char **)t22);
    t25 = (t0 + 25296);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t55, 1, t21, t24, 2, t27, 32, 1);
    t28 = (t0 + 18256);
    xsi_vlogvar_assign_value(t28, t55, 0, 0, 1);
    xsi_set_current_line(18666, ng0);
    t56 = (t0 + 18256);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t36, 0, 8);
    t59 = (t58 + 4);
    t35 = *((unsigned int *)t59);
    t37 = (~(t35));
    t38 = *((unsigned int *)t58);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t59) == 0)
        goto LAB48;

LAB50:    t60 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t60) = 1;

LAB51:    t67 = (t36 + 4);
    t2 = (t58 + 4);
    t41 = *((unsigned int *)t58);
    t42 = (~(t41));
    *((unsigned int *)t36) = t42;
    *((unsigned int *)t67) = 0;
    if (*((unsigned int *)t2) != 0)
        goto LAB53;

LAB52:    t49 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t49 & 1U);
    t50 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t50 & 1U);
    t3 = (t0 + 18416);
    xsi_vlogvar_assign_value(t3, t36, 0, 0, 1);
    goto LAB46;

LAB48:    *((unsigned int *)t36) = 1;
    goto LAB51;

LAB53:    t43 = *((unsigned int *)t36);
    t44 = *((unsigned int *)t2);
    *((unsigned int *)t36) = (t43 | t44);
    t45 = *((unsigned int *)t67);
    t46 = *((unsigned int *)t2);
    *((unsigned int *)t67) = (t45 | t46);
    goto LAB52;

}

static void Cont_18683_53(char *t0)
{
    char t5[8];
    char t36[8];
    char t55[8];
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
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
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
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 39360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18683, ng0);
    t2 = (t0 + 9696U);
    t3 = *((char **)t2);
    t2 = (t0 + 9856U);
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
LAB6:    t37 = (t0 + 10016U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t38 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (~(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t44 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t44) = 1;

LAB10:    t45 = (t36 + 4);
    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (~(t47));
    *((unsigned int *)t36) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB12;

LAB11:    t53 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t56 = *((unsigned int *)t5);
    t57 = *((unsigned int *)t36);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t5 + 4);
    t60 = (t36 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t87 = (t0 + 43480);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 1U;
    t93 = t92;
    t94 = (t55 + 4);
    t95 = *((unsigned int *)t55);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans_delayed(t87, 0, 0, 50LL, 0);
    t100 = (t0 + 42280);
    *((int *)t100) = 1;

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

LAB7:    *((unsigned int *)t36) = 1;
    goto LAB10;

LAB12:    t49 = *((unsigned int *)t36);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t36) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB11;

LAB13:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t5 + 4);
    t70 = (t36 + 4);
    t71 = *((unsigned int *)t5);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t36);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB15;

}

static void Cont_18685_54(char *t0)
{
    char t5[8];
    char t38[8];
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
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 39608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18685, ng0);
    t2 = (t0 + 9696U);
    t3 = *((char **)t2);
    t2 = (t0 + 9856U);
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
LAB6:    t36 = (t0 + 10016U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t37);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t36 = (t5 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 43544);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t38 + 4);
    t77 = *((unsigned int *)t38);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans_delayed(t69, 0, 0, 50LL, 0);
    t82 = (t0 + 42296);
    *((int *)t82) = 1;

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

LAB7:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t5 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t5);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t63);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    goto LAB9;

}

static void Always_18699_55(char *t0)
{
    char t13[8];
    char t19[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    int t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 39856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18699, ng0);
    t2 = (t0 + 42312);
    *((int *)t2) = 1;
    t3 = (t0 + 39888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18699, ng0);

LAB5:    xsi_set_current_line(18700, ng0);
    t4 = (t0 + 13536U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18702, ng0);
    t2 = (t0 + 13696U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18700, ng0);

LAB9:    xsi_set_current_line(18701, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 23856);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(18702, ng0);
    t11 = (t0 + 4896U);
    t12 = *((char **)t11);
    t11 = (t0 + 4736U);
    t20 = *((char **)t11);
    xsi_vlogtype_concat(t19, 2, 2, 2U, t20, 1, t12, 1);

LAB17:    t11 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t19, 2, t11, 2);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng22)));
    t21 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng33)));
    t21 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t21 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(18708, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    goto LAB16;

LAB18:    xsi_set_current_line(18703, ng0);
    t22 = ((char*)((ng4)));
    t23 = (t0 + 23856);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    goto LAB30;

LAB20:    xsi_set_current_line(18704, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 23856);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB30;

LAB22:    xsi_set_current_line(18705, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 23856);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB30;

LAB24:    xsi_set_current_line(18706, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 23856);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB30;

LAB26:    xsi_set_current_line(18707, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 23856);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB30;

}

static void Cont_18716_56(char *t0)
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

LAB0:    t1 = (t0 + 40104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18716, ng0);
    t2 = (t0 + 23856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 43608);
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 20LL, 0);
    t18 = (t0 + 42328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_18721_57(char *t0)
{
    char t13[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 40352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18721, ng0);
    t2 = (t0 + 42344);
    *((int *)t2) = 1;
    t3 = (t0 + 40384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18721, ng0);

LAB5:    xsi_set_current_line(18722, ng0);
    t4 = (t0 + 6336U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18724, ng0);

LAB12:    xsi_set_current_line(18725, ng0);
    t2 = (t0 + 4576U);
    t3 = *((char **)t2);
    t2 = (t0 + 17776);
    t4 = (t0 + 17776);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB13;

LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(18722, ng0);

LAB9:    xsi_set_current_line(18723, ng0);
    t11 = (t0 + 4576U);
    t12 = *((char **)t11);
    t11 = (t0 + 17776);
    t14 = (t0 + 17776);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, 50LL);
    goto LAB11;

LAB13:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 50LL);
    goto LAB14;

}

static void NetReassign_18553_58(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 40600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18553, ng0);
    t3 = 0;
    t2 = (t0 + 14496U);
    t4 = *((char **)t2);
    t2 = (t0 + 49920);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 42360);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 22896);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 1, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 42360);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_18555_59(char *t0)
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

LAB0:    t1 = (t0 + 40848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18555, ng0);
    t3 = 0;
    t2 = (t0 + 22416);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 49924);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 42376);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 22896);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 42376);
    *((int *)t8) = 1;
    goto LAB8;

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

LAB0:    t1 = (t0 + 41096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 43672);
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


extern void secureip_m_00000000001222288503_2668006550_init()
{
	static char *pe[] = {(void *)Cont_17912_0,(void *)Cont_17913_1,(void *)Always_17917_2,(void *)Initial_17992_3,(void *)Initial_18019_4,(void *)Always_18078_5,(void *)Cont_18083_6,(void *)Initial_18087_7,(void *)Cont_18096_8,(void *)Initial_18111_9,(void *)Cont_18130_10,(void *)Initial_18141_11,(void *)Cont_18225_12,(void *)Cont_18226_13,(void *)Initial_18232_14,(void *)Initial_18247_15,(void *)Initial_18264_16,(void *)Always_18266_17,(void *)Initial_18270_18,(void *)Cont_18297_19,(void *)NetDecl_18307_20,(void *)Initial_18309_21,(void *)Cont_18358_22,(void *)Initial_18368_23,(void *)Always_18370_24,(void *)Initial_18382_25,(void *)Always_18383_26,(void *)Always_18391_27,(void *)Cont_18410_28,(void *)Initial_18420_29,(void *)Always_18422_30,(void *)Always_18426_31,(void *)Initial_18442_32,(void *)Always_18444_33,(void *)Always_18456_34,(void *)Initial_18475_35,(void *)NetDecl_18493_36,(void *)Initial_18495_37,(void *)Always_18525_38,(void *)Always_18529_39,(void *)Always_18551_40,(void *)Initial_18560_41,(void *)Always_18562_42,(void *)Cont_18566_43,(void *)Always_18585_44,(void *)Always_18601_45,(void *)Always_18616_46,(void *)Always_18617_47,(void *)Initial_18627_48,(void *)Cont_18629_49,(void *)Cont_18632_50,(void *)Cont_18639_51,(void *)Always_18641_52,(void *)Cont_18683_53,(void *)Cont_18685_54,(void *)Always_18699_55,(void *)Cont_18716_56,(void *)Always_18721_57,(void *)NetReassign_18553_58,(void *)NetReassign_18555_59,(void *)implSig1_execute};
	xsi_register_didat("secureip_m_00000000001222288503_2668006550", "isim/top_test_bench.exe.sim/secureip/m_00000000001222288503_2668006550.didat");
	xsi_register_executes(pe);
}
