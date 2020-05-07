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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/mux81/c.vhd";



static void work_a_1185003418_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 1436U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 2619);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB13:    t6 = (t0 + 2622);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB14:    t9 = (t0 + 2625);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB15:    t12 = (t0 + 2628);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB16:    t15 = (t0 + 2631);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB17:    t18 = (t0 + 2634);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB10;

LAB18:    t21 = (t0 + 2637);
    t23 = xsi_mem_cmp(t21, t3, 3U);
    if (t23 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (7 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(13, ng0);

LAB23:    t2 = (t0 + 1632);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(14, ng0);
    t24 = (t0 + 592U);
    t25 = *((char **)t24);
    t26 = (0 - 7);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = (t0 + 1676);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t30;
    xsi_driver_first_trans_fast_port(t31);
    goto LAB4;

LAB6:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (1 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (2 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB8:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (3 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB9:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (4 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB10:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (5 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t5 = (6 - 7);
    t27 = (t5 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t3 + t29);
    t30 = *((unsigned char *)t2);
    t4 = (t0 + 1676);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t30;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB20:;
LAB21:    t3 = (t0 + 1632);
    *((int *)t3) = 0;
    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}


extern void work_a_1185003418_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1185003418_3212880686_p_0};
	xsi_register_didat("work_a_1185003418_3212880686", "isim/mux_tb_isim_beh.exe.sim/work/a_1185003418_3212880686.didat");
	xsi_register_executes(pe);
}
