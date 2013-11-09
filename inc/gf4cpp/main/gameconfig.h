#ifndef GF4CPP_MAIN_GAMECONFIG_H
#define GF4CPP_MAIN_GAMECONFIG_H

#include "gf/main/gameconfig.h"
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

#endif  // GF4CPP_MAIN_GAMECONFIG_H
