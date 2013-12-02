#include "fgpp/util/export.h"
#include "gfpp/boot/config.h"

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    struct Utf32
    {
        Utf32(
        )
        {
        }
    };
}

namespace {
    const fg::Utf32 UTF32;
}

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

    fg::Bool existsBinDir(
        const BootConfig &
    )
    {
        return false;
    }

    const fg::Utf32 & getBinDir(
        const BootConfig &
    )
    {
        return UTF32;
    }

    fg::Bool setBinDir(
        BootConfig &
        , const fg::Utf32 &
    )
    {
        return false;
    }

    void clearBinDir(
        BootConfig &
    )
    {
    }
}
