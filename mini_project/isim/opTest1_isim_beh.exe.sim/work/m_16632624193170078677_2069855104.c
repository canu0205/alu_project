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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ubuntu/Downloads/public/FirstSetBit.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {7, 0};
static int ng8[] = {4, 0};



static void Always_8_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t22[8];
    char t48[8];
    char t49[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
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
    char *t46;
    char *t47;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    int t58;
    char *t59;
    unsigned int t60;
    int t61;
    int t62;
    char *t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    xsi_set_current_line(9, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB24;

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(9, ng0);

LAB9:    xsi_set_current_line(10, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = (t0 + 1008U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1608);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t21);
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
        goto LAB13;

LAB10:    if (t34 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t22) = 1;

LAB13:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(14, ng0);

LAB20:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng4)));
    t14 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t15, t22, ((int*)(t7)), 2, t13, 32, 1, t14, 32, 1);
    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t58 = (!(t8));
    t17 = (t15 + 4);
    t9 = *((unsigned int *)t17);
    t61 = (!(t9));
    t62 = (t58 && t61);
    t18 = (t22 + 4);
    t10 = *((unsigned int *)t18);
    t65 = (!(t10));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB21;

LAB22:
LAB16:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(10, ng0);

LAB17:    xsi_set_current_line(11, ng0);
    t44 = (t0 + 1608);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t0 + 1448);
    t51 = (t0 + 1448);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng4)));
    t55 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t48, t49, t50, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t49 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    t63 = (t50 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB16;

LAB18:    t67 = *((unsigned int *)t50);
    t68 = (t67 + 0);
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t49);
    t71 = (t69 - t70);
    t72 = (t71 + 1);
    xsi_vlogvar_assign_value(t47, t46, t68, *((unsigned int *)t49), t72);
    goto LAB19;

LAB21:    t11 = *((unsigned int *)t22);
    t68 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t15);
    t71 = (t12 - t25);
    t72 = (t71 + 1);
    xsi_vlogvar_assign_value(t3, t2, t68, *((unsigned int *)t15), t72);
    goto LAB22;

LAB24:    xsi_set_current_line(19, ng0);

LAB26:    xsi_set_current_line(20, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = (t0 + 1008U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1608);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t21);
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
        goto LAB30;

LAB27:    if (t34 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t22) = 1;

LAB30:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(24, ng0);

LAB37:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng7)));
    t14 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t15, t22, ((int*)(t7)), 2, t13, 32, 1, t14, 32, 1);
    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t58 = (!(t8));
    t17 = (t15 + 4);
    t9 = *((unsigned int *)t17);
    t61 = (!(t9));
    t62 = (t58 && t61);
    t18 = (t22 + 4);
    t10 = *((unsigned int *)t18);
    t65 = (!(t10));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB38;

LAB39:
LAB33:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB23;

LAB29:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(20, ng0);

LAB34:    xsi_set_current_line(21, ng0);
    t44 = (t0 + 1608);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t0 + 1448);
    t51 = (t0 + 1448);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng7)));
    t55 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t48, t49, t50, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t49 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    t63 = (t50 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t2, 32);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB33;

LAB35:    t67 = *((unsigned int *)t50);
    t68 = (t67 + 0);
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t49);
    t71 = (t69 - t70);
    t72 = (t71 + 1);
    xsi_vlogvar_assign_value(t47, t46, t68, *((unsigned int *)t49), t72);
    goto LAB36;

LAB38:    t11 = *((unsigned int *)t22);
    t68 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t15);
    t71 = (t12 - t25);
    t72 = (t71 + 1);
    xsi_vlogvar_assign_value(t3, t2, t68, *((unsigned int *)t15), t72);
    goto LAB39;

}


extern void work_m_16632624193170078677_2069855104_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_16632624193170078677_2069855104", "isim/opTest1_isim_beh.exe.sim/work/m_16632624193170078677_2069855104.didat");
	xsi_register_executes(pe);
}
