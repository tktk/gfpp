#ifndef GF4CPP_BOOT_GAMECONFIG_H
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

    inline gf::Bool setMain(
        GameConfig &        _gameConfig
        , const gf::Utf32 & _MAIN
    )
    {
        return gfGameConfigSetMain(
            &_gameConfig
            , &_MAIN
        );
    }

    inline gf::Bool setMainPath(
        GameConfig &        _gameConfig
        , const gf::Utf32 & _MAIN_PATH
    )
    {
        return gfGameConfigSetMainPath(
            &_gameConfig
            , &_MAIN_PATH
        );
    }
}

#endif  // GF4CPP_BOOT_GAMECONFIG_H
