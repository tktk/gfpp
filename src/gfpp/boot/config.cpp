#include "fgpp/util/export.h"
#include "gfpp/boot/config.h"

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace gf {
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

    const fg::Utf32 * getBinDir(
        const BootConfig &
    )
    {
        return nullptr;
    }

    fg::Bool setBinDir(
        BootConfig &
        , const fg::Utf32 &
    )
    {
        return false;
    }
}
