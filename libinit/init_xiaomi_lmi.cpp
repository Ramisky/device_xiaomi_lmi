/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_kona.h>

static const variant_info_t lmi_info = {
    .hwc_value = "",
    .sku_value = "std",

    .brand = "POCO",
    .device = "lmi",
    .marketname = "",
    .model = "POCO F2 Pro",
    .build_description = "redfin-user 11 RQ3A.210605.005 7349499 release-keys",
    .build_fingerprint = "google/redfin/redfin:11/RQ3A.210605.005/7349499:user/release-keys",

    .nfc = true,
};

static const variant_info_t lmipro_info = {
    .hwc_value = "",
    .sku_value = "pro",

    .brand = "Redmi",
    .device = "lmipro",
    .marketname = "",
    .model = "Redmi K30 Pro Zoom Edition",
    .build_description = "redfin-user 11 RQ3A.210605.005 7349499 release-keys",
    .build_fingerprint = "google/redfin/redfin:11/RQ3A.210605.005/7349499:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    lmi_info,
    lmipro_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
