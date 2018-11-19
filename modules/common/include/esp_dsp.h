// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _esp_dsp_H_
#define _esp_dsp_H_

#ifdef __cplusplus
extern "C"
{
#endif

// Common includes
#include "dsl_common.h"

// Signal processing
#include "dsls_dotprod.h"
#include "dsls_fir.h"
#include "dsls_biquad.h"
#include "dsls_biquad_gen.h"
#include "dsls_addC.h"
#include "dsls_mulC.h"
#include "dsls_wind_Barrel.h"

#include "dsls_d_gen.h"
#include "dsls_h_gen.h"
#include "dsls_tone_gen.h"

#include "dsls_fft2r.h"

// Matrix operations
#include "dslm_mult.h"

// Support functions
#include "dsls_view.h"


#ifdef __cplusplus
}
#endif


#endif // _esp_dsp_H_