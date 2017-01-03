/*
 * Copyright (C) 2014-2015 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __MX6VAR_SOM_ANDROID_H
#define __MX6VAR_SOM_ANDROID_H

#define CONFIG_CMD_FASTBOOT
#define CONFIG_ANDROID_BOOT_IMAGE
#define CONFIG_FASTBOOT_FLASH

#define CONFIG_FSL_FASTBOOT
#define CONFIG_ANDROID_RECOVERY

#define CONFIG_FASTBOOT_STORAGE_MMC

#define CONFIG_ANDROID_MAIN_MMC_BUS 2
#define CONFIG_ANDROID_BOOT_PARTITION_MMC 1
#define CONFIG_ANDROID_SYSTEM_PARTITION_MMC 5
#define CONFIG_ANDROID_RECOVERY_PARTITION_MMC 2
#define CONFIG_ANDROID_CACHE_PARTITION_MMC 6
#define CONFIG_ANDROID_DATA_PARTITION_MMC 4

#define CONFIG_CMD_BOOTA
#define CONFIG_SUPPORT_RAW_INITRD
#define CONFIG_SERIAL_TAG

#undef CONFIG_EXTRA_ENV_SETTINGS
#undef CONFIG_BOOTCOMMAND
#undef BOOT_ENV_SETTINGS


#define BOOT_ENV_SETTINGS \
	"bootcmd=" \
		"boota ${boota_dev}\0" \
	"bootcmd_android_recovery=" \
		"boota ${recovery_dev} recovery\0" \
	"fastboot_dev=mmc1\0" \
	"boota_dev=mmc1\0" \
	"recovery_dev=mmc1\0" \
	"dev_autodetect=yes\0"

#define CONFIG_EXTRA_ENV_SETTINGS \
	BOOT_ENV_SETTINGS \
	"splashpos=m,m\0" \
	"fdt_high=0xffffffff\0" \
	"initrd_high=0xffffffff\0" \
	"bootargs=" \
		"console=ttymxc0,115200 " \
		"init=/init " \
		"vmalloc=256M " \
		"androidboot.console=ttymxc0 " \
		"consoleblank=0 " \
		"androidboot.hardware=freescale " \
		"cma=384M " \
		"androidboot.dm_verity=disabled " \
		"androidboot.selinux=disabled " \
		"video=mxcfb0:dev=ldb video=mxcfb1:off video=mxcfb2:off video=mxcfb3:off\0"


#define CONFIG_USB_FASTBOOT_BUF_ADDR   CONFIG_SYS_LOAD_ADDR
#define CONFIG_USB_FASTBOOT_BUF_SIZE   0x19000000

#endif	/* __MX6VAR_SOM_ANDROID_H */
