#ifndef GFPP_BOOT_GAMECONFIG_H
#define GFPP_BOOT_GAMECONFIG_H

namespace gf {
    struct GameConfig;
}

#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT GameConfig * newGameConfig(
    );

    GFPPEXPORT void free(
        GameConfig &
    );

    GFPPEXPORT const Utf32 * getBinDir(
        const GameConfig &
    );

    GFPPEXPORT Bool setBinDir(
        GameConfig &
        , const Utf32 &
    );

    GFPPEXPORT const Utf32 * getMainFile(
        const GameConfig &
    );

    GFPPEXPORT Bool setMainFile(
        GameConfig &
        , const Utf32 &
    );

    GFPPEXPORT const Utf32 * getMain(
        const GameConfig &
    );

    GFPPEXPORT Bool setMain(
        GameConfig &
        , const Utf32 &
    );
}

#endif  // GFPP_BOOT_GAMECONFIG_H
