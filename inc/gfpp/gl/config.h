#ifndef GFPP_GL_CONFIG_H
#define GFPP_GL_CONFIG_H

#include "fgpp/gl/config.h"
#include "fgpp/gl/version.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT fg::GLConfig * newGLConfig(
    );

    FGPPEXPORT void free(
        fg::GLConfig &
    );

    FGPPEXPORT void setVersion(
        fg::GLConfig &
        , fg::GLVersion
    );

    FGPPEXPORT void setDoubleBuffer(
        fg::GLConfig &
        , fg::Bool
    );

    FGPPEXPORT void setAuxBuffers(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAuxBuffers(
        fg::GLConfig &
    );

    FGPPEXPORT void setRedBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearRedBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setGreenBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGreenBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setBlueBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearBlueBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setAlphaBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAlphaBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setDepthBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearDepthBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setStencilBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearStencilBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setAccumRedBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAccumRedBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setAccumGreenBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAccumGreenBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setAccumBlueBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAccumBlueBits(
        fg::GLConfig &
    );

    FGPPEXPORT void setAccumAlphaBits(
        fg::GLConfig &
        , fg::Int
    );

    FGPPEXPORT void clearAccumAlphaBits(
        fg::GLConfig &
    );
}

#endif  // GFPP_GL_CONFIG_H
