#include "gfpp/util/export.h"
#include "gfpp/boot/gameconfig.h"

#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
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

    const Utf32 * getMainFile(
        const GameConfig &
    )
    {
        return nullptr;
    }

    Bool setMainFile(
        GameConfig &
        , const Utf32 &
    )
    {
        return false;
    }

    const Utf32 * getMain(
        const GameConfig &
    )
    {
        return nullptr;
    }

    Bool setMain(
        GameConfig &
        , const Utf32 &
    )
    {
        return false;
    }
}
