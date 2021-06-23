#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

DEVICE_PATH := device/xiaomi/lmi

# Inherit from sm8250-common
include device/xiaomi/sm8250-common/BoardConfigCommon.mk

# Bluetooth
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(DEVICE_PATH)/bluetooth/include

# Display
TARGET_SCREEN_DENSITY := 440

# Init
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):init_xiaomi_lmi
TARGET_RECOVERY_DEVICE_MODULES := init_xiaomi_lmi

# Kernel
TARGET_KERNEL_CONFIG := vendor/lmi_defconfig

# Inherit from the proprietary version
include vendor/xiaomi/lmi/BoardConfigVendor.mk
