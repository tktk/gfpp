#ifndef FGPP_GL_CONFIG_H
#define FGPP_GL_CONFIG_H

namespace fg {
    struct GLConfig;
}

#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLConfig * newGLConfig(
    );

    FGPPEXPORT GLConfig * clone(
        const GLConfig &
    );

    FGPPEXPORT void free(
        GLConfig &
    );

    FGPPEXPORT Bool getDoubleBuffer(
        const GLConfig &
    );

    FGPPEXPORT void setDoubleBuffer(
        GLConfig &
        , Bool
    );

    FGPPEXPORT Bool existsAuxBuffers(
        const GLConfig &
    );

    FGPPEXPORT Int getAuxBuffers(
        const GLConfig &
    );

    FGPPEXPORT void setAuxBuffers(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAuxBuffers(
        GLConfig &
    );

    FGPPEXPORT Bool existsRedBits(
        const GLConfig &
    );

    FGPPEXPORT Int getRedBits(
        const GLConfig &
    );

    FGPPEXPORT void setRedBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearRedBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Int getGreenBits(
        const GLConfig &
    );

    FGPPEXPORT void setGreenBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearGreenBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Int getBlueBits(
        const GLConfig &
    );

    FGPPEXPORT void setBlueBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearBlueBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT void setAlphaBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAlphaBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsDepthBits(
        const GLConfig &
    );

    FGPPEXPORT Int getDepthBits(
        const GLConfig &
    );

    FGPPEXPORT void setDepthBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearDepthBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsStencilBits(
        const GLConfig &
    );

    FGPPEXPORT Int getStencilBits(
        const GLConfig &
    );

    FGPPEXPORT void setStencilBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearStencilBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsAccumRedBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumRedBits(
        const GLConfig &
    );

    FGPPEXPORT void setAccumRedBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAccumRedBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsAccumGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumGreenBits(
        const GLConfig &
    );

    FGPPEXPORT void setAccumGreenBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAccumGreenBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsAccumBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumBlueBits(
        const GLConfig &
    );

    FGPPEXPORT void setAccumBlueBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAccumBlueBits(
        GLConfig &
    );

    FGPPEXPORT Bool existsAccumAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT void setAccumAlphaBits(
        GLConfig &
        , Int
    );

    FGPPEXPORT void clearAccumAlphaBits(
        GLConfig &
    );
}

#endif  // FGPP_GL_CONFIG_H
