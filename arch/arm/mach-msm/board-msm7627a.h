/* Copyright (c) 2011-2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __ARCH_ARM_MACH_MSM_BOARD_7627A__
#define __ARCH_ARM_MACH_MSM_BOARD_7627A__

#include "pm.h"
enum {
        GPIO_EXPANDER_IRQ_BASE  = NR_MSM_IRQS + NR_GPIO_IRQS,
        GPIO_EXPANDER_GPIO_BASE = NR_MSM_GPIOS,
        /* SURF expander */
        GPIO_CORE_EXPANDER_BASE = GPIO_EXPANDER_GPIO_BASE,
        GPIO_BT_SYS_REST_EN     = GPIO_CORE_EXPANDER_BASE,
        GPIO_WLAN_EXT_POR_N,
        GPIO_DISPLAY_PWR_EN,
        GPIO_BACKLIGHT_EN,
        GPIO_PRESSURE_XCLR,
        GPIO_VREG_S3_EXP,
        GPIO_UBM2M_PWRDWN,
        GPIO_ETM_MODE_CS_N,
        GPIO_HOST_VBUS_EN,
        GPIO_SPI_MOSI,
        GPIO_SPI_MISO,
        GPIO_SPI_CLK,
        GPIO_SPI_CS0_N,
        GPIO_CORE_EXPANDER_IO13,
        GPIO_CORE_EXPANDER_IO14,
        GPIO_CORE_EXPANDER_IO15,
        /* Camera expander */
        GPIO_CAM_EXPANDER_BASE  = GPIO_CORE_EXPANDER_BASE + 16,
        GPIO_CAM_GP_STROBE_READY        = GPIO_CAM_EXPANDER_BASE,
        GPIO_CAM_GP_AFBUSY,
        GPIO_CAM_GP_CAM_PWDN,
        GPIO_CAM_GP_CAM1MP_XCLR,
        GPIO_CAM_GP_CAMIF_RESET_N,
        GPIO_CAM_GP_STROBE_CE,
        GPIO_CAM_GP_LED_EN1,
        GPIO_CAM_GP_LED_EN2,
};

struct bahama_config_register {
	u8 reg;
	u8 value;
	u8 mask;
};

void __init msm7627a_camera_init(void);
int lcd_camera_power_onoff(int on);

void __init msm7627a_add_io_devices(void);
void __init qrd7627a_add_io_devices(void);
#endif
