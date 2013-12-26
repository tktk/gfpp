#ifndef FGPP_GL_CONFIG_H
#define FGPP_GL_CONFIG_H

#include "fgpp/def/gl/config.h"
#include "fgpp/def/gl/version.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION(
        GLVersion getVersion(
            const GLConfig &
        )
        , return GL_VERSION_INVALID;
    )

    FGPP_FUNCTION_BOOL(
        Bool getDoubleBuffer(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAuxBuffers(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAuxBuffers(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsRedBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getRedBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsGreenBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getGreenBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsBlueBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getBlueBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAlphaBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAlphaBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsDepthBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getDepthBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsStencilBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getStencilBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAccumRedBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAccumRedBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAccumGreenBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAccumGreenBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAccumBlueBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAccumBlueBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool existsAccumAlphaBits(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getAccumAlphaBits(
            const GLConfig &
        )
    )
}

#endif  // FGPP_GL_CONFIG_H
