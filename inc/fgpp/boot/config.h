#ifndef FGPP_BOOT_CONFIG_H
#define FGPP_BOOT_CONFIG_H

namespace fg {
    struct BootConfig;
}

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT BootConfig * newBootConfig(
    );

    FGPPEXPORT void free(
        BootConfig &
    );

    FGPPEXPORT const Utf32 * getBinDir(
        const BootConfig &
    );

    FGPPEXPORT Bool setBinDir(
        BootConfig &
        , const Utf32 &
    );
}

#endif  // FGPP_BOOT_CONFIG_H
