#ifndef __PMIC_H__
#define __PMIC_H__

#define GPD1CON		*(volatile unsigned long *)(0xE02000C0)
#define GPD1DAT		*(volatile unsigned long *)(0xE02000C4)
#define GPD1PUD		*(volatile unsigned long *)(0xE02000C8)

#define IIC_ESCL_Hi	GPD1DAT |= (0x1<<1)//(0x1<<5)
#define IIC_ESCL_Lo	GPD1DAT &= ~(0x1<<1)//(0x1<<5)
#define IIC_ESDA_Hi	GPD1DAT |= (0x1<<0)//(0x1<<4)
#define IIC_ESDA_Lo	GPD1DAT &= ~(0x1<<0)//(0x1<<4)

#define IIC_ESCL_INP	GPD1CON &= ~(0xf<<4)//(0xf<<20)
#define IIC_ESCL_OUTP	GPD1CON = (GPD1CON & ~(0xf<<4))|(0x1<<4)//(0xf<<20))|(0x1<<20)

#define IIC_ESDA_INP	GPD1CON &= ~(0xf<<0)//(0xf<<16)
#define IIC_ESDA_OUTP	GPD1CON = (GPD1CON & ~(0xf<<0))|(0x1<<0)//(0xf<<16))|(0x1<<16)

#define DELAY			100

#define MAX8698_ADDR	0x66	// when SRAD pin = 0, CC/CDh is selected

extern void PMIC_InitIp(void);

#endif /*__PMIC_H__*/

