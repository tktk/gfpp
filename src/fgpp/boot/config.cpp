#include "fgpp/util/export.h"
#include "fgpp/boot/config.h"

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    BootConfig * newBootConfig(
    )
    {
        return nullptr;
    }

    void free(
        BootConfig &
    )
    {
    }

    const Utf32 * getBinDir(
        const BootConfig &
    )
    {
        return nullptr;
    }

    Bool setBinDir(
        BootConfig &
        , const Utf32 &
    )
    {
        return false;
    }
}
