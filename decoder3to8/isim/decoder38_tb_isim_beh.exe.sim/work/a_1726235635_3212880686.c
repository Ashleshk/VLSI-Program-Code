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
static const char *ng0 = "E:/decoder3to8/code.vhd";



static void work_a_1726235635_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t1 = (t0 + 2700);
    t7 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t7 = 0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2711);
    t3 = 1;
    if (3U == 3U)
        goto LAB16;

LAB17:    t3 = 0;

LAB18:    if (t3 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2722);
    t3 = 1;
    if (3U == 3U)
        goto LAB24;

LAB25:    t3 = 0;

LAB26:    if (t3 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2733);
    t3 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t3 = 0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2744);
    t3 = 1;
    if (3U == 3U)
        goto LAB40;

LAB41:    t3 = 0;

LAB42:    if (t3 != 0)
        goto LAB38;

LAB39:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2755);
    t3 = 1;
    if (3U == 3U)
        goto LAB48;

LAB49:    t3 = 0;

LAB50:    if (t3 != 0)
        goto LAB46;

LAB47:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2766);
    t3 = 1;
    if (3U == 3U)
        goto LAB56;

LAB57:    t3 = 0;

LAB58:    if (t3 != 0)
        goto LAB54;

LAB55:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2777);
    t3 = 1;
    if (3U == 3U)
        goto LAB64;

LAB65:    t3 = 0;

LAB66:    if (t3 != 0)
        goto LAB62;

LAB63:    xsi_set_current_line(25, ng0);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(17, ng0);
    t11 = (t0 + 2703);
    t13 = (t0 + 1676);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 8U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB6;

LAB8:    t8 = 0;

LAB11:    if (t8 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t9 = (t5 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t8 = (t8 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(18, ng0);
    t10 = (t0 + 2714);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB16:    t8 = 0;

LAB19:    if (t8 < 3U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB17;

LAB21:    t8 = (t8 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(19, ng0);
    t10 = (t0 + 2725);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB24:    t8 = 0;

LAB27:    if (t8 < 3U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB25;

LAB29:    t8 = (t8 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(20, ng0);
    t10 = (t0 + 2736);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB32:    t8 = 0;

LAB35:    if (t8 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB33;

LAB37:    t8 = (t8 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(21, ng0);
    t10 = (t0 + 2747);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB40:    t8 = 0;

LAB43:    if (t8 < 3U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB41;

LAB45:    t8 = (t8 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(22, ng0);
    t10 = (t0 + 2758);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB48:    t8 = 0;

LAB51:    if (t8 < 3U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB49;

LAB53:    t8 = (t8 + 1);
    goto LAB51;

LAB54:    xsi_set_current_line(23, ng0);
    t10 = (t0 + 2769);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB56:    t8 = 0;

LAB59:    if (t8 < 3U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB57;

LAB61:    t8 = (t8 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(24, ng0);
    t10 = (t0 + 2780);
    t12 = (t0 + 1676);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB64:    t8 = 0;

LAB67:    if (t8 < 3U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB65;

LAB69:    t8 = (t8 + 1);
    goto LAB67;

}


extern void work_a_1726235635_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1726235635_3212880686_p_0};
	xsi_register_didat("work_a_1726235635_3212880686", "isim/decoder38_tb_isim_beh.exe.sim/work/a_1726235635_3212880686.didat");
	xsi_register_executes(pe);
}
