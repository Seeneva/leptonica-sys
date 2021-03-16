// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.
#ifndef API_EXTRAAPI_H_
#define API_EXTRAAPI_H_

#include <leptonica/arrayaccess.h>
#include <leptonica/environ.h>

// Wrapper around C macro to help with Rust bindings
void pixSetDataByteExtra(l_uint32 *data, l_int32 n, l_uint8 val);

// Clear and set bit at the same time
void pixSetDataBitValExtra(l_uint32 *data, l_int32 n, l_uint8 val);

#endif // API_EXTRAAPI_H_