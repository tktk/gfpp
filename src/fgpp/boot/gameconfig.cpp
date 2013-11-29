#include "fgpp/util/export.h"
#include "fgpp/boot/gameconfig.h"

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    GameConfig * newGameConfig(
    )
    {
        return nullptr;
    }

    void free(
        GameConfig &
    )
    {
    }

    const Utf32 * getBinDir(
        const GameConfig &
    )
    {
        return nullptr;
    }

    Bool setBinDir(
        GameConfig &
        , const Utf32 &
    )
    {
        return false;
    }
}
