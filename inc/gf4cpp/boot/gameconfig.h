#ifndef GF4CPP_BOOT_GAMECONFIG_H
#define GF4CPP_BOOT_GAMECONFIG_H

#include "gf/boot/gameconfig.h"
#include "gf4cpp/common/functional.h"

namespace gf {
    typedef GfGameConfig GameConfig;
}

template<>
inline void gfFree(
    gf::GameConfig &    _gameConfig
)
{
    gfGameConfigFree(
        &_gameConfig
    );
}

namespace gf {
    inline GameConfig * newGameConfig(
    )
    {
        return gfGameConfigNew(
        );
    }

    inline void free(
        GameConfig &    _gameConfig
    )
    {
        gfFree( _gameConfig );
    }
}

#endif  // GF4CPP_BOOT_GAMECONFIG_H
