// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.
#include "extraapi.h"

void pixSetDataByteExtra(l_uint32 *data, l_int32 n, l_uint8 val)
{
    SET_DATA_BYTE(data, n, val);
}

void pixSetDataBitValExtra(l_uint32 *data, l_int32 n, l_uint8 val)
{
    SET_DATA_BIT_VAL(data, n, val);
}