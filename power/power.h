/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define NODE_MAX (64)
#define TAP_TO_WAKE_NODE "/sys/touch_screen/easy_wakeup_gesture"

enum {
    PROFILE_POWER_SAVE = 0,
    PROFILE_BALANCED,
    PROFILE_HIGH_PERFORMANCE,
    PROFILE_BIAS_POWER_SAVE,
    PROFILE_MAX
};

typedef struct governor_settings {
    int is_interactive;
    int boost;
    int boostpulse_duration;
    int go_hispeed_load;
    int go_hispeed_load_off;
    int hispeed_freq;
    int hispeed_freq_off;
    int io_is_busy;
    int min_sample_time;
    int sampling_down_factor;
    char *target_loads;
    char *target_loads_off;
    int scaling_max_freq;
    int scaling_min_freq;
    int scaling_min_freq_off;
    int nr_run_profile_sel;
    char *scaling_governor;
} power_profile;

static power_profile profiles[PROFILE_MAX] = {
    [PROFILE_POWER_SAVE] = {
        .scaling_governor = "powersave",
        .scaling_max_freq = 400000,
        .scaling_min_freq = 400000,
        .scaling_min_freq_off = 200000,
        .nr_run_profile_sel = 2,
    },
    [PROFILE_BALANCED] = {
	.scaling_governor = "ondemand",
        .scaling_max_freq = 1209600,
        .scaling_min_freq = 400000,
        .scaling_min_freq_off = 200000,
        .nr_run_profile_sel = 0,
    },
    [PROFILE_HIGH_PERFORMANCE] = {
	.scaling_governor = "performance",
        .scaling_max_freq = 1209600,
        .scaling_min_freq = 800000,
        .scaling_min_freq_off = 200000,
        .nr_run_profile_sel = 1,
    },
    [PROFILE_BIAS_POWER_SAVE] = {
        .scaling_governor = "ondemand",
        .scaling_max_freq = 400000,
        .scaling_min_freq = 200000,
        .scaling_min_freq_off = 200000,
        .nr_run_profile_sel = 2,
    },
};
