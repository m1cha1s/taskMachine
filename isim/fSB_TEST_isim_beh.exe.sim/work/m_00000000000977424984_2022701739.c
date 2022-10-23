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
static const char *ng0 = "C:/Users/michal/Desktop/sdCardTest/fastSerialBus.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 1U};
static int ng4[] = {2, 0};
static int ng5[] = {9, 0};



static void Always_26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 6328);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_30_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6344);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_35_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2728);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t16) != 0)
        goto LAB6;

LAB7:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t34, 8);

LAB16:    t35 = (t0 + 6488);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 1U;
    t41 = t40;
    t42 = (t3 + 4);
    t43 = *((unsigned int *)t3);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans(t35, 0, 0);
    t48 = (t0 + 6360);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 3848);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    goto LAB9;

LAB10:    t34 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t29, 1, t34, 1);
    goto LAB16;

LAB14:    memcpy(t3, t29, 8);
    goto LAB16;

}

static void Always_37_3(char *t0)
{
    char t8[8];
    char t30[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6376);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t31 = (t0 + 2888);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t34) == 0)
        goto LAB14;

LAB16:    t40 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t40) = 1;

LAB17:    t41 = (t30 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t30);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(39, ng0);
    t47 = ((char*)((ng2)));
    t48 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t48, t47, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Always_43_4(char *t0)
{
    char t10[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
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
    char *t49;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6392);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3048);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 + 4);
    t15 = (t9 + 4);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t10 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = (t6 + 4);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = *((unsigned int *)t25);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (~(t29));
    t35 = (~(t33));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t35);
    goto LAB8;

LAB9:    xsi_set_current_line(44, ng0);
    t44 = (t0 + 3688);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t46, 16, t47, 32);
    t49 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t49, t48, 0, 0, 16, 0LL);
    goto LAB11;

}

static void Always_47_5(char *t0)
{
    char t7[8];
    char t19[8];
    char t30[8];
    char t38[8];
    char t81[8];
    char t84[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    int t109;
    unsigned int t110;
    unsigned int t111;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    t3 = (t0 + 6040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t38, t7, 8);

LAB12:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) != 0)
        goto LAB38;

LAB39:    t8 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB40;

LAB41:    memcpy(t30, t7, 8);

LAB42:    t43 = (t30 + 4);
    t65 = *((unsigned int *)t43);
    t66 = (~(t65));
    t67 = *((unsigned int *)t30);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t18 | t24);
    t26 = (~(t25));
    t27 = (t17 & t26);
    if (t27 != 0)
        goto LAB75;

LAB72:    if (t25 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t7) = 1;

LAB75:    memset(t19, 0, 8);
    t15 = (t7 + 4);
    t28 = *((unsigned int *)t15);
    t32 = (~(t28));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t15) != 0)
        goto LAB78;

LAB79:    t21 = (t19 + 4);
    t36 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t21);
    t40 = (t36 || t39);
    if (t40 > 0)
        goto LAB80;

LAB81:    memcpy(t81, t19, 8);

LAB82:    t79 = (t81 + 4);
    t103 = *((unsigned int *)t79);
    t104 = (~(t103));
    t105 = *((unsigned int *)t81);
    t110 = (t105 & t104);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t5) != 0)
        goto LAB100;

LAB101:    t8 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB102;

LAB103:    memcpy(t38, t7, 8);

LAB104:    t52 = (t38 + 4);
    t71 = *((unsigned int *)t52);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB116;

LAB117:
LAB118:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t5) != 0)
        goto LAB130;

LAB131:    t8 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB132;

LAB133:    memcpy(t30, t7, 8);

LAB134:    t43 = (t30 + 4);
    t65 = *((unsigned int *)t43);
    t66 = (~(t65));
    t67 = *((unsigned int *)t30);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 3208);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t23) == 0)
        goto LAB13;

LAB15:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;

LAB16:    memset(t30, 0, 8);
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t31) != 0)
        goto LAB19;

LAB20:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t7 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB19:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB21:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB23;

LAB24:    xsi_set_current_line(51, ng0);

LAB27:    xsi_set_current_line(52, ng0);
    t76 = (t0 + 3688);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t0 + 1848U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng4)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_divide(t81, 32, t80, 16, t79, 32);
    t82 = (t0 + 1848U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t81, 32, t83, 16);
    memset(t85, 0, 8);
    t82 = (t78 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t84);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t82);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB31;

LAB28:    if (t96 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t85) = 1;

LAB31:    t100 = (t85 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t85);
    t104 = (t103 & t102);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB26;

LAB30:    t99 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(52, ng0);

LAB35:    xsi_set_current_line(53, ng0);
    t106 = ((char*)((ng2)));
    t107 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t107, t106, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB34;

LAB36:    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB38:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB40:    t14 = (t0 + 3208);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t21) != 0)
        goto LAB45;

LAB46:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t19);
    t34 = (t32 & t33);
    *((unsigned int *)t30) = t34;
    t23 = (t7 + 4);
    t29 = (t19 + 4);
    t31 = (t30 + 4);
    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    t39 = (t35 | t36);
    *((unsigned int *)t31) = t39;
    t40 = *((unsigned int *)t31);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t19) = 1;
    goto LAB46;

LAB45:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB46;

LAB47:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t45 | t46);
    t37 = (t7 + 4);
    t42 = (t19 + 4);
    t47 = *((unsigned int *)t7);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (~(t49));
    t51 = *((unsigned int *)t19);
    t54 = (~(t51));
    t55 = *((unsigned int *)t42);
    t56 = (~(t55));
    t62 = (t48 & t50);
    t63 = (t54 & t56);
    t57 = (~(t62));
    t58 = (~(t63));
    t59 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t58);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    t64 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t64 & t58);
    goto LAB49;

LAB50:    xsi_set_current_line(57, ng0);

LAB53:    xsi_set_current_line(58, ng0);
    t44 = (t0 + 3688);
    t52 = (t44 + 56U);
    t53 = *((char **)t52);
    t70 = (t0 + 1848U);
    t76 = *((char **)t70);
    memset(t38, 0, 8);
    t70 = (t53 + 4);
    t77 = (t76 + 4);
    t71 = *((unsigned int *)t53);
    t72 = *((unsigned int *)t76);
    t73 = (t71 ^ t72);
    t74 = *((unsigned int *)t70);
    t75 = *((unsigned int *)t77);
    t87 = (t74 ^ t75);
    t88 = (t73 | t87);
    t89 = *((unsigned int *)t70);
    t90 = *((unsigned int *)t77);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB57;

LAB54:    if (t91 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t38) = 1;

LAB57:    t79 = (t38 + 4);
    t94 = *((unsigned int *)t79);
    t95 = (~(t94));
    t96 = *((unsigned int *)t38);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t18 | t24);
    t26 = (~(t25));
    t27 = (t17 & t26);
    if (t27 != 0)
        goto LAB67;

LAB64:    if (t25 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t7) = 1;

LAB67:    t15 = (t7 + 4);
    t28 = *((unsigned int *)t15);
    t32 = (~(t28));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB52;

LAB56:    t78 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(58, ng0);

LAB61:    xsi_set_current_line(59, ng0);
    t80 = (t0 + 1208U);
    t82 = *((char **)t80);
    t80 = (t0 + 2568);
    t83 = (t0 + 2568);
    t86 = (t83 + 72U);
    t99 = *((char **)t86);
    t100 = (t0 + 3528);
    t106 = (t100 + 56U);
    t107 = *((char **)t106);
    xsi_vlog_generic_convert_bit_index(t81, t99, 2, t107, 16, 2);
    t108 = (t81 + 4);
    t101 = *((unsigned int *)t108);
    t109 = (!(t101));
    if (t109 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 16, t5, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB60;

LAB62:    xsi_vlogvar_wait_assign_value(t80, t82, 0, *((unsigned int *)t81), 1, 0LL);
    goto LAB63;

LAB66:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(63, ng0);

LAB71:    xsi_set_current_line(64, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB74:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t19) = 1;
    goto LAB79;

LAB78:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB79;

LAB80:    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    t31 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t37 = (t29 + 4);
    t42 = (t31 + 4);
    t41 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t31);
    t46 = (t41 ^ t45);
    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t37);
    t54 = *((unsigned int *)t42);
    t55 = (t51 | t54);
    t56 = (~(t55));
    t57 = (t50 & t56);
    if (t57 != 0)
        goto LAB86;

LAB83:    if (t55 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t30) = 1;

LAB86:    memset(t38, 0, 8);
    t44 = (t30 + 4);
    t58 = *((unsigned int *)t44);
    t59 = (~(t58));
    t60 = *((unsigned int *)t30);
    t61 = (t60 & t59);
    t64 = (t61 & 1U);
    if (t64 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t44) != 0)
        goto LAB89;

LAB90:    t65 = *((unsigned int *)t19);
    t66 = *((unsigned int *)t38);
    t67 = (t65 & t66);
    *((unsigned int *)t81) = t67;
    t53 = (t19 + 4);
    t70 = (t38 + 4);
    t76 = (t81 + 4);
    t68 = *((unsigned int *)t53);
    t69 = *((unsigned int *)t70);
    t71 = (t68 | t69);
    *((unsigned int *)t76) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB91;

LAB92:
LAB93:    goto LAB82;

LAB85:    t43 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t38) = 1;
    goto LAB90;

LAB89:    t52 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB90;

LAB91:    t74 = *((unsigned int *)t81);
    t75 = *((unsigned int *)t76);
    *((unsigned int *)t81) = (t74 | t75);
    t77 = (t19 + 4);
    t78 = (t38 + 4);
    t87 = *((unsigned int *)t19);
    t88 = (~(t87));
    t89 = *((unsigned int *)t77);
    t90 = (~(t89));
    t91 = *((unsigned int *)t38);
    t92 = (~(t91));
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t62 = (t88 & t90);
    t63 = (t92 & t94);
    t95 = (~(t62));
    t96 = (~(t63));
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t101 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t101 & t95);
    t102 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t102 & t96);
    goto LAB93;

LAB94:    xsi_set_current_line(77, ng0);

LAB97:    xsi_set_current_line(78, ng0);
    t80 = ((char*)((ng2)));
    t82 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t82, t80, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB96;

LAB98:    *((unsigned int *)t7) = 1;
    goto LAB101;

LAB100:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB101;

LAB102:    t14 = (t0 + 3368);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t21) == 0)
        goto LAB105;

LAB107:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;

LAB108:    memset(t30, 0, 8);
    t23 = (t19 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t23) != 0)
        goto LAB111;

LAB112:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t31 = (t7 + 4);
    t37 = (t30 + 4);
    t42 = (t38 + 4);
    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t42);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB113;

LAB114:
LAB115:    goto LAB104;

LAB105:    *((unsigned int *)t19) = 1;
    goto LAB108;

LAB109:    *((unsigned int *)t30) = 1;
    goto LAB112;

LAB111:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB112;

LAB113:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t50 | t51);
    t43 = (t7 + 4);
    t44 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t43);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t66 & t64);
    t67 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB115;

LAB116:    xsi_set_current_line(81, ng0);

LAB119:    xsi_set_current_line(82, ng0);
    t53 = (t0 + 3688);
    t70 = (t53 + 56U);
    t76 = *((char **)t70);
    t77 = (t0 + 1848U);
    t78 = *((char **)t77);
    memset(t81, 0, 8);
    t77 = (t76 + 4);
    t79 = (t78 + 4);
    t87 = *((unsigned int *)t76);
    t88 = *((unsigned int *)t78);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t77);
    t91 = *((unsigned int *)t79);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t77);
    t95 = *((unsigned int *)t79);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB123;

LAB120:    if (t96 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t81) = 1;

LAB123:    t82 = (t81 + 4);
    t101 = *((unsigned int *)t82);
    t102 = (~(t101));
    t103 = *((unsigned int *)t81);
    t104 = (t103 & t102);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB124;

LAB125:
LAB126:    goto LAB118;

LAB122:    t80 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(82, ng0);

LAB127:    xsi_set_current_line(83, ng0);
    t83 = ((char*)((ng1)));
    t86 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t86, t83, 0, 0, 16, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB126;

LAB128:    *((unsigned int *)t7) = 1;
    goto LAB131;

LAB130:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB131;

LAB132:    t14 = (t0 + 3368);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t21) != 0)
        goto LAB137;

LAB138:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t19);
    t34 = (t32 & t33);
    *((unsigned int *)t30) = t34;
    t23 = (t7 + 4);
    t29 = (t19 + 4);
    t31 = (t30 + 4);
    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    t39 = (t35 | t36);
    *((unsigned int *)t31) = t39;
    t40 = *((unsigned int *)t31);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB139;

LAB140:
LAB141:    goto LAB134;

LAB135:    *((unsigned int *)t19) = 1;
    goto LAB138;

LAB137:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB138;

LAB139:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t45 | t46);
    t37 = (t7 + 4);
    t42 = (t19 + 4);
    t47 = *((unsigned int *)t7);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (~(t49));
    t51 = *((unsigned int *)t19);
    t54 = (~(t51));
    t55 = *((unsigned int *)t42);
    t56 = (~(t55));
    t62 = (t48 & t50);
    t63 = (t54 & t56);
    t57 = (~(t62));
    t58 = (~(t63));
    t59 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t58);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    t64 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t64 & t58);
    goto LAB141;

LAB142:    xsi_set_current_line(87, ng0);

LAB145:    xsi_set_current_line(88, ng0);
    t44 = (t0 + 3688);
    t52 = (t44 + 56U);
    t53 = *((char **)t52);
    t70 = (t0 + 1848U);
    t76 = *((char **)t70);
    memset(t38, 0, 8);
    t70 = (t53 + 4);
    t77 = (t76 + 4);
    t71 = *((unsigned int *)t53);
    t72 = *((unsigned int *)t76);
    t73 = (t71 ^ t72);
    t74 = *((unsigned int *)t70);
    t75 = *((unsigned int *)t77);
    t87 = (t74 ^ t75);
    t88 = (t73 | t87);
    t89 = *((unsigned int *)t70);
    t90 = *((unsigned int *)t77);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB149;

LAB146:    if (t91 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t38) = 1;

LAB149:    t79 = (t38 + 4);
    t94 = *((unsigned int *)t79);
    t95 = (~(t94));
    t96 = *((unsigned int *)t38);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB150;

LAB151:
LAB152:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t18 | t24);
    t26 = (~(t25));
    t27 = (t17 & t26);
    if (t27 != 0)
        goto LAB157;

LAB154:    if (t25 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t7) = 1;

LAB157:    t15 = (t7 + 4);
    t28 = *((unsigned int *)t15);
    t32 = (~(t28));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB158;

LAB159:
LAB160:    goto LAB144;

LAB148:    t78 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(88, ng0);

LAB153:    xsi_set_current_line(89, ng0);
    t80 = (t0 + 1688U);
    t82 = *((char **)t80);
    t80 = (t0 + 1648U);
    t83 = (t80 + 72U);
    t86 = *((char **)t83);
    t99 = (t0 + 3528);
    t100 = (t99 + 56U);
    t106 = *((char **)t100);
    xsi_vlog_generic_get_index_select_value(t81, 1, t82, t86, 2, t106, 16, 2);
    t107 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t107, t81, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 16, t5, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB152;

LAB156:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB157;

LAB158:    xsi_set_current_line(93, ng0);

LAB161:    xsi_set_current_line(94, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB160;

}


extern void work_m_00000000000977424984_2022701739_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Always_30_1,(void *)Cont_35_2,(void *)Always_37_3,(void *)Always_43_4,(void *)Always_47_5};
	xsi_register_didat("work_m_00000000000977424984_2022701739", "isim/fSB_TEST_isim_beh.exe.sim/work/m_00000000000977424984_2022701739.didat");
	xsi_register_executes(pe);
}
