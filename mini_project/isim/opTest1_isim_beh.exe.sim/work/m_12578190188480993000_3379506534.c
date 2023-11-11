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
static const char *ng0 = "/home/ubuntu/Downloads/public/SixBitShifter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_10_0(char *t0)
{
    char t12[8];
    char t16[8];
    char t20[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
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

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 6);
    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);

LAB19:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB22;

LAB21:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB23;

LAB24:    t15 = (t12 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);

LAB9:    xsi_set_current_line(14, ng0);
    xsi_set_current_line(14, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB10:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB11:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB13;

LAB14:    t15 = (t12 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    goto LAB8;

LAB12:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(14, ng0);

LAB18:    xsi_set_current_line(15, ng0);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 5);
    t25 = (t24 & 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 5);
    t28 = (t27 & 1);
    *((unsigned int *)t21) = t28;
    t30 = (t0 + 1768);
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
    *((unsigned int *)t29) = (t39 & 31U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 31U);
    xsi_vlogtype_concat(t16, 6, 6, 2U, t29, 5, t20, 1);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t16, 0, 0, 6);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB10;

LAB22:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(19, ng0);

LAB28:    xsi_set_current_line(20, ng0);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 31U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 31U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t29) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    xsi_vlogtype_concat(t16, 6, 6, 2U, t29, 1, t20, 5);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t16, 0, 0, 6);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB20;

}


extern void work_m_12578190188480993000_3379506534_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_12578190188480993000_3379506534", "isim/opTest1_isim_beh.exe.sim/work/m_12578190188480993000_3379506534.didat");
	xsi_register_executes(pe);
}
