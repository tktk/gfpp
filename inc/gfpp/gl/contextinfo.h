#ifndef GFPP_GL_CONTEXTINFO_H
#define GFPP_GL_CONTEXTINFO_H

namespace gf {
    struct GLContextInfo;
}

#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT GLContextInfo * newGLContextInfo(
    );

    GFPPEXPORT GLContextInfo * clone(
        const GLContextInfo &
    );

    GFPPEXPORT void free(
        GLContextInfo &
    );

    GFPPEXPORT Bool getDoubleBuffer(
        const GLContextInfo &
    );

    GFPPEXPORT void setDoubleBuffer(
        GLContextInfo &
        , Bool
    );

    GFPPEXPORT Bool existsAuxBuffers(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAuxBuffers(
        const GLContextInfo &
    );

    GFPPEXPORT void setAuxBuffers(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAuxBuffers(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsRedBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getRedBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setRedBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearRedBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsGreenBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getGreenBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setGreenBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearGreenBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsBlueBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getBlueBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setBlueBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearBlueBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsAlphaBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAlphaBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setAlphaBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAlphaBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsDepthBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getDepthBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setDepthBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearDepthBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsStencilBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getStencilBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setStencilBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearStencilBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsAccumRedBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAccumRedBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setAccumRedBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAccumRedBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsAccumGreenBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAccumGreenBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setAccumGreenBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAccumGreenBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsAccumBlueBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAccumBlueBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setAccumBlueBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAccumBlueBits(
        GLContextInfo &
    );

    GFPPEXPORT Bool existsAccumAlphaBits(
        const GLContextInfo &
    );

    GFPPEXPORT Int getAccumAlphaBits(
        const GLContextInfo &
    );

    GFPPEXPORT void setAccumAlphaBits(
        GLContextInfo &
        , Int
    );

    GFPPEXPORT void clearAccumAlphaBits(
        GLContextInfo &
    );
}

#endif  // GFPP_GL_CONTEXTINFO_H
