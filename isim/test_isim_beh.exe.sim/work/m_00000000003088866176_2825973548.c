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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/ISE/projects/sdCardTest/hex27segX3.v";
static int ng1[] = {255, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {159U, 0U};
static unsigned int ng13[] = {37U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {153U, 0U};
static unsigned int ng17[] = {73U, 0U};
static unsigned int ng18[] = {65U, 0U};
static unsigned int ng19[] = {27U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {10U, 0U};
static unsigned int ng23[] = {17U, 0U};
static unsigned int ng24[] = {11U, 0U};
static unsigned int ng25[] = {193U, 0U};
static unsigned int ng26[] = {12U, 0U};
static unsigned int ng27[] = {99U, 0U};
static unsigned int ng28[] = {133U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {97U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {113U, 0U};



static void Always_23_0(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 8, t5, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB18:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB18;

}

static void Always_31_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 12, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 2, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);

LAB12:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB23:    t7 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t7, 2);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB32:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);

LAB33:    t8 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t8, 4);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng29)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng31)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 4);
    if (t30 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(36, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 3, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB24:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t6, 0, 8);
    t28 = (t6 + 4);
    t29 = (t22 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t29);
    t12 = (t11 >> 0);
    *((unsigned int *)t28) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 15U);
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t6, 0, 0, 4, 0LL);
    goto LAB32;

LAB26:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1928);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 4);
    *((unsigned int *)t21) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 15U);
    t28 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 4, 0LL);
    goto LAB32;

LAB28:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1928);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 8);
    *((unsigned int *)t21) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 15U);
    t28 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 4, 0LL);
    goto LAB32;

LAB34:    xsi_set_current_line(48, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 8, 0LL);
    goto LAB66;

LAB36:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng12)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB38:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng13)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB40:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng14)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB42:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng16)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB44:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng17)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB46:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng18)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB48:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng19)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB50:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng7)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB52:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng21)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB54:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng23)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB56:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng25)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB58:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng27)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB60:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng28)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB62:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng30)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB64:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng32)));
    t8 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 8, 0LL);
    goto LAB66;

}

static void Cont_66_2(char *t0)
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
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 5064);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_67_3(char *t0)
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
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5224);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5080);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003088866176_2825973548_init()
{
	static char *pe[] = {(void *)Always_23_0,(void *)Always_31_1,(void *)Cont_66_2,(void *)Cont_67_3};
	xsi_register_didat("work_m_00000000003088866176_2825973548", "isim/test_isim_beh.exe.sim/work/m_00000000003088866176_2825973548.didat");
	xsi_register_executes(pe);
}
