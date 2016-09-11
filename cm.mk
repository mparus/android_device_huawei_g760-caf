# Copyright (C) 2015 The CyanogenMod Project
# Copyright (C) 2016 @surdu_petru
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Inherit full device.
$(call inherit-product, device/huawei/g760/full_g760.mk)

# Boot animation
TARGET_SCREEN_HEIGHT := 1280
TARGET_SCREEN_WIDTH := 720

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

PRODUCT_GMS_CLIENTID_BASE := android-g760

PRODUCT_NAME := cm_g760
PRODUCT_DEVICE := g760
TARGET_UNOFFICIAL_BUILD_ID := mparus

BOARD_VENDOR := g760
TARGET_VENDOR := g760
TARGET_VENDOR_PRODUCT_NAME := G760
TARGET_VENDOR_DEVICE_NAME := G760

RODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=g760 \
    BUILD_FINGERPRINT=Huawei/G760/G760:6.0.1/MOB30Z/d0545ef226:user/test-keys \
    PRIVATE_BUILD_DESC="G760-user 6.0.1 MOB30Z d0545ef226 test-keys"
