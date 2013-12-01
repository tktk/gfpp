#ifndef GFPP_BOOT_BOOT_H
#define GFPP_BOOT_BOOT_H

#include "gfpp/boot/config.h"
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

#endif  // GFPP_BOOT_BOOT_H
