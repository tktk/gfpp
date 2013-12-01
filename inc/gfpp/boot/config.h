#ifndef GFPP_BOOT_CONFIG_H
#define GFPP_BOOT_CONFIG_H

namespace gf {
    struct BootConfig;
}

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT BootConfig * newBootConfig(
    );

    FGPPEXPORT void free(
        BootConfig &
    );

    FGPPEXPORT const fg::Utf32 * getBinDir(
        const BootConfig &
    );

    FGPPEXPORT fg::Bool setBinDir(
        BootConfig &
        , const fg::Utf32 &
    );
}

#endif  // GFPP_BOOT_CONFIG_H
