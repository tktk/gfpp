#ifndef GFPP_BOOT_GAMECONFIG_H
#define GFPP_BOOT_GAMECONFIG_H

#include "gf/boot/gameconfig.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
    typedef GfGameConfig GameConfig;

    GFEXPORT GameConfig * newGameConfig(
    );

    GFEXPORT void free(
        GameConfig &
    );

    GFEXPORT const Utf32 * getBinDir(
        const GameConfig &
    );

    GFEXPORT Bool setBinDir(
        GameConfig &
        , const Utf32 &
    );

    GFEXPORT const Utf32 * getMainFile(
        const GameConfig &
    );

    GFEXPORT Bool setMainFile(
        GameConfig &
        , const Utf32 &
    );

    GFEXPORT const Utf32 * getMain(
        const GameConfig &
    );

    GFEXPORT Bool setMain(
        GameConfig &
        , const Utf32 &
    );
}

template<>
inline void gfFree(
    gf::GameConfig &    _gameConfig
)
{
    gf::free(
        _gameConfig
    );
}

#endif  // GFPP_BOOT_GAMECONFIG_H
