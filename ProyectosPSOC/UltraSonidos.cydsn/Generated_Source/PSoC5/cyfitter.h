#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* LCD_LCDPort */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU2_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__INTTYPE CYREG_PICU2_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__INTTYPE CYREG_PICU2_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__INTTYPE CYREG_PICU2_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__INTTYPE CYREG_PICU2_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__INTTYPE CYREG_PICU2_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__INTTYPE CYREG_PICU2_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0u
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* Trig */
#define Trig__0__INTTYPE CYREG_PICU1_INTTYPE7
#define Trig__0__MASK 0x80u
#define Trig__0__PC CYREG_PRT1_PC7
#define Trig__0__PORT 1u
#define Trig__0__SHIFT 7u
#define Trig__AG CYREG_PRT1_AG
#define Trig__AMUX CYREG_PRT1_AMUX
#define Trig__BIE CYREG_PRT1_BIE
#define Trig__BIT_MASK CYREG_PRT1_BIT_MASK
#define Trig__BYP CYREG_PRT1_BYP
#define Trig__CTL CYREG_PRT1_CTL
#define Trig__DM0 CYREG_PRT1_DM0
#define Trig__DM1 CYREG_PRT1_DM1
#define Trig__DM2 CYREG_PRT1_DM2
#define Trig__DR CYREG_PRT1_DR
#define Trig__INP_DIS CYREG_PRT1_INP_DIS
#define Trig__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Trig__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Trig__LCD_EN CYREG_PRT1_LCD_EN
#define Trig__MASK 0x80u
#define Trig__PORT 1u
#define Trig__PRT CYREG_PRT1_PRT
#define Trig__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Trig__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Trig__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Trig__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Trig__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Trig__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Trig__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Trig__PS CYREG_PRT1_PS
#define Trig__SHIFT 7u
#define Trig__SLW CYREG_PRT1_SLW

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x00u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x01u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x01u

/* Triggen */
#define Triggen_Sync_ctrl_reg__0__MASK 0x01u
#define Triggen_Sync_ctrl_reg__0__POS 0
#define Triggen_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define Triggen_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define Triggen_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB09_10_CTL
#define Triggen_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB09_10_CTL
#define Triggen_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB09_10_CTL
#define Triggen_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B1_UDB09_10_MSK
#define Triggen_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define Triggen_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB09_10_MSK
#define Triggen_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB09_10_MSK
#define Triggen_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define Triggen_Sync_ctrl_reg__CONTROL_REG CYREG_B1_UDB09_CTL
#define Triggen_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B1_UDB09_ST_CTL
#define Triggen_Sync_ctrl_reg__COUNT_REG CYREG_B1_UDB09_CTL
#define Triggen_Sync_ctrl_reg__COUNT_ST_REG CYREG_B1_UDB09_ST_CTL
#define Triggen_Sync_ctrl_reg__MASK 0x01u
#define Triggen_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define Triggen_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB09_MSK_ACTL
#define Triggen_Sync_ctrl_reg__PERIOD_REG CYREG_B1_UDB09_MSK

/* TimeDistMeas_TimerHW */
#define TimeDistMeas_TimerHW__CAP0 CYREG_TMR0_CAP0
#define TimeDistMeas_TimerHW__CAP1 CYREG_TMR0_CAP1
#define TimeDistMeas_TimerHW__CFG0 CYREG_TMR0_CFG0
#define TimeDistMeas_TimerHW__CFG1 CYREG_TMR0_CFG1
#define TimeDistMeas_TimerHW__CFG2 CYREG_TMR0_CFG2
#define TimeDistMeas_TimerHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define TimeDistMeas_TimerHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define TimeDistMeas_TimerHW__PER0 CYREG_TMR0_PER0
#define TimeDistMeas_TimerHW__PER1 CYREG_TMR0_PER1
#define TimeDistMeas_TimerHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define TimeDistMeas_TimerHW__PM_ACT_MSK 0x01u
#define TimeDistMeas_TimerHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define TimeDistMeas_TimerHW__PM_STBY_MSK 0x01u
#define TimeDistMeas_TimerHW__RT0 CYREG_TMR0_RT0
#define TimeDistMeas_TimerHW__RT1 CYREG_TMR0_RT1
#define TimeDistMeas_TimerHW__SR0 CYREG_TMR0_SR0

/* DistOutHCSRO4 */
#define DistOutHCSRO4__0__INTTYPE CYREG_PICU1_INTTYPE6
#define DistOutHCSRO4__0__MASK 0x40u
#define DistOutHCSRO4__0__PC CYREG_PRT1_PC6
#define DistOutHCSRO4__0__PORT 1u
#define DistOutHCSRO4__0__SHIFT 6u
#define DistOutHCSRO4__AG CYREG_PRT1_AG
#define DistOutHCSRO4__AMUX CYREG_PRT1_AMUX
#define DistOutHCSRO4__BIE CYREG_PRT1_BIE
#define DistOutHCSRO4__BIT_MASK CYREG_PRT1_BIT_MASK
#define DistOutHCSRO4__BYP CYREG_PRT1_BYP
#define DistOutHCSRO4__CTL CYREG_PRT1_CTL
#define DistOutHCSRO4__DM0 CYREG_PRT1_DM0
#define DistOutHCSRO4__DM1 CYREG_PRT1_DM1
#define DistOutHCSRO4__DM2 CYREG_PRT1_DM2
#define DistOutHCSRO4__DR CYREG_PRT1_DR
#define DistOutHCSRO4__INP_DIS CYREG_PRT1_INP_DIS
#define DistOutHCSRO4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define DistOutHCSRO4__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define DistOutHCSRO4__LCD_EN CYREG_PRT1_LCD_EN
#define DistOutHCSRO4__MASK 0x40u
#define DistOutHCSRO4__PORT 1u
#define DistOutHCSRO4__PRT CYREG_PRT1_PRT
#define DistOutHCSRO4__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define DistOutHCSRO4__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define DistOutHCSRO4__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define DistOutHCSRO4__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define DistOutHCSRO4__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define DistOutHCSRO4__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define DistOutHCSRO4__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define DistOutHCSRO4__PS CYREG_PRT1_PS
#define DistOutHCSRO4__SHIFT 6u
#define DistOutHCSRO4__SLW CYREG_PRT1_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "UltraSonidos"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
