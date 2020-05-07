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
static const char *ng0 = "E:/FULL_ADDER/FULL_ADDER_BEHAVIORAL.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3509173778_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char t6[16];
    char t11[16];
    char t17[16];
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 2332);
    t3 = xsi_base_array_concat(t3, t6, t7, (char)99, (unsigned char)2, (char)99, t5, (char)101);
    t8 = (t0 + 684U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 2332);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)99, (unsigned char)2, (char)99, t10, (char)101);
    t13 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t2, t3, t6, t8, t11);
    t14 = (t0 + 776U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t18 = ((IEEE_P_2592010699) + 2332);
    t14 = xsi_base_array_concat(t14, t17, t18, (char)99, (unsigned char)2, (char)99, t16, (char)101);
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t1, t13, t2, t14, t17);
    t20 = (t1 + 12U);
    t21 = *((unsigned int *)t20);
    t22 = (1U * t21);
    t23 = (2U != t22);
    if (t23 == 1)
        goto LAB2;

LAB3:    t24 = (t0 + 2256);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 2U);
    xsi_driver_first_trans_fast(t24);
    t3 = (t0 + 2196);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(2U, t22, 0);
    goto LAB3;

}

static void work_a_3509173778_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(18, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2292);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 2204);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3509173778_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(19, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2328);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 2212);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3509173778_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3509173778_3212880686_p_0,(void *)work_a_3509173778_3212880686_p_1,(void *)work_a_3509173778_3212880686_p_2};
	xsi_register_didat("work_a_3509173778_3212880686", "isim/Testbench_behavioral_adder_isim_beh.exe.sim/work/a_3509173778_3212880686.didat");
	xsi_register_executes(pe);
}
