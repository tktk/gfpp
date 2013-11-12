#ifndef GF4CPP_BOOT_GAMECONFIG_H
#define GF4CPP_BOOT_GAMECONFIG_H

#include "gf/boot/gameconfig.h"
#include "gf4cpp/util/struct.h"

GF4CPPSTRUCT( gf, GameConfig )

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
        return gfGameConfigFree(
            &_gameConfig
        );
    }
}

#endif  // GF4CPP_BOOT_GAMECONFIG_H
