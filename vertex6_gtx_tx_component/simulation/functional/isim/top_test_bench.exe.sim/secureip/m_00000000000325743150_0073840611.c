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
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Initial_18794_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t22[8];
    char t35[8];
    char t55[8];
    char t69[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
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
    char *t68;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18794, ng0);

LAB4:    xsi_set_current_line(18795, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(18796, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18797, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(18798, ng0);

LAB5:    xsi_set_current_line(18798, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(18798, ng0);

LAB7:    xsi_set_current_line(18799, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(18804, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(18806, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB18;

LAB16:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB18:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(18824, ng0);

LAB40:    xsi_set_current_line(18826, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB43;

LAB41:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;

LAB43:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(18829, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB60;

LAB58:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB60;

LAB59:    *((unsigned int *)t13) = 1;

LAB60:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB46:    xsi_set_current_line(18833, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    t12 = (t0 + 2088);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    memset(t22, 0, 8);
    t24 = (t22 + 4);
    t25 = (t23 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (t17 >> 0);
    *((unsigned int *)t22) = t18;
    t19 = *((unsigned int *)t25);
    t20 = (t19 >> 0);
    *((unsigned int *)t24) = t20;
    t21 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t21 & 15U);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t28 & 15U);
    xsi_vlogtype_concat(t13, 5, 5, 2U, t22, 4, t15, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 5);

LAB21:
LAB14:
LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(18799, ng0);

LAB11:    xsi_set_current_line(18800, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(18801, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18802, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(18803, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB10;

LAB12:    xsi_set_current_line(18804, ng0);

LAB15:    goto LAB14;

LAB19:    xsi_set_current_line(18806, ng0);

LAB22:    xsi_set_current_line(18807, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 1);
    xsi_set_current_line(18808, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(18811, ng0);

LAB27:    xsi_set_current_line(18815, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    t12 = (t0 + 2408);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    memset(t22, 0, 8);
    t24 = (t22 + 4);
    t25 = (t23 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (t17 >> 4);
    t19 = (t18 & 1);
    *((unsigned int *)t22) = t19;
    t20 = *((unsigned int *)t25);
    t21 = (t20 >> 4);
    t28 = (t21 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t22);
    t31 = (t29 | t30);
    *((unsigned int *)t35) = t31;
    t26 = (t15 + 4);
    t27 = (t22 + 4);
    t34 = (t35 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    t36 = (t32 | t33);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB28;

LAB29:
LAB30:    t56 = (t0 + 2408);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t55, 0, 8);
    t59 = (t55 + 4);
    t60 = (t58 + 4);
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 0);
    *((unsigned int *)t55) = t62;
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 0);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t65 & 7U);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 & 7U);
    t67 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 5, 5, 3U, t67, 1, t55, 3, t35, 1);
    t68 = (t0 + 2408);
    xsi_vlogvar_assign_value(t68, t13, 0, 0, 5);

LAB25:    xsi_set_current_line(18822, ng0);

LAB31:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB35:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t13) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB37;

LAB36:    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 & 1U);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t36 = (t33 != 0);
    if (t36 > 0)
        goto LAB39;

LAB38:    t14 = (t0 + 3824);
    *((int *)t14) = 1;
    t23 = (t0 + 3488U);
    *((char **)t23) = &&LAB31;
    goto LAB1;

LAB23:    xsi_set_current_line(18808, ng0);

LAB26:    xsi_set_current_line(18809, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t15 + 4);
    t14 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t14);
    t20 = (t19 >> 4);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t22, 0, 8);
    t26 = (t22 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t22) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t32 & 15U);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 15U);
    xsi_vlogtype_concat(t13, 5, 5, 2U, t22, 4, t15, 1);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 5);
    goto LAB25;

LAB28:    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t35) = (t39 | t40);
    t41 = (t15 + 4);
    t42 = (t22 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t22);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & t51);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    goto LAB30;

LAB32:    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB37:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB36;

LAB39:    t24 = (t0 + 3824);
    *((int *)t24) = 0;
    xsi_set_current_line(18823, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB44:    xsi_set_current_line(18826, ng0);

LAB47:    xsi_set_current_line(18827, ng0);
    t12 = (t0 + 2568);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    memset(t22, 0, 8);
    t24 = (t22 + 4);
    t25 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t25);
    t19 = (t18 >> 1);
    *((unsigned int *)t24) = t19;
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 3U);
    t21 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t21 & 3U);
    t26 = (t0 + 2568);
    t27 = (t26 + 56U);
    t34 = *((char **)t27);
    memset(t69, 0, 8);
    t41 = (t69 + 4);
    t42 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 0);
    *((unsigned int *)t69) = t29;
    t30 = *((unsigned int *)t42);
    t31 = (t30 >> 0);
    *((unsigned int *)t41) = t31;
    t32 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t32 & 3U);
    t33 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t33 & 3U);
    memset(t55, 0, 8);
    t56 = (t69 + 4);
    t36 = *((unsigned int *)t69);
    t37 = *((unsigned int *)t56);
    t38 = (t36 | t37);
    if (t38 != 3U)
        goto LAB49;

LAB48:    if (*((unsigned int *)t56) == 0)
        goto LAB50;

LAB51:    t57 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t57) = 1;

LAB49:    memset(t35, 0, 8);
    t58 = (t55 + 4);
    t39 = *((unsigned int *)t58);
    t40 = (~(t39));
    t43 = *((unsigned int *)t55);
    t44 = (t43 & t40);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t58) == 0)
        goto LAB52;

LAB54:    t59 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t59) = 1;

LAB55:    t60 = (t35 + 4);
    t67 = (t55 + 4);
    t47 = *((unsigned int *)t55);
    t48 = (~(t47));
    *((unsigned int *)t35) = t48;
    *((unsigned int *)t60) = 0;
    if (*((unsigned int *)t67) != 0)
        goto LAB57;

LAB56:    t54 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t54 & 1U);
    t61 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t61 & 1U);
    xsi_vlogtype_concat(t15, 3, 3, 2U, t35, 1, t22, 2);
    t68 = (t0 + 2568);
    xsi_vlogvar_assign_value(t68, t15, 0, 0, 3);
    goto LAB46;

LAB50:    *((unsigned int *)t55) = 1;
    goto LAB49;

LAB52:    *((unsigned int *)t35) = 1;
    goto LAB55;

LAB57:    t49 = *((unsigned int *)t35);
    t51 = *((unsigned int *)t67);
    *((unsigned int *)t35) = (t49 | t51);
    t52 = *((unsigned int *)t60);
    t53 = *((unsigned int *)t67);
    *((unsigned int *)t60) = (t52 | t53);
    goto LAB56;

LAB61:    xsi_set_current_line(18829, ng0);

LAB64:    xsi_set_current_line(18830, ng0);
    t12 = (t0 + 2568);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    memset(t22, 0, 8);
    t24 = (t22 + 4);
    t25 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t25);
    t19 = (t18 >> 1);
    *((unsigned int *)t24) = t19;
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 3U);
    t21 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t21 & 3U);
    t26 = (t0 + 2568);
    t27 = (t26 + 56U);
    t34 = *((char **)t27);
    memset(t55, 0, 8);
    t41 = (t55 + 4);
    t42 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t55) = t30;
    t31 = *((unsigned int *)t42);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t41) = t33;
    memset(t35, 0, 8);
    t56 = (t55 + 4);
    t36 = *((unsigned int *)t56);
    t37 = (~(t36));
    t38 = *((unsigned int *)t55);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t56) == 0)
        goto LAB65;

LAB67:    t57 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t57) = 1;

LAB68:    t58 = (t35 + 4);
    t59 = (t55 + 4);
    t43 = *((unsigned int *)t55);
    t44 = (~(t43));
    *((unsigned int *)t35) = t44;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB70;

LAB69:    t51 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t51 & 1U);
    t52 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t52 & 1U);
    xsi_vlogtype_concat(t15, 3, 3, 2U, t35, 1, t22, 2);
    t60 = (t0 + 2568);
    xsi_vlogvar_assign_value(t60, t15, 0, 0, 3);
    goto LAB63;

LAB65:    *((unsigned int *)t35) = 1;
    goto LAB68;

LAB70:    t45 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t59);
    *((unsigned int *)t35) = (t45 | t47);
    t48 = *((unsigned int *)t58);
    t49 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t48 | t49);
    goto LAB69;

LAB71:    goto LAB1;

}


extern void secureip_m_00000000000325743150_0073840611_init()
{
	static char *pe[] = {(void *)Initial_18794_0};
	xsi_register_didat("secureip_m_00000000000325743150_0073840611", "isim/top_test_bench.exe.sim/secureip/m_00000000000325743150_0073840611.didat");
	xsi_register_executes(pe);
}
