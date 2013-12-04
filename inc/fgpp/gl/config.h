#ifndef FGPP_GL_CONFIG_H
#define FGPP_GL_CONFIG_H

namespace fg {
    struct GLConfig;
}

#include "fgpp/gl/version.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLVersion getVersion(
        const GLConfig &
    );

    FGPPEXPORT Bool getDoubleBuffer(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAuxBuffers(
        const GLConfig &
    );

    FGPPEXPORT Int getAuxBuffers(
        const GLConfig &
    );

    FGPPEXPORT Bool existsRedBits(
        const GLConfig &
    );

    FGPPEXPORT Int getRedBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Int getGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Int getBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsDepthBits(
        const GLConfig &
    );

    FGPPEXPORT Int getDepthBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsStencilBits(
        const GLConfig &
    );

    FGPPEXPORT Int getStencilBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAccumRedBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumRedBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAccumGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumGreenBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAccumBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumBlueBits(
        const GLConfig &
    );

    FGPPEXPORT Bool existsAccumAlphaBits(
        const GLConfig &
    );

    FGPPEXPORT Int getAccumAlphaBits(
        const GLConfig &
    );
}

#endif  // FGPP_GL_CONFIG_H
