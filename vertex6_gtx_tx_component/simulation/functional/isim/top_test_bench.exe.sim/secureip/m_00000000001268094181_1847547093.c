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
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};



static void Always_21583_0(char *t0)
{
    char t4[8];
    char t26[8];
    char t28[8];
    char t29[8];
    char t64[8];
    char t65[8];
    char t94[8];
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
    char *t27;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
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
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21583, ng0);
    t2 = (t0 + 8352);
    *((int *)t2) = 1;
    t3 = (t0 + 6080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21583, ng0);

LAB5:    xsi_set_current_line(21584, ng0);
    t5 = (t0 + 2328U);
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

LAB11:    xsi_set_current_line(21586, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(21590, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t2) == 0)
        goto LAB26;

LAB28:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB29:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21584, ng0);

LAB13:    xsi_set_current_line(21585, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(21586, ng0);

LAB21:    xsi_set_current_line(21587, ng0);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB20;

LAB22:    xsi_set_current_line(21587, ng0);

LAB25:    xsi_set_current_line(21588, ng0);
    t19 = (t0 + 2008U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 7, t20, 7, t19, 7);
    t27 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 7, 50LL);
    goto LAB24;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(21590, ng0);

LAB33:    xsi_set_current_line(21608, ng0);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    t12 = (t0 + 1848U);
    t19 = *((char **)t12);
    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    t23 = (t21 & t22);
    *((unsigned int *)t29) = t23;
    t12 = (t13 + 4);
    t20 = (t19 + 4);
    t27 = (t29 + 4);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t20);
    t30 = (t24 | t25);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB34;

LAB35:
LAB36:    memset(t28, 0, 8);
    t53 = (t29 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t53) != 0)
        goto LAB39;

LAB40:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t28);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB41;

LAB42:    t85 = *((unsigned int *)t28);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t60) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t28) > 0)
        goto LAB47;

LAB48:    memcpy(t26, t91, 8);

LAB49:    t92 = (t0 + 1528U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    xsi_vlog_unsigned_add(t94, 7, t26, 7, t93, 7);
    t92 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t92, t94, 0, 0, 7, 50LL);
    goto LAB32;

LAB34:    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t29) = (t33 | t34);
    t35 = (t13 + 4);
    t36 = (t19 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t19);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t47);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t48);
    goto LAB36;

LAB37:    *((unsigned int *)t28) = 1;
    goto LAB40;

LAB39:    t59 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB40;

LAB41:    t66 = (t0 + 1368U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t67 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (~(t68));
    t70 = *((unsigned int *)t67);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t66) == 0)
        goto LAB50;

LAB52:    t73 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t73) = 1;

LAB53:    t74 = (t65 + 4);
    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = (~(t76));
    *((unsigned int *)t65) = t77;
    *((unsigned int *)t74) = 0;
    if (*((unsigned int *)t75) != 0)
        goto LAB55;

LAB54:    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & 1U);
    t83 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t83 & 1U);
    t84 = ((char*)((ng2)));
    xsi_vlogtype_concat(t64, 7, 7, 2U, t84, 6, t65, 1);
    goto LAB42;

LAB43:    t89 = (t0 + 4648);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t26, 7, t64, 7, t91, 7);
    goto LAB49;

LAB47:    memcpy(t26, t64, 8);
    goto LAB49;

LAB50:    *((unsigned int *)t65) = 1;
    goto LAB53;

LAB55:    t78 = *((unsigned int *)t65);
    t79 = *((unsigned int *)t75);
    *((unsigned int *)t65) = (t78 | t79);
    t80 = *((unsigned int *)t74);
    t81 = *((unsigned int *)t75);
    *((unsigned int *)t74) = (t80 | t81);
    goto LAB54;

}

static void Cont_21666_1(char *t0)
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

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21666, ng0);
    t2 = (t0 + 4648);
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
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 8560);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
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
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 8368);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_21667_2(char *t0)
{
    char t3[8];
    char t15[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21667, ng0);
    t2 = (t0 + 4648);
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
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 6, t3, 6, t14, 6);
    t16 = (t0 + 8624);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 63U;
    t22 = t21;
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 5);
    t29 = (t0 + 8384);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_21669_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21669, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2928U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3448U);
    t8 = *((char **)t7);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t8, 6, 2);
    t7 = (t0 + 8688);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    xsi_driver_vfirst_trans_delayed(t7, 0, 0, 50LL, 0);
    t21 = (t0 + 8400);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_21670_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 7040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21670, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2928U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3608U);
    t8 = *((char **)t7);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t8, 6, 2);
    t7 = (t0 + 8752);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    xsi_driver_vfirst_trans_delayed(t7, 0, 0, 50LL, 0);
    t21 = (t0 + 8416);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_21689_5(char *t0)
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

LAB0:    t1 = (t0 + 7288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21689, ng0);
    t2 = (t0 + 8432);
    *((int *)t2) = 1;
    t3 = (t0 + 7320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21689, ng0);

LAB5:    xsi_set_current_line(21690, ng0);
    t5 = (t0 + 2328U);
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

LAB11:    xsi_set_current_line(21699, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(21708, ng0);

LAB18:    xsi_set_current_line(21709, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21690, ng0);

LAB13:    xsi_set_current_line(21691, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    xsi_set_current_line(21692, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(21699, ng0);

LAB17:    xsi_set_current_line(21700, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2808U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t12, 7, t19, 4);
    t13 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 7, t4, 7, t13, 7);
    t20 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 7, 50LL);
    xsi_set_current_line(21702, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB16;

}

static void Always_21725_6(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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

LAB0:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21725, ng0);
    t2 = (t0 + 8448);
    *((int *)t2) = 1;
    t3 = (t0 + 7568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21725, ng0);

LAB5:    xsi_set_current_line(21726, ng0);
    t5 = (t0 + 2328U);
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

LAB11:    xsi_set_current_line(21757, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(21766, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21726, ng0);

LAB13:    xsi_set_current_line(21727, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(21757, ng0);

LAB17:    xsi_set_current_line(21758, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2808U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t12, 7, t19, 4);
    t13 = (t0 + 2648U);
    t20 = *((char **)t13);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 7, t4, 7, t20, 4);
    t13 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 7, t21, 7, t13, 7);
    t23 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 7, 50LL);
    goto LAB16;

LAB18:    xsi_set_current_line(21766, ng0);

LAB21:    xsi_set_current_line(21767, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2808U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t12, 7, t19, 4);
    t13 = (t0 + 2648U);
    t20 = *((char **)t13);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 7, t4, 7, t20, 4);
    t13 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 7, t21, 7, t13, 7);
    t23 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 7, 50LL);
    goto LAB20;

}

static void Cont_21784_7(char *t0)
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

LAB0:    t1 = (t0 + 7784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21784, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 7, t4, 7, t7, 7);
    t9 = (t0 + 8816);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 127U;
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
    xsi_driver_vfirst_trans_delayed(t9, 0, 6, 50LL, 0);
    t22 = (t0 + 8464);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_21786_8(char *t0)
{
    char t4[8];
    char t29[8];
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21786, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 8064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21786, ng0);

LAB5:    xsi_set_current_line(21787, ng0);
    t5 = (t0 + 2328U);
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

LAB11:    xsi_set_current_line(21791, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB19;

LAB18:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(21800, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(21809, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(21815, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t4, 0, 8);
    t6 = (t29 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t29);
    t18 = (t17 & t16);
    t21 = (t18 & 1U);
    if (t21 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t6) == 0)
        goto LAB32;

LAB34:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB35:    t13 = (t4 + 4);
    t19 = (t29 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (~(t22));
    *((unsigned int *)t4) = t23;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB37;

LAB36:    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 1U);
    t30 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t30 & 1U);
    t20 = (t4 + 4);
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = *((unsigned int *)t4);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(21825, ng0);

LAB42:    xsi_set_current_line(21826, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB40:
LAB30:
LAB26:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21787, ng0);

LAB13:    xsi_set_current_line(21788, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    xsi_set_current_line(21789, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(21790, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB19:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB18;

LAB20:    xsi_set_current_line(21791, ng0);

LAB23:    xsi_set_current_line(21792, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    xsi_set_current_line(21793, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(21794, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB22;

LAB24:    xsi_set_current_line(21800, ng0);

LAB27:    xsi_set_current_line(21801, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2808U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t12, 7, t19, 4);
    t13 = ((char*)((ng6)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 7, t4, 7, t13, 7);
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t29, 0, 0, 7, 50LL);
    xsi_set_current_line(21803, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(21804, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB26;

LAB28:    xsi_set_current_line(21809, ng0);

LAB31:    xsi_set_current_line(21810, ng0);
    t12 = (t0 + 4968);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 50LL);
    xsi_set_current_line(21811, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(21812, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB30;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB37:    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t24 | t25);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t26 | t27);
    goto LAB36;

LAB38:    xsi_set_current_line(21815, ng0);

LAB41:    xsi_set_current_line(21823, ng0);
    t36 = ((char*)((ng2)));
    t37 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 1, 50LL);
    xsi_set_current_line(21824, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB40;

}


extern void secureip_m_00000000001268094181_1847547093_init()
{
	static char *pe[] = {(void *)Always_21583_0,(void *)Cont_21666_1,(void *)Cont_21667_2,(void *)Cont_21669_3,(void *)Cont_21670_4,(void *)Always_21689_5,(void *)Always_21725_6,(void *)Cont_21784_7,(void *)Always_21786_8};
	xsi_register_didat("secureip_m_00000000001268094181_1847547093", "isim/top_test_bench.exe.sim/secureip/m_00000000001268094181_1847547093.didat");
	xsi_register_executes(pe);
}
