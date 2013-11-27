#ifndef FGPP_BOOT_GAMECONFIG_H
#define FGPP_BOOT_GAMECONFIG_H

namespace fg {
    struct GameConfig;
}

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GameConfig * newGameConfig(
    );

    FGPPEXPORT void free(
        GameConfig &
    );

    FGPPEXPORT const Utf32 * getBinDir(
        const GameConfig &
    );

    FGPPEXPORT Bool setBinDir(
        GameConfig &
        , const Utf32 &
    );

    FGPPEXPORT const Utf32 * getMainFile(
        const GameConfig &
    );

    FGPPEXPORT Bool setMainFile(
        GameConfig &
        , const Utf32 &
    );

    FGPPEXPORT const Utf32 * getMain(
        const GameConfig &
    );

    FGPPEXPORT Bool setMain(
        GameConfig &
        , const Utf32 &
    );
}

#endif  // FGPP_BOOT_GAMECONFIG_H
