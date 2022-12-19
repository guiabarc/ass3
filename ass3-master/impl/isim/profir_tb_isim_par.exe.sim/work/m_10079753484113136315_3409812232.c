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
static const char *ng0 = "/home/psd28/psd/ass3-master/src/verilog-tb/profir_tb.v";
static int ng1[] = {778593656, 0, 1952541038, 0, 1630495841, 0, 1835295092, 0, 774861673, 0, 46, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {65535U, 65535U};
static int ng4[] = {1, 0};
static const char *ng5 = "Read %d samples from input file %s";
static int ng6[] = {778593656, 0, 1869968432, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng7[] = {778593656, 0, 1869968433, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng8[] = {778593656, 0, 1869968434, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng9[] = {778593656, 0, 1869968435, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng10[] = {778593656, 0, 1869968436, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng11[] = {778593656, 0, 1869968437, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng12[] = {778593656, 0, 1869968438, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng13[] = {778593656, 0, 1869968439, 0, 1684108385, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static const char *ng14 = "Read %d samples from output file %s";
static int ng15[] = {5, 0};
static int ng16[] = {2, 0};
static int ng17[] = {127, 0};
static int ng18[] = {1000, 0};
static const char *ng19 = "----------------------------------------";
static const char *ng20 = "Number of wrong outputs: %d";
static int ng21[] = {8, 0};
static const char *ng22 = "Error in filter #0";
static const char *ng23 = "Error in filter #1";
static const char *ng24 = "Error in filter #2";
static const char *ng25 = "Error in filter #3";
static const char *ng26 = "Error in filter #4";
static const char *ng27 = "Error in filter #5";
static const char *ng28 = "Error in filter #6";
static const char *ng29 = "Error in filter #7";
static unsigned int ng30[] = {0U, 0U};
static unsigned int ng31[] = {0U, 0U, 0U, 0U};



static void Initial_61_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t26[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(62, ng0);

LAB2:    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6760);
    xsi_vlogfile_readmemh(t1, 168, t2, 0, 0, 0, 0);
    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 8200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 8200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 8360);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)119, t3, 32, (char)118, t4, 168);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 6920);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 7080);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 7240);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 7400);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 7560);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 7720);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 7880);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 8040);
    xsi_vlogfile_readmemh(t1, 184, t2, 0, 0, 0, 0);
    xsi_set_current_line(80, ng0);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 8200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB12:    t1 = (t0 + 8200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 8520);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng7)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 8840);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 9000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng9)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 9160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng10)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 9320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 9480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng12)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng13)));
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)119, t3, 32, (char)118, t4, 184);

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);
    t12 = (t0 + 6760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 6760);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 6760);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 8200);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t15, 16, t14, t18, t21, 2, 1, t24, 32, 1);
    t25 = ((char*)((ng3)));
    memset(t26, 0, 8);
    if (*((unsigned int *)t15) != *((unsigned int *)t25))
        goto LAB7;

LAB6:    t27 = (t15 + 4);
    t28 = (t25 + 4);
    if (*((unsigned int *)t27) != *((unsigned int *)t28))
        goto LAB7;

LAB8:    t29 = (t26 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t26);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 8200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 8200);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    *((unsigned int *)t26) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(67, ng0);
    t35 = (t0 + 8200);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 8360);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    goto LAB11;

LAB13:    xsi_set_current_line(81, ng0);

LAB15:    xsi_set_current_line(82, ng0);
    t12 = (t0 + 6920);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 6920);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 6920);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 8200);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t15, 16, t14, t18, t21, 2, 1, t24, 32, 1);
    t25 = ((char*)((ng3)));
    memset(t26, 0, 8);
    if (*((unsigned int *)t15) != *((unsigned int *)t25))
        goto LAB17;

LAB16:    t27 = (t15 + 4);
    t28 = (t25 + 4);
    if (*((unsigned int *)t27) != *((unsigned int *)t28))
        goto LAB17;

LAB18:    t29 = (t26 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t26);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7080);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7080);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7080);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB23;

LAB22:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB23;

LAB24:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 7240);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7240);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7240);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB29;

LAB28:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB29;

LAB30:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 7400);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7400);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7400);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB35;

LAB34:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB35;

LAB36:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 7560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7560);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7560);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB41;

LAB40:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB41;

LAB42:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7720);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7720);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB47;

LAB46:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB47;

LAB48:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 7880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 7880);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 7880);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB53;

LAB52:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB53;

LAB54:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 8040);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 8040);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 8040);
    t14 = (t13 + 64U);
    t16 = *((char **)t14);
    t17 = (t0 + 8200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t6, 16, t3, t12, t16, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t20))
        goto LAB59;

LAB58:    t21 = (t6 + 4);
    t22 = (t20 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB59;

LAB60:    t23 = (t15 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t15);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 8200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 8200);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB12;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(83, ng0);
    t35 = (t0 + 8200);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 8520);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    goto LAB21;

LAB23:    *((unsigned int *)t15) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(85, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 8680);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB27;

LAB29:    *((unsigned int *)t15) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(87, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 8840);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB33;

LAB35:    *((unsigned int *)t15) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(89, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 9000);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB39;

LAB41:    *((unsigned int *)t15) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(91, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 9160);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB45;

LAB47:    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(93, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 9320);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB51;

LAB53:    *((unsigned int *)t15) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(95, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 9480);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB57;

LAB59:    *((unsigned int *)t15) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(97, ng0);
    t24 = (t0 + 8200);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t28 = (t0 + 9640);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB63;

}

static void Initial_114_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    char *t24;

LAB0:    t1 = (t0 + 12720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);

LAB4:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 12528);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 6280);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 6280);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_128_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 12968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);

LAB4:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 12776);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 14776);
    *((int *)t3) = 1;
    t4 = (t0 + 13000);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 19008);
    *((int *)t4) = t8;

LAB7:    t9 = (t0 + 19008);
    if (*((int *)t9) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 19012);
    *((int *)t4) = t8;

LAB11:    t9 = (t0 + 19012);
    if (*((int *)t9) > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

LAB8:    xsi_set_current_line(133, ng0);
    t10 = (t0 + 14792);
    *((int *)t10) = 1;
    t11 = (t0 + 13000);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    t2 = (t0 + 19008);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB7;

LAB12:    xsi_set_current_line(136, ng0);
    t10 = (t0 + 14808);
    *((int *)t10) = 1;
    t11 = (t0 + 13000);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    t2 = (t0 + 19012);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB11;

}

static void Always_144_3(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 13216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 14824);
    *((int *)t2) = 1;
    t3 = (t0 + 13248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 6440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(151, ng0);

LAB10:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 9800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t4, 32, t5, 32);
    t6 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 9800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 9800);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 32, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(147, ng0);

LAB9:    xsi_set_current_line(148, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 9800);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(153, ng0);
    t7 = ((char*)((ng2)));
    t13 = (t0 + 9800);
    xsi_vlogvar_wait_assign_value(t13, t7, 0, 0, 32, 0LL);
    goto LAB13;

}

static void Cont_159_4(char *t0)
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
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 13464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 9800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 14952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans_delayed(t7, 0, 0, 1000LL, 0);
    t20 = (t0 + 14840);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_183_5(char *t0)
{
    char t7[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;

LAB0:    t1 = (t0 + 13712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 14856);
    *((int *)t2) = 1;
    t3 = (t0 + 13744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(184, ng0);

LAB5:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 6760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 6760);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6760);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 9960);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t0 + 6600);
    xsi_vlogvar_wait_assign_value(t17, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 10120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(200, ng0);

LAB10:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB8:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 10120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 10120);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 9960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8360);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t4, 32, t8, 32);
    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 9960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 9960);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 32, 0LL);

LAB13:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 10280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4280U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4440U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 10600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4600U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(253, ng0);
    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4760U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 10920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4920U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 11080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5080U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 11240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5240U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB79;

LAB80:
LAB81:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 11400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5400U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_case_noteq(t7, 16, t4, 16, t6, 16);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB89;

LAB90:
LAB91:    goto LAB2;

LAB6:    xsi_set_current_line(188, ng0);

LAB9:    xsi_set_current_line(189, ng0);
    t8 = (t0 + 6920);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 6920);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 6920);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 10120);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t23, 16, t10, t13, t16, 2, 1, t25, 32, 1);
    t26 = (t0 + 10280);
    xsi_vlogvar_wait_assign_value(t26, t23, 0, 0, 16, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7080);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7080);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 10440);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7240);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 10600);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 7400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7400);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7400);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 10760);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7560);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7560);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 10920);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7720);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7720);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 11080);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7880);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 7880);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 11240);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8040);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 8040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 11400);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 16, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(215, ng0);

LAB14:    xsi_set_current_line(216, ng0);
    t10 = ((char*)((ng18)));
    t11 = (t10 + 4);
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t12 = (t0 + 19016);
    *((int *)t12) = t30;

LAB15:    t13 = (t0 + 19016);
    if (*((int *)t13) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(220, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 11560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t4, 32, t5, 32);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)119, t7, 32);
    xsi_set_current_line(222, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(224, ng0);
    xsi_vlog_stop(1);
    goto LAB13;

LAB16:    xsi_set_current_line(217, ng0);
    t14 = (t0 + 14872);
    *((int *)t14) = 1;
    t15 = (t0 + 13744);
    *((char **)t15) = t14;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t2 = (t0 + 19016);
    t30 = *((int *)t2);
    *((int *)t2) = (t30 - 1);
    goto LAB15;

LAB19:    xsi_set_current_line(233, ng0);

LAB22:    xsi_set_current_line(234, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 10280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB24;

LAB23:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB24;

LAB25:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB24:    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(236, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    goto LAB28;

LAB29:    xsi_set_current_line(240, ng0);

LAB32:    xsi_set_current_line(241, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB34;

LAB33:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB34;

LAB35:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB34:    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(243, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    goto LAB38;

LAB39:    xsi_set_current_line(247, ng0);

LAB42:    xsi_set_current_line(248, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 10600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB44;

LAB43:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB44;

LAB45:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB41;

LAB44:    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(250, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    goto LAB48;

LAB49:    xsi_set_current_line(254, ng0);

LAB52:    xsi_set_current_line(255, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB54;

LAB53:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB54;

LAB55:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB51;

LAB54:    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(257, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    goto LAB58;

LAB59:    xsi_set_current_line(261, ng0);

LAB62:    xsi_set_current_line(262, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 10920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB64;

LAB63:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB64;

LAB65:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB64:    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(264, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    goto LAB68;

LAB69:    xsi_set_current_line(268, ng0);

LAB72:    xsi_set_current_line(269, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 11080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB74;

LAB73:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB74;

LAB75:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB71;

LAB74:    *((unsigned int *)t7) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(271, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    goto LAB78;

LAB79:    xsi_set_current_line(275, ng0);

LAB82:    xsi_set_current_line(276, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 11240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB84;

LAB83:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB84;

LAB85:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB86;

LAB87:
LAB88:    goto LAB81;

LAB84:    *((unsigned int *)t7) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(278, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    goto LAB88;

LAB89:    xsi_set_current_line(282, ng0);

LAB92:    xsi_set_current_line(283, ng0);
    t8 = (t0 + 11560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t10, 32, t11, 32);
    t12 = (t0 + 11560);
    xsi_vlogvar_assign_value(t12, t23, 0, 0, 32);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 11400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB94;

LAB93:    t6 = (t4 + 4);
    t8 = (t5 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB94;

LAB95:    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB96;

LAB97:
LAB98:    goto LAB91;

LAB94:    *((unsigned int *)t7) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(285, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    goto LAB98;

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

LAB0:    t1 = (t0 + 13960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng30)));
    t3 = (t0 + 15016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 511U;
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
    xsi_driver_vfirst_trans(t3, 0, 8);

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

LAB0:    t1 = (t0 + 14208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 15080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 36);
    xsi_driver_vfirst_trans(t3, 0, 35);

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

LAB0:    t1 = (t0 + 14456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng30)));
    t3 = (t0 + 15144);
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


extern void work_m_10079753484113136315_3409812232_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Initial_114_1,(void *)Initial_128_2,(void *)Always_144_3,(void *)Cont_159_4,(void *)Always_183_5,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_10079753484113136315_3409812232", "isim/profir_tb_isim_par.exe.sim/work/m_10079753484113136315_3409812232.didat");
	xsi_register_executes(pe);
}
