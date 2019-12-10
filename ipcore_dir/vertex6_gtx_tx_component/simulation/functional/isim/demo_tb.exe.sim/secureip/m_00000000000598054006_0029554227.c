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



static void NetDecl_31765_0(char *t0)
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

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31765, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
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
    t54 = (t0 + 8240);
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
    xsi_driver_vfirst_trans_delayed(t54, 0, 0U, 50LL, 0);
    t67 = (t0 + 8032);
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

static void NetDecl_31767_1(char *t0)
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

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31767, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 8304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
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
    xsi_driver_vfirst_trans_delayed(t2, 0, 3U, 1LL, 0);
    t16 = (t0 + 8048);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_31769_2(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t24[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31769, ng0);
    t2 = (t0 + 8064);
    *((int *)t2) = 1;
    t3 = (t0 + 6256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31769, ng0);

LAB5:    xsi_set_current_line(31770, ng0);
    t5 = (t0 + 2008U);
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

LAB11:    xsi_set_current_line(31773, ng0);

LAB14:    xsi_set_current_line(31774, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(31775, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB23:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB24:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & 1U);
    t13 = (t4 + 4);
    t36 = *((unsigned int *)t13);
    t39 = (~(t36));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t39);
    t45 = (t42 != 0);
    if (t45 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(31776, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t2) == 0)
        goto LAB31;

LAB33:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB34:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & 1U);
    t13 = (t4 + 4);
    t36 = *((unsigned int *)t13);
    t39 = (~(t36));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t39);
    t45 = (t42 != 0);
    if (t45 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(31777, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31770, ng0);

LAB13:    xsi_set_current_line(31771, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 50LL);
    xsi_set_current_line(31772, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    xsi_set_current_line(31774, ng0);
    t5 = (t0 + 3288U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 2);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 2);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 3U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 3U);
    t13 = (t0 + 4648);
    t19 = (t0 + 4648);
    t20 = (t19 + 72U);
    t25 = *((char **)t20);
    t26 = ((char*)((ng2)));
    t27 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t22, t23, t24, ((int*)(t25)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t24 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB18:    t39 = *((unsigned int *)t24);
    t40 = (t39 + 0);
    t41 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t23);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t13, t4, t40, *((unsigned int *)t23), t44, 50LL);
    goto LAB19;

LAB20:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB25:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB24;

LAB26:    xsi_set_current_line(31775, ng0);
    t19 = (t0 + 3288U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t25 = (t20 + 4);
    t46 = *((unsigned int *)t20);
    t47 = (t46 >> 1);
    t48 = (t47 & 1);
    *((unsigned int *)t22) = t48;
    t49 = *((unsigned int *)t25);
    t50 = (t49 >> 1);
    t51 = (t50 & 1);
    *((unsigned int *)t19) = t51;
    t26 = (t0 + 4648);
    t27 = (t0 + 4648);
    t28 = (t27 + 72U);
    t31 = *((char **)t28);
    t35 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t23, t31, 2, t35, 32, 1);
    t52 = (t23 + 4);
    t53 = *((unsigned int *)t52);
    t30 = (!(t53));
    if (t30 == 1)
        goto LAB29;

LAB30:    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t26, t22, 0, *((unsigned int *)t23), 1, 50LL);
    goto LAB30;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB36:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t21);
    goto LAB35;

LAB37:    xsi_set_current_line(31776, ng0);
    t19 = (t0 + 3288U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t25 = (t20 + 4);
    t46 = *((unsigned int *)t20);
    t47 = (t46 >> 0);
    t48 = (t47 & 1);
    *((unsigned int *)t22) = t48;
    t49 = *((unsigned int *)t25);
    t50 = (t49 >> 0);
    t51 = (t50 & 1);
    *((unsigned int *)t19) = t51;
    t26 = (t0 + 4808);
    t27 = (t0 + 4808);
    t28 = (t27 + 72U);
    t31 = *((char **)t28);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t23, t31, 2, t35, 32, 1);
    t52 = (t23 + 4);
    t53 = *((unsigned int *)t52);
    t30 = (!(t53));
    if (t30 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t26, t22, 0, *((unsigned int *)t23), 1, 50LL);
    goto LAB41;

LAB42:    xsi_set_current_line(31777, ng0);
    t5 = (t0 + 3288U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 0);
    t21 = (t18 & 1);
    *((unsigned int *)t5) = t21;
    t13 = (t0 + 4648);
    t19 = (t0 + 4648);
    t20 = (t19 + 72U);
    t25 = *((char **)t20);
    t26 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t26, 32, 1);
    t27 = (t22 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (!(t29));
    if (t30 == 1)
        goto LAB45;

LAB46:    goto LAB44;

LAB45:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t22), 1, 50LL);
    goto LAB46;

}

static void NetDecl_31785_3(char *t0)
{
    char t4[8];
    char t22[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31785, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
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
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t50 = (t0 + 2648U);
    t51 = *((char **)t50);
    t53 = *((unsigned int *)t22);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t50 = (t22 + 4);
    t56 = (t51 + 4);
    t57 = (t52 + 4);
    t58 = *((unsigned int *)t50);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB13;

LAB14:
LAB15:    t79 = (t0 + 8368);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t83, 0, 8);
    t84 = 1U;
    t85 = t84;
    t86 = (t52 + 4);
    t87 = *((unsigned int *)t52);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t86);
    t85 = (t85 & t88);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 | t84);
    t91 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t91 | t85);
    xsi_driver_vfirst_trans_delayed(t79, 0, 0U, 50LL, 0);
    t92 = (t0 + 8080);
    *((int *)t92) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

LAB13:    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t52) = (t63 | t64);
    t65 = (t22 + 4);
    t66 = (t51 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t22);
    t70 = (t69 & t68);
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t73 = *((unsigned int *)t51);
    t74 = (t73 & t72);
    t75 = (~(t70));
    t76 = (~(t74));
    t77 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t77 & t75);
    t78 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t78 & t76);
    goto LAB15;

}

static void NetDecl_31788_4(char *t0)
{
    char t4[8];
    char t22[8];
    char t50[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
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
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
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
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31788, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
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
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t51 = (t0 + 2648U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t52 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t52);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t51) == 0)
        goto LAB13;

LAB15:    t58 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t58) = 1;

LAB16:    t59 = (t50 + 4);
    t60 = (t52 + 4);
    t61 = *((unsigned int *)t52);
    t62 = (~(t61));
    *((unsigned int *)t50) = t62;
    *((unsigned int *)t59) = 0;
    if (*((unsigned int *)t60) != 0)
        goto LAB18;

LAB17:    t67 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t67 & 1U);
    t68 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t68 & 1U);
    t70 = *((unsigned int *)t22);
    t71 = *((unsigned int *)t50);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = (t22 + 4);
    t74 = (t50 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB19;

LAB20:
LAB21:    t97 = (t0 + 8432);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    memset(t101, 0, 8);
    t102 = 1U;
    t103 = t102;
    t104 = (t69 + 4);
    t105 = *((unsigned int *)t69);
    t102 = (t102 & t105);
    t106 = *((unsigned int *)t104);
    t103 = (t103 & t106);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t108 | t102);
    t109 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t109 | t103);
    xsi_driver_vfirst_trans_delayed(t97, 0, 0U, 50LL, 0);
    t110 = (t0 + 8096);
    *((int *)t110) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t3);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    goto LAB12;

LAB13:    *((unsigned int *)t50) = 1;
    goto LAB16;

LAB18:    t63 = *((unsigned int *)t50);
    t64 = *((unsigned int *)t60);
    *((unsigned int *)t50) = (t63 | t64);
    t65 = *((unsigned int *)t59);
    t66 = *((unsigned int *)t60);
    *((unsigned int *)t59) = (t65 | t66);
    goto LAB17;

LAB19:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t22 + 4);
    t84 = (t50 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t22);
    t88 = (t87 & t86);
    t89 = *((unsigned int *)t84);
    t90 = (~(t89));
    t91 = *((unsigned int *)t50);
    t92 = (t91 & t90);
    t93 = (~(t88));
    t94 = (~(t92));
    t95 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t95 & t93);
    t96 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t96 & t94);
    goto LAB21;

}

static void NetDecl_31791_5(char *t0)
{
    char t5[8];
    char t34[8];
    char t52[8];
    char t84[8];
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
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
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
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

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31791, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
LAB6:    t32 = (t0 + 2488U);
    t33 = *((char **)t32);
    t32 = (t0 + 2648U);
    t35 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t35 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t32) == 0)
        goto LAB7;

LAB9:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;

LAB10:    t42 = (t34 + 4);
    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (~(t44));
    *((unsigned int *)t34) = t45;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB12;

LAB11:    t50 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t50 & 1U);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t51 & 1U);
    t53 = *((unsigned int *)t33);
    t54 = *((unsigned int *)t34);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t33 + 4);
    t57 = (t34 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB13;

LAB14:
LAB15:    t85 = *((unsigned int *)t5);
    t86 = *((unsigned int *)t52);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = (t5 + 4);
    t89 = (t52 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB16;

LAB17:
LAB18:    t112 = (t0 + 8496);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    memset(t116, 0, 8);
    t117 = 1U;
    t118 = t117;
    t119 = (t84 + 4);
    t120 = *((unsigned int *)t84);
    t117 = (t117 & t120);
    t121 = *((unsigned int *)t119);
    t118 = (t118 & t121);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t123 | t117);
    t124 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t124 | t118);
    xsi_driver_vfirst_trans_delayed(t112, 0, 0U, 50LL, 0);
    t125 = (t0 + 8112);
    *((int *)t125) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    *((unsigned int *)t34) = 1;
    goto LAB10;

LAB12:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t43);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = *((unsigned int *)t42);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t48 | t49);
    goto LAB11;

LAB13:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t33 + 4);
    t67 = (t34 + 4);
    t68 = *((unsigned int *)t33);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB15;

LAB16:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t5 + 4);
    t99 = (t52 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t5);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t52);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB18;

}

static void NetDecl_31822_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t30[8];
    char t31[8];
    char t47[8];
    char t63[8];
    char t76[8];
    char t77[8];
    char t92[8];
    char t106[8];
    char t118[8];
    char t119[8];
    char t135[8];
    char t150[8];
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
    char *t18;
    char *t19;
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
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
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 7216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31822, ng0);
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

LAB9:    t114 = *((unsigned int *)t4);
    t115 = (~(t114));
    t116 = *((unsigned int *)t12);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t118, 8);

LAB16:    t158 = (t0 + 8560);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans_delayed(t158, 0, 0U, 50LL, 0);
    t171 = (t0 + 8128);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t72 = *((unsigned int *)t17);
    t73 = (~(t72));
    t74 = *((unsigned int *)t26);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t76, 8);

LAB29:    goto LAB9;

LAB10:    t120 = (t0 + 2328U);
    t121 = *((char **)t120);
    memset(t119, 0, 8);
    t120 = (t121 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t120) != 0)
        goto LAB58;

LAB59:    t128 = (t119 + 4);
    t129 = *((unsigned int *)t119);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB60;

LAB61:    t144 = *((unsigned int *)t119);
    t145 = (~(t144));
    t146 = *((unsigned int *)t128);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t128) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t119) > 0)
        goto LAB66;

LAB67:    memcpy(t118, t150, 8);

LAB68:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t118, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 2648U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t33 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t32) != 0)
        goto LAB32;

LAB33:    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB34;

LAB35:    t56 = *((unsigned int *)t31);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t40) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t31) > 0)
        goto LAB40;

LAB41:    memcpy(t30, t63, 8);

LAB42:    goto LAB22;

LAB23:    t78 = (t0 + 2648U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t79 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t78) != 0)
        goto LAB45;

LAB46:    t86 = (t77 + 4);
    t87 = *((unsigned int *)t77);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB47;

LAB48:    t100 = *((unsigned int *)t77);
    t101 = (~(t100));
    t102 = *((unsigned int *)t86);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t86) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t77) > 0)
        goto LAB53;

LAB54:    memcpy(t76, t106, 8);

LAB55:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t30, 1, t76, 1);
    goto LAB29;

LAB27:    memcpy(t16, t30, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB32:    t39 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB34:    t44 = (t0 + 4648);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 2);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 2);
    t55 = (t54 & 1);
    *((unsigned int *)t48) = t55;
    goto LAB35;

LAB36:    t60 = (t0 + 4648);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 0);
    t68 = (t67 & 1);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 0);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t30, 1, t47, 1, t63, 1);
    goto LAB42;

LAB40:    memcpy(t30, t47, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t77) = 1;
    goto LAB46;

LAB45:    t85 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB47:    t90 = (t0 + 2968U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t90 = (t92 + 4);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 0);
    t96 = (t95 & 1);
    *((unsigned int *)t92) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 0);
    t99 = (t98 & 1);
    *((unsigned int *)t90) = t99;
    goto LAB48;

LAB49:    t104 = (t0 + 2968U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t106 + 4);
    t107 = (t105 + 4);
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 2);
    t110 = (t109 & 1);
    *((unsigned int *)t106) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 2);
    t113 = (t112 & 1);
    *((unsigned int *)t104) = t113;
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t76, 1, t92, 1, t106, 1);
    goto LAB55;

LAB53:    memcpy(t76, t92, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t119) = 1;
    goto LAB59;

LAB58:    t127 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB59;

LAB60:    t132 = (t0 + 4648);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    memset(t135, 0, 8);
    t136 = (t135 + 4);
    t137 = (t134 + 4);
    t138 = *((unsigned int *)t134);
    t139 = (t138 >> 0);
    t140 = (t139 & 1);
    *((unsigned int *)t135) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 >> 0);
    t143 = (t142 & 1);
    *((unsigned int *)t136) = t143;
    goto LAB61;

LAB62:    t148 = (t0 + 2968U);
    t149 = *((char **)t148);
    memset(t150, 0, 8);
    t148 = (t150 + 4);
    t151 = (t149 + 4);
    t152 = *((unsigned int *)t149);
    t153 = (t152 >> 0);
    t154 = (t153 & 1);
    *((unsigned int *)t150) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 >> 0);
    t157 = (t156 & 1);
    *((unsigned int *)t148) = t157;
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t118, 1, t135, 1, t150, 1);
    goto LAB68;

LAB66:    memcpy(t118, t135, 8);
    goto LAB68;

}

static void NetDecl_31830_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t30[8];
    char t31[8];
    char t47[8];
    char t63[8];
    char t76[8];
    char t77[8];
    char t92[8];
    char t106[8];
    char t118[8];
    char t119[8];
    char t135[8];
    char t151[8];
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
    char *t18;
    char *t19;
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
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
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;

LAB0:    t1 = (t0 + 7464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31830, ng0);
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

LAB9:    t114 = *((unsigned int *)t4);
    t115 = (~(t114));
    t116 = *((unsigned int *)t12);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t118, 8);

LAB16:    t160 = (t0 + 8624);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    memset(t164, 0, 8);
    t165 = 1U;
    t166 = t165;
    t167 = (t3 + 4);
    t168 = *((unsigned int *)t3);
    t165 = (t165 & t168);
    t169 = *((unsigned int *)t167);
    t166 = (t166 & t169);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t171 | t165);
    t172 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t172 | t166);
    xsi_driver_vfirst_trans_delayed(t160, 0, 0U, 50LL, 0);
    t173 = (t0 + 8144);
    *((int *)t173) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t72 = *((unsigned int *)t17);
    t73 = (~(t72));
    t74 = *((unsigned int *)t26);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t76, 8);

LAB29:    goto LAB9;

LAB10:    t120 = (t0 + 2328U);
    t121 = *((char **)t120);
    memset(t119, 0, 8);
    t120 = (t121 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t120) != 0)
        goto LAB58;

LAB59:    t128 = (t119 + 4);
    t129 = *((unsigned int *)t119);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB60;

LAB61:    t144 = *((unsigned int *)t119);
    t145 = (~(t144));
    t146 = *((unsigned int *)t128);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t128) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t119) > 0)
        goto LAB66;

LAB67:    memcpy(t118, t151, 8);

LAB68:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t118, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t32 = (t0 + 2648U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t33 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t32) != 0)
        goto LAB32;

LAB33:    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB34;

LAB35:    t56 = *((unsigned int *)t31);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t40) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t31) > 0)
        goto LAB40;

LAB41:    memcpy(t30, t63, 8);

LAB42:    goto LAB22;

LAB23:    t78 = (t0 + 2648U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t79 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t78) != 0)
        goto LAB45;

LAB46:    t86 = (t77 + 4);
    t87 = *((unsigned int *)t77);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB47;

LAB48:    t100 = *((unsigned int *)t77);
    t101 = (~(t100));
    t102 = *((unsigned int *)t86);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t86) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t77) > 0)
        goto LAB53;

LAB54:    memcpy(t76, t106, 8);

LAB55:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t30, 1, t76, 1);
    goto LAB29;

LAB27:    memcpy(t16, t30, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB32:    t39 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB34:    t44 = (t0 + 4648);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 3);
    t52 = (t51 & 1);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 3);
    t55 = (t54 & 1);
    *((unsigned int *)t48) = t55;
    goto LAB35;

LAB36:    t60 = (t0 + 4648);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 1);
    t68 = (t67 & 1);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 1);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t30, 1, t47, 1, t63, 1);
    goto LAB42;

LAB40:    memcpy(t30, t47, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t77) = 1;
    goto LAB46;

LAB45:    t85 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB47:    t90 = (t0 + 2968U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t90 = (t92 + 4);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 1);
    t96 = (t95 & 1);
    *((unsigned int *)t92) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 1);
    t99 = (t98 & 1);
    *((unsigned int *)t90) = t99;
    goto LAB48;

LAB49:    t104 = (t0 + 2968U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t106 + 4);
    t107 = (t105 + 4);
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 3);
    t110 = (t109 & 1);
    *((unsigned int *)t106) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 3);
    t113 = (t112 & 1);
    *((unsigned int *)t104) = t113;
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t76, 1, t92, 1, t106, 1);
    goto LAB55;

LAB53:    memcpy(t76, t92, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t119) = 1;
    goto LAB59;

LAB58:    t127 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB59;

LAB60:    t132 = (t0 + 4648);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    memset(t135, 0, 8);
    t136 = (t135 + 4);
    t137 = (t134 + 4);
    t138 = *((unsigned int *)t134);
    t139 = (t138 >> 1);
    t140 = (t139 & 1);
    *((unsigned int *)t135) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 >> 1);
    t143 = (t142 & 1);
    *((unsigned int *)t136) = t143;
    goto LAB61;

LAB62:    t148 = (t0 + 4808);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    memset(t151, 0, 8);
    t152 = (t151 + 4);
    t153 = (t150 + 4);
    t154 = *((unsigned int *)t150);
    t155 = (t154 >> 0);
    t156 = (t155 & 1);
    *((unsigned int *)t151) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 >> 0);
    t159 = (t158 & 1);
    *((unsigned int *)t152) = t159;
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t118, 1, t135, 1, t151, 1);
    goto LAB68;

LAB66:    memcpy(t118, t135, 8);
    goto LAB68;

}

static void Always_31839_8(char *t0)
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

LAB0:    t1 = (t0 + 7712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31839, ng0);
    t2 = (t0 + 8160);
    *((int *)t2) = 1;
    t3 = (t0 + 7744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31839, ng0);

LAB5:    xsi_set_current_line(31840, ng0);
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

LAB11:    xsi_set_current_line(31842, ng0);

LAB14:    xsi_set_current_line(31843, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 4088U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t5, 1, t3, 1);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31840, ng0);

LAB13:    xsi_set_current_line(31841, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

}


extern void secureip_m_00000000000598054006_0029554227_init()
{
	static char *pe[] = {(void *)NetDecl_31765_0,(void *)NetDecl_31767_1,(void *)Always_31769_2,(void *)NetDecl_31785_3,(void *)NetDecl_31788_4,(void *)NetDecl_31791_5,(void *)NetDecl_31822_6,(void *)NetDecl_31830_7,(void *)Always_31839_8};
	xsi_register_didat("secureip_m_00000000000598054006_0029554227", "isim/demo_tb.exe.sim/secureip/m_00000000000598054006_0029554227.didat");
	xsi_register_executes(pe);
}
