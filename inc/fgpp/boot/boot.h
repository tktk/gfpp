#ifndef FGPP_BOOT_BOOT_H
#define FGPP_BOOT_BOOT_H

#include "fgpp/boot/config.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Int boot(
        const Utf32 &
        , const Utf32 &
        , const BootConfig &
    );
}

#endif  // FGPP_BOOT_BOOT_H
