﻿#ifndef GF4CPP_BOOT_GAMECONFIG_H
#define GF4CPP_BOOT_GAMECONFIG_H

#include "gf/boot/gameconfig.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"

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

    inline const Utf32 * getBinDir(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return gfGameConfigGetBinDir(
            &_GAME_CONFIG
        );
    }

    inline Bool setBinDir(
        GameConfig &    _gameConfig
        , const Utf32 & _BIN_DIR
    )
    {
        return gfGameConfigSetBinDir(
            &_gameConfig
            , &_BIN_DIR
        );
    }

    inline const Utf32 * getMainFile(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return gfGameConfigGetMainFile(
            &_GAME_CONFIG
        );
    }

    inline Bool setMainFile(
        GameConfig &    _gameConfig
        , const Utf32 & _MAIN_FILE
    )
    {
        return gfGameConfigSetMainFile(
            &_gameConfig
            , &_MAIN_FILE
        );
    }

    inline const Utf32 * getMain(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return gfGameConfigGetMain(
            &_GAME_CONFIG
        );
    }

    inline Bool setMain(
        GameConfig &    _gameConfig
        , const Utf32 & _MAIN
    )
    {
        return gfGameConfigSetMain(
            &_gameConfig
            , &_MAIN
        );
    }
}

#endif  // GF4CPP_BOOT_GAMECONFIG_H
