#ifndef GFPP_MAIN_BOOT_H
#define GFPP_MAIN_BOOT_H

#include "gfpp/main/bootconfig.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT fg::Int boot(
        const fg::Utf32 &
        , const fg::Utf32 &
        , const BootConfig &
    );
}

#endif  // GFPP_MAIN_BOOT_H
