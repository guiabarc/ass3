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



static void Gate_29_0(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = (t3 + 4);
    if (*((unsigned int *)t9) == 1)
        goto LAB4;

LAB5:    t10 = *((unsigned int *)t3);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;

LAB6:    t14 = (t0 + 2896);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t15 = (t0 + 2816);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

}


extern void simprims_ver_m_00358400182994406296_2021654676_1251598120_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_1251598120", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_1251598120.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_0334570846_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_0334570846", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_0334570846.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_0796283930_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_0796283930", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_0796283930.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_0712776091_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_0712776091", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_0712776091.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_2795651511_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_2795651511", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_2795651511.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_2983810548_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_2983810548", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_2983810548.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_3033733237_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_3033733237", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_3033733237.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_2287233329_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_2287233329", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_2287233329.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_1592061972_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_1592061972", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_1592061972.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_1575144299_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_1575144299", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_1575144299.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_3326576388_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_3326576388", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_3326576388.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_4291476417_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_4291476417", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_4291476417.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_1023872472_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_1023872472", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_1023872472.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_0695870180_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_0695870180", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_0695870180.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_3510408007_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_3510408007", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_3510408007.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_1685059502_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676_1685059502", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676_1685059502.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00358400182994406296_2021654676_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00358400182994406296_2021654676", "isim/profir_tb_isim_par.exe.sim/simprims_ver/m_00358400182994406296_2021654676.didat");
	xsi_register_executes(pe);
}
